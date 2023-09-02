// test.cpp
#include <sqlite3.h>
#include <stdio.h>
#include <fmt/core.h>
#include <spdlog/spdlog.h>

// main function!
int main()
{
    fmt::print("test!\n");
    spdlog::warn("A");
    printf("%s\n", sqlite3_libversion());
    return 0;
}