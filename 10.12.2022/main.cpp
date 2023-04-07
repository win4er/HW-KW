#include "randomfuncs.hpp"

int main() {
    int ar[10000];
    int SIZE;
    SIZE = sizeof(ar) / sizeof(int);
    random_Fill_ar(&ar[0], SIZE, 10, 100);
    show_el(&ar[0], SIZE);
    std::cout << test_randomFill(&ar[0], SIZE);
    std::cout << get_Count_Number(&ar[0], SIZE, 1) << std::endl;
    return 0;
}