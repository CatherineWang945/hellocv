cmake_minimum_required(VERSION 3.15)
project(UnitConverter)

#进入指定文件夹unitlib
add_subdirectory(unitlib)

#用src/main.cpp生成可执行程序
add_executable(converter src/main.cpp)

#连接主程序main.cpp和库unitlib
target_link_libraries(converter unitlib)
