cmake_minimum_required(VERSION 3.20)
project(WorkFlow)

set(CMAKE_CXX_STANDARD 14)

add_executable(WorkFlow WorkFlowExecutor.h WorkFlowParser.h Block.h Blocks/ReadFile.cpp Blocks/ReadFile.h BlockFactory.h Blocks/Sort.cpp Blocks/Sort.h IBlockMaker.h Exceptions/BadBlockOrder.h Exceptions/UndefinedBlock.h Exceptions/MultipleMakers.h BlockMaker.h Exceptions/InvalidInputStructure.h main.cpp Blocks/WriteFile.cpp Blocks/WriteFile.h Blocks/Dump.cpp Blocks/Dump.h Blocks/Grep.cpp Blocks/Grep.h Blocks/Replace.cpp Blocks/Replace.h Exceptions/InvalidNumberOfArguments.h)
