#include "layout.h"
#include <vector>
#include <iostream>

struct Layout {
    int width;
    int height;
    std::vector<std::vector<int>> grid;

    Layout(int w, int h) : width(w), height(h) {
        grid.resize(height, std::vector<int>(width, 0));
    }
};

Layout createLayout(int width, int height) {
    return Layout(width, height);
}

void displayLayout(const Layout& layout) {
    for (const auto& row : layout.grid) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

void modifyLayout(Layout& layout, int x, int y, int value) {
    if (x >= 0 && x < layout.width && y >= 0 && y < layout.height) {
        layout.grid[y][x] = value;
    } else {
        std::cerr << "Error: Coordinates out of bounds." << std::endl;
    }
}