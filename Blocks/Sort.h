#ifndef WORKFLOW_SORT_H
#define WORKFLOW_SORT_H


#include <list>
#include <string>
#include <vector>
#include "../Block.h"

class Sort : public Block
{
public:
    std::list<std::string> Execute(const std::list<std::string> &text, const std::vector<std::string> &args) override
    {
        std::list<std::string> new_text; // имя..
        // read file зачитываем строчки и добавляем в лист, затем возвращаем list
        //сортируем
        //
        return new_text;
    }
    BlockType GetType() override
    {
        return BlockType::INOUT;
    }
};


#endif //WORKFLOW_SORT_H
