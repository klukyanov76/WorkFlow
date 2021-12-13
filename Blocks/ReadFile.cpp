#include "ReadFile.h"
#include "../BlockMaker.h"

static BlockMaker<ReadFile> maker("ReadFile");

std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        throw std::exception();
    }
    std::list<std::string> new_text;
    //
    //..
    //
    return new_text;
}
BlockType GetType()
{
    return BlockType::IN;
}