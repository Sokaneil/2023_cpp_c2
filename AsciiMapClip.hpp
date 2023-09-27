#ifndef ASCIIMAPCLIP_HPP_
#define ASCIIMAPCLIP_HPP_

#include "AsciiMap.hpp"

class AsciiMapClip {
private:
    AsciiMap &map_ref;
    int       origin_x;
    int       origin_y;
    int       _width;
    int       _height;

public:
    AsciiMapClip(AsciiMap &map);
    void set_cell(int x, int y, char c);
    char get_cell(int x, int y);
    void set_origin(int x, int y);
    void set_size(int width, int height);
};

#endif /* ASCIIMAPCLIP_HPP_*/