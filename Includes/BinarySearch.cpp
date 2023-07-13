
#include "../Headers/BinarySearch.h"


int BinarySearch::searchBinary(int myArray[], int length, int value) {
    int m_start = 0;
    int m_end = length - 1;
    int m_middle = std::floor((m_start + m_end) /2);
//    std::cout << m_start << " " << m_middle << " " << m_end << std::endl;

    while (myArray[m_middle] != value) {
        // Check {1, 3, 5, 8, 9, 14, 57, 60}
        //        S        M             E
        if (value < myArray[m_middle]) {
            m_end = m_middle -1;
        } else {
            m_start = m_middle +1;
        }
        m_middle = std::floor((m_start + m_end) / 2);
    }
//    std::cout << m_start << " " << m_middle << " " << m_end << std::endl;
    return myArray[m_middle] == value ? myArray[m_middle] : -1;
//    if (myArray[m_middle] == value) {
//        return m_middle;
//    } else {
//        return -1;
//    }
}

