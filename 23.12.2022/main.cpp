#include "selectionsort.hpp"

int main() {
    int size = 10;
    int ar[size] = {0, 1, 2, 3, 4, 9, 8, 7, 6, 5};
    show_el(&ar[0], size);
    std::cout << "Sorted up: " << isSortedUP(&ar[0], size) << std::endl;
    std::cout << "Sorted down: " << isSortedDOWN(&ar[0], size) << std::endl;
    selection_sort_up(&ar[0], size);
    show_el(&ar[0], size);
    std::cout << "Sorted up: " << isSortedUP(&ar[0], size) << std::endl;
    std::cout << "Sorted down: " << isSortedDOWN(&ar[0], size) << std::endl;
    selection_sort_down(&ar[0], size);
    show_el(&ar[0], size);
    std::cout << "Sorted up: " << isSortedUP(&ar[0], size) << std::endl;
    std::cout << "Sorted down: " << isSortedDOWN(&ar[0], size) << std::endl;
    return 0;
}