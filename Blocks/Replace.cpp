#include "Replace.h"
#include "../BlockMaker.h"

static BlockMaker<Replace> maker("Replace");
std::list<std::string> Replace::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{

}
BlockType Replace::GetType()
{
    return BlockType::INOUT;
}