#include "massiv.h"

int main() {
    int result;
    massiv<float> arr;
    massiv<float> arr1;
    arr.fill({2,4,6});
    arr1.fill({5,1,4});
    std::cout << "Вектор 1: ";
    arr.print();
    std::cout << "Вектор 2: ";
    arr1.print();
    arr.sum(arr1);
    std::cout << "Результат сложения к 1 вектору 2-го: ";
    arr.print();
    result = arr.comp(arr1);
    std::cout << "Результат умножения векторов 1 и 2: " << result << std::endl;

    arr1.comp_on_number(2);
    std::cout << "Результат умножения вектора 2 на число 2: ";
    arr1.print();
    arr.del_on_number(2);
    std::cout << "Результат деления вектора 1 на число 2: ";
    arr.print();

    std::cout<< "Вектор 1: ";
    arr.print();
    std::cout << "Вектор 2: ";
    arr1.print();

    arr1.unsumm(arr);
    std::cout << "Результат вычитания из вектора 2 вектор 1: ";
    arr1.print();
    return 0;
}