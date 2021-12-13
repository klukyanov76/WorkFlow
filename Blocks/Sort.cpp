#include "Sort.h"

static BlockMaker<Sort> maker("Sort");

std::list<std::string> Sort::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{
    std::list<std::string> new_text;
    //
    //..
    //
    return new_text;
}
BlockType Sort::GetType()
{
    return BlockType::INOUT;
}
