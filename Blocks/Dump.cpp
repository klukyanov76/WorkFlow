#include "Dump.h"
#include "../BlockMaker.h"

static BlockMaker<Dump> maker("Dump");

std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{

}
BlockType GetType()
{
    return BlockType::INOUT;
}