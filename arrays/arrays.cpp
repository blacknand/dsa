#include <iostream>
#include "arrays.h"

int main(int agrc, char **argv) {
    Arrays arrays;
    int test_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lowest_value = arrays.find_lowest_value(test_array, 10);
    std::cout << lowest_value << std::endl;
    return 0;
}

int Arrays::find_lowest_value(const int *array, int num_of_elems) {
    int min_value = array[0];

    for (int i = 0; i < num_of_elems; i++) {
        if (array[i] < min_value)   
            min_value = array[i];
    }

    return min_value;
};

int Arrays::find_highest_value(const int *array, int num_of_elems) {
    int max_value = array[0];

    for (int i = 0; i < num_of_elems; i++) {
        if (array[i] > max_value)
            max_value = array[i];
    }

    return max_value;
}