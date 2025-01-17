#ifndef PATH_OPTIMIZATION_H
#define PATH_OPTIMIZATION_H

#include <vector>
#include <utility>

class PathOptimization {
public:
    PathOptimization();
    std::vector<std::pair<float, float>> optimizePath(const std::vector<std::pair<float, float>>& waypoints);
    std::vector<std::pair<float, float>> getOptimalRoute();

private:
    void calculateOptimalPath();
    std::vector<std::pair<float, float>> optimalRoute;
};

#endif // PATH_OPTIMIZATION_H