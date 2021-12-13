#include "WriteFile.h"
#include "../BlockMaker.h"

static BlockMaker<WriteFile> maker("WriteFile");
std::list<std::string> WriteFile::Execute(const std::list<std::string> &text, const std::vector<std::string> &args)
{

}
BlockType WriteFile::GetType()
{
    return BlockType::OUT;
}