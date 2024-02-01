cmake_minimum_required(VERSION 3.22)

project(learning)

# C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置编译类型为Debug
set(CMAKE_BUILD_TYPE Debug)

# 设置C编译选项
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

# 设置C++编译选项
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

# 可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 源文件目录
aux_source_directory(src SRC_LIST)

# 头文件目录
include_directories(include)

# 生成可执行文件
add_executable(main ${SRC_LIST})
