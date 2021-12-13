#ifndef WORKFLOW_READFILE_H
#define WORKFLOW_READFILE_H


#include <list>
#include <string>
#include <vector>
#include "../Block.h"

class ReadFile : public Block
{
public:
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override
    {
        if(args.size() < 1)
        {
            throw std::exception();
        }
        std::list<std::string> new_text; // имя..
        // read file зачитываем строчки и добавляем в лист, затем возвращаем list

        //
        return new_text;
    }
    virtual BlockType GetType() override
    {
        return BlockType::IN;
    }
};


#endif //WORKFLOW_READFILE_H
