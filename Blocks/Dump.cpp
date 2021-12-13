#include "Dump.h"
#include "../BlockMaker.h"

static BlockMaker<Dump> maker("Dump");

std::list<std::string> Dump::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{

}
BlockType Dump::GetType()
{
    return BlockType::INOUT;
}