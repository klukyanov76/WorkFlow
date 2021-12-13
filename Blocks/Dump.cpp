#include "Dump.h"
#include "../BlockMaker.h"

static BlockMaker<Dump> maker("Dump");

std::list<std::string> Dump::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{
    if (args.size() != 1)
    {
        throw InvalidNumberOfArguments();
    }
    std::ofstream out;
    out.open(args[0]);
    if(out.is_open())
    {
        for(auto& line : text)
        {
            out << line << std::endl;
        }
    }
    out.close();
    return text;
}
BlockType Dump::GetType()
{
    return BlockType::INOUT;
}