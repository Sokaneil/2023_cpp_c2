#ifndef ASCIIMAP_HPP_
#define ASCIIMAP_HPP_

#include <iostream>
#include <vector>

class AsciiMap {
public:
    AsciiMap(unsigned int width, unsigned int height);
    void         set_cell(unsigned int x, unsigned int y, char c);
    char         get_cell(unsigned int x, unsigned int y) const;
    void         to_stream(std::ostream &output) const;
    unsigned int width() const;
    unsigned int height() const;

private:
    unsigned int      map_width;
    unsigned int      map_height;
    std::vector<char> map_data;
};

#endif /* ASCIIMAP_HPP_ */