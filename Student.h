#pragma once
#include <iostream>
#include <cstring>
using namespace std;


struct Student {
    /*--------Властивості, Поля = Змінні стр-ри -------------*/
    char name[50] = "";
    int math = 0;
    int phys = 0;
    int it = 0;

    /*-------- Методи = Функції в середині ст-ри --------------------*/
    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Math: " << math << endl;
        cout << "Phys: " << phys << endl;
        cout << "IT:   " << it << endl << endl;;
    }
};