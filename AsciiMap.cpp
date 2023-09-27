#include "AsciiMap.hpp"

AsciiMap::AsciiMap(int width, int height)
    : map_width(width), map_height(height), map_data(width * height, ' ')
{}

void AsciiMap::set_cell(int x, int y, char c)
{
    if (x < map_width && y < map_height) {
        map_data[y * map_width + x] = c;
    }
}

char AsciiMap::get_cell(int x, int y) const
{
    if (x < map_width && y < map_height) {
        return map_data[y * map_width + x];
    }
    return (' ');
}

void AsciiMap::to_stream(std::ostream &output) const
{
    int i = 0;
    while (i < map_height) {
        int j = 0;
        while (j < map_width) {
            output << map_data[i * map_width + j];
            j += 1;
        }
        output << std::endl;
        i += 1;
    }
}

int AsciiMap::width() const
{
    return (map_width);
}

int AsciiMap::height() const
{
    return (map_height);
}