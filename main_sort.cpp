#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sort.h"

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        return 0;
    }

    /* initialize random seed: */
    srand(time(NULL));

    int len = atoi(argv[1]);
    char* array = new char[len];

    for (size_t i = 0; i < len; i++) {
        array[i] = rand() % 40 + 40;
    }

    for (size_t i = 0; i < len; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;

    sort(array, len, gt);

    for (size_t i = 0; i < len; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;
    return 0;
}
