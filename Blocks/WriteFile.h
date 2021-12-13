#ifndef WORKFLOW_WRITEFILE_H
#define WORKFLOW_WRITEFILE_H

#include <list>
#include <string>
#include <vector>
#include "../Block.h"

class WriteFile : public Block
{
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override;
    virtual BlockType GetType() override;
    ~WriteFile() = default;
};


#endif //WORKFLOW_WRITEFILE_H
