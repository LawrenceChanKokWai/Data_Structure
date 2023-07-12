#include <iostream>
#include "./Headers/LinearSearch.h"

int main() {

    int numArray[] = {10, 50, 30, 28, 70, 183, 67, 35};
    int length = sizeof(numArray) / sizeof(numArray[0]);
    int value = 183;

    LinearSearch mySearch;

    std::cout << mySearch.linearSearch(numArray, length, value);

    return 0;
}
