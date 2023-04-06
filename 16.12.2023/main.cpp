#include "selectionsort.hpp"

int main() {
    int size = 8;
    int ar[size] = {1, 2, 3, 4, 5, 8, 3, 2};
    SelectionSortDOWN(&ar[0], size);
    SelectionSortUP(&ar[0], size);
}