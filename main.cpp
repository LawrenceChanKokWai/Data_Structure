#include <iostream>

#include "./Headers/BinarySearch.h"

int main() {

    int myArray[] ={1, 3, 5, 8, 9, 14, 57, 60};
    int value = 14;
    int length = sizeof(myArray) / sizeof(myArray[0]);

    BinarySearch mySearch;
    int result = mySearch.searchBinary(myArray, length, value);

    if (result == value) {
        std::cout << "Found";
    } else {
        std:: cout << "Not Found";
    }


    return 0;
}
