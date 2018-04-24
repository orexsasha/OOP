
#ifndef OOP_MASSIV_H
#define OOP_MASSIV_H

#include <iostream>

template <typename T>
class massiv{
private:

    int lenth;
    std::unique_ptr<T[]> mass;
public:
    bool fill(std::initializer_list<T> values);
    void print();
    bool sum(massiv &B);
    int comp(massiv &b);
    bool unsumm(massiv &b);
    void comp_on_number(T number);
    void del_on_number(T number);

};

template <typename T>
bool massiv<T>::fill(std::initializer_list<T> values) {
    bool result;
    if (values.size() != 0) {
        for (int i = 0; i < values.size(); ++i)
            mass.reset(new T);
        for (T i : values) {
            mass[lenth] = i;
            lenth++;
        }
        result = true;
    } else
        result = false;

    return result;
}
template <typename T>
void massiv<T>::print(){
    std::cout << std::endl << "    Значение вертора:";
    for (int i = 0; i < lenth; ++i){
        std::cout << " " << mass[i];
    }
    std::cout << std::endl;
}
template <typename T>
bool massiv<T>::sum(massiv &B){
    bool check = true;
    if (lenth == B.lenth)
        for (int i = 0; i < lenth; ++i){
            mass[i] += B.mass[i];
        }
    else check = false;
    return check;
}

template <typename T>
int massiv<T>::comp(massiv &b){
    int summ = 0;
    if (lenth == b.lenth){

        for (int i = 0; i < lenth;++i){
            summ += mass[i] * b.mass[i];
        }
    }
    return summ;
}

template <typename T>
bool massiv<T>::unsumm(massiv &b)
{
    bool check = false;
    if (lenth == b.lenth){
        check = true;
        for (int i = 0; i < lenth; ++i){
            mass[i] -= b.mass[i];
        }

    }
    return check;
}
template <typename T>
void massiv<T>::comp_on_number(T number){
    for (int i = 0; i < lenth; ++i) {
        mass[i] = mass[i] * number;
    }
}

template <typename T>
void massiv<T>::del_on_number(T number){
    for (int i = 0; i < lenth; ++i){
        mass[i] /= number;
    }
}

#endif //OOP_MASSIV_H
