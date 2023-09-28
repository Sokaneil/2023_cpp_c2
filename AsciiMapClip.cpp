#include "AsciiMapClip.hpp"

AsciiMapClip::AsciiMapClip(AsciiMap &map)
    : map_ref(map),
      origin_x(0),
      origin_y(0),
      _width(map.width()),
      _height(map.height())
{}

void AsciiMapClip::set_origin(unsigned int x, unsigned int y)
{
    if (x < map_ref.width() && y < map_ref.height()) {
        origin_x = x;
        origin_y = y;
    }
}

void AsciiMapClip::set_size(unsigned int width, unsigned int height)
{
    if (width > 0 && height > 0) {
        _width  = width;
        _height = height;
    }
}

void AsciiMapClip::set_cell(unsigned int x, unsigned int y, char character)
{
    if (x < _width && x >= 0 && y < _height && y >= 0) {
        map_ref.set_cell(origin_x + x, origin_y + y, character);
    }
}

char AsciiMapClip::get_cell(unsigned int x, unsigned int y)
{
    if (x < _width && x >= 0 && y < _height && y >= 0) {
        return (map_ref.get_cell(origin_x + x, origin_y + y));
    }
    return (' ');
}