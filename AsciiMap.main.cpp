#include "AsciiMap.hpp"
#include <iostream>

void mk_line(AsciiMap &map, unsigned int y)
{
    auto i{0U};

    while (i < map.width()) {
        if (map.get_cell(i, y) == '|') {
            map.set_cell(i, y, '+');
        } else {
            map.set_cell(i, y, '-');
        }
        i += 1;
    }
}

void mk_col(AsciiMap &map, unsigned int x)
{
    auto i{0U};

    while (i < map.height()) {
        if (map.get_cell(x, i) == '-') {
            map.set_cell(x, i, '+');
        } else {
            map.set_cell(x, i, '|');
        }
        i += 1;
    }
}

int main(void)
{
    AsciiMap map{11, 11};

    mk_line(map, 3);
    mk_line(map, 7);
    mk_col(map, 3);
    mk_col(map, 7);
    map.to_stream(std::cout);
}