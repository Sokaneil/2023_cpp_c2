#ifndef ASCIIMAP_HPP_
#define ASCIIMAP_HPP_

#include <iostream>
#include <vector>

class AsciiMap {
public:
    AsciiMap(int width, int height);
    void set_cell(int x, int y, char c);
    char get_cell(int x, int y) const;
    void to_stream(std::ostream &output) const;
    int  width() const;
    int  height() const;

private:
    int               map_width;
    int               map_height;
    std::vector<char> map_data;
};

#endif /* ASCIIMAP_HPP_ */