
#include "../Headers/LinearSearch.h"

bool LinearSearch::linearSearch(int *myArray, int length, int &value) {
    for (int i = 0; i < length; i++) {
        if (myArray[i] == value) {
            return 1;
        }
    }
    return -1;
}