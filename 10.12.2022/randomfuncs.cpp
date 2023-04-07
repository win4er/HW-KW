#include "randomfuncs.hpp"

int get_Count_Number(int* ar, int size, int number){
    int count = 0;
    for(int i = 0; i < size; count+=(ar[i]==number), i++);
    return count;
}

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

