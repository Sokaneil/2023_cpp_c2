#include "AsciiMap.hpp"

AsciiMap::AsciiMap(unsigned int width, unsigned int height)
    : map_width(width), map_height(height), map_data(width * height, ' ')
{}

void AsciiMap::set_cell(unsigned int x, unsigned int y, char c)
{
    if (x >= map_width || y >= map_height) {
        throw std::out_of_range("Out of Possible range");
    }
    if (x < map_width && y < map_height) {
        map_data[y * map_width + x] = c;
    }
}

char AsciiMap::get_cell(unsigned int x, unsigned int y) const
{
    if (x >= map_width || y >= map_height) {
        throw std::out_of_range("Out of Possible range");
    }
    if (x < map_width && y < map_height) {
        return map_data[y * map_width + x];
    }
    return (' ');
}

void AsciiMap::to_stream(std::ostream &output) const
{
    unsigned int i = 0;
    while (i < map_height) {
        unsigned int j = 0;
        while (j < map_width) {
            output << map_data[i * map_width + j];
            j += 1;
        }
        output << std::endl;
        i += 1;
    }
}

unsigned int AsciiMap::width() const
{
    return (map_width);
}

unsigned int AsciiMap::height() const
{
    return (map_height);
}