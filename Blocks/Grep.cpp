#include "Grep.h"
#include "../BlockMaker.h"

static BlockMaker<Grep> maker("Grep");

std::list<std::string> Grep::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{

}
BlockType Grep::GetType()
{
    return BlockType::INOUT;
}