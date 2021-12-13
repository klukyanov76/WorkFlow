#ifndef WORKFLOW_IBLOCKMAKER_H
#define WORKFLOW_IBLOCKMAKER_H


class IBlockMaker
{
public:
    virtual Block* Create() const = 0;
    virtual ~IBlockMaker() = default;

};


#endif //WORKFLOW_IBLOCKMAKER_H
