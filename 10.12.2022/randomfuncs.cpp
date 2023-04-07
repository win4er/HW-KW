#include <iostream>
#include "time.h"


void show_el(int* ar, int size){
    for (int i = 0; i < size; i++){
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

void random_Fill_ar(int* ar, int size, int min, int max){
    srand(time(nullptr));
    for (int i = 0; i < size; i++){
        ar[i] = min + rand() % (max - min + 1);
    }
}

bool test_randomFill(int *ar, int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            count++;
        }
    }
    if (count == size) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int ar[5] = {0, 0, 0, 0, 0};
    random_Fill_ar(&ar[0], sizeof(ar) / sizeof(int), 10, 100);
    show_el(&ar[0], sizeof(ar) / sizeof(int));
    std::cout << test_randomFill(&ar[0], sizeof(ar) / sizeof(int));

    return 0;
}

