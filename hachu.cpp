#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <fmt/format.h>

#include "variant.h"

using namespace std::string_literals;
using namespace fmt::literals;

#define ƒ fmt::format
#define π fmt::print
#define ⬟ std::cout
#define val const auto
#define var auto

val comment = R"chu(
Read line: 'xboard'
Read line: 'protover 2'
Read line: 'new'
Read line: 'random'
Read line: 'variant chu'
Read line: 'level 40 5 0'
Read line: 'post'
Read line: 'hard'
Read line: 'time 30000'
Read line: 'otim 30000'
Read line: 'd5d6'
Read line: 'xboard'
Read line: 'protover 2'
Read line: 'new'
Read line: 'random'
Read line: 'variant chu'
Read line: 'level 40 5 0'
Read line: 'post'
Read line: 'hard'
Read line: 'black'
Read line: 'time 30000'
Read line: 'otim 30000'
Read line: 'white'
Read line: 'go'
)chu";

int main (int argc, char *argv[])
{
    π("Elapsed time: {sec:.2f} seconds\n", "sec"_a=1.23456);

    var line = "hello"s;
    val log_ = [](auto x){
        var log = std::ofstream{"/tmp/0.log", std::ios_base::app};
        log << x;
        log.close();
    };
    while (true)
    {
        while (std::getline(std::cin, line))
        {
            // Process the line here
            log_(ƒ("Read line: '{line}'\n", "line"_a=line));
            std::this_thread::sleep_for(std::chrono::milliseconds(777));
        }
    }
}
