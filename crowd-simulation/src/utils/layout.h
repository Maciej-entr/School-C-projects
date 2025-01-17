#ifndef LAYOUT_H
#define LAYOUT_H

#include <vector>
#include <string>

struct Layout {
    int width;
    int height;
    std::vector<std::vector<int>> grid; // 0 for empty space, 1 for obstacles
};

void loadLayout(const std::string& filename, Layout& layout);
void saveLayout(const std::string& filename, const Layout& layout);
Layout createDefaultLayout(int width, int height);
void modifyLayout(Layout& layout, const std::vector<std::pair<int, int>>& obstacles);

#endif // LAYOUT_H