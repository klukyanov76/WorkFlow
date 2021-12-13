#ifndef WORKFLOW_DUMP_H
#define WORKFLOW_DUMP_H

#include <list>
#include <string>
#include <vector>
#include "../Block.h"
#include "../Exceptions/InvalidNumberOfArguments.h"
#include <fstream>

class Dump : public Block
{
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override;
    virtual BlockType GetType() override;
    ~Dump() = default;
};


#endif //WORKFLOW_DUMP_H
