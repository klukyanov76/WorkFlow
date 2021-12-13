#ifndef WORKFLOW_WORKFLOWEXECUTOR_H
#define WORKFLOW_WORKFLOWEXECUTOR_H
#include "istream"
#include "WorkFlowParser.h"
#include "Block.h"
#include "BlockFactory.h"
#include "Exceptions/BadBlockOrder.h"

class WorkFlowExecutor
{
public:
    void CheckBlocks(std::list<std::pair<Block*, std::vector<std::string> >> block_objects)
    {
        if(block_objects.front().first->GetType() != BlockType::IN || block_objects.back().first->GetType() != BlockType::OUT)
        {
            throw BadBlockOrder();
        }
        for(auto it = next(block_objects.begin()); next(it) != block_objects.end(); ++it)
        {
            if(it->first->GetType() != BlockType::INOUT)
            {
                throw BadBlockOrder();
            }
        }
    }
    void ExecuteWorkFlow(std::istream& in)
    {
        WorkFlowParser parser;
        auto blocks = parser.GetBlocks(in);
        std::list<std::pair<Block*, std::vector<std::string> >> block_objects; // diff
        for(auto block : blocks)
        {
            Block *block_object = BlockFactory::GetInstance().Create(block.first);
            block_objects.emplace_back(block_object, block.second);
        }
        //check blocks
        CheckBlocks(block_objects);
        //
        std::list<std::string> text;
        for(auto block_object : block_objects)
        {
            //text = block_object.first->Execute(text, block_object.second); // diff
            try
            {
                block_object.first->Execute(text, block_object.second);
            }
            catch(std::exception &ex)
            {
                std::cerr << "Error: " << ex.what() << std::endl;
            }
        }
    }
    ~WorkFlowExecutor() = default;

};
#endif //WORKFLOW_WORKFLOWEXECUTOR_H
