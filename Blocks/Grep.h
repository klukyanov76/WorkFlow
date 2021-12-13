#ifndef WORKFLOW_GREP_H
#define WORKFLOW_GREP_H

#include <list>
#include <string>
#include <vector>
#include "../Block.h"

class Grep : public Block
{
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override;
    virtual BlockType GetType() override;
    ~Grep() = default;
};


#endif //WORKFLOW_GREP_H
