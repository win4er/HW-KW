#include "randomfuncs.hpp"

void show_Big_ar(int* ar, int size, char element) {
    int count;
    for (int k = 0; k < size; k+=count){
        for (int i = k; (i < 9+k) && ar[i]==ar[i+1]; i++){
            std::cout << ar[i] << element;
        }
        std::cout << ar[k] << element;
        count = get_Count_Number(ar, size, ar[k]);
        if (count > 10)
            std::cout << "- " << count-10;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

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

