#ifndef ASCIIMAPCLIP_HPP_
#define ASCIIMAPCLIP_HPP_

#include "AsciiMap.hpp"

class AsciiMapClip {
private:
    AsciiMap &map_ref;
    unsigned int       origin_x;
    unsigned int       origin_y;
    unsigned int       _width;
    unsigned int       _height;

public:
    AsciiMapClip(AsciiMap &map);
    void set_cell(unsigned int x, unsigned int y, char c);
    char get_cell(unsigned int x, unsigned int y) const;
    void set_origin(unsigned int x, unsigned int y);
    void set_size(unsigned int width, unsigned int height);
};

#endif /* ASCIIMAPCLIP_HPP_*/