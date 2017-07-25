#include <iostream>

struct point_2d {
    int x;
    int y;
};

#include "sort.h"

void print_point(point_2d point) {
    std::cout << "{" << point.x << ", " << point.y << "}" << std::endl;
}

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        return 0;
    }

    /* initialize random seed: */
    srand(time(NULL));

    int len = atoi(argv[1]);
    point_2d* array = new point_2d[len];

    for (size_t i = 0; i < len; i++) {
        array[i] = {rand() % 40, rand() % 40};
        print_point(array[i]);
    }

    std::cout << std::endl;

    // отсортировать точки по возрастанию Х
    sort(array, len, gt);
    for (size_t i = 0; i < len; i++) {
        print_point(array[i]);
    }
    return 0;
}
