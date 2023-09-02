// main.cpp
#define FMT_HEADER_ONLY
#include <sqlite3.h>
#include <cstdio>
// #include <fmt/core.h>
#include <spdlog/spdlog.h>

// main function!
int main()
{
    fmt::print("Hello, world!\n");
    printf("%s\n", sqlite3_libversion());
    spdlog::warn("A") return 0;
}