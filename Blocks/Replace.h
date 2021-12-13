#ifndef WORKFLOW_REPLACE_H
#define WORKFLOW_REPLACE_H

#include <list>
#include <string>
#include <vector>
#include "../Block.h"

class Replace : public Block
{
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override;
    virtual BlockType GetType() override;
    ~Replace() = default;
};


#endif //WORKFLOW_REPLACE_H
