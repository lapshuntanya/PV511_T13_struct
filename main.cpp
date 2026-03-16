#include "Student.h"
#include "ArrayTemplate.h"

int main() {

    //Імʼя стр-ри = власний тип даних
    // a = обʼєкт = змінна з типом даних структури
    Student a; //name = "", 0, 0, 0
    a.math = 11;
    a.it = 10;
    //a.name = "Pupkin";  Error!!!
    //strcpy_s(a.name, 50, "Pupkin"); //VS
    strcpy(a.name, "Pupkin"); //CLion, Online

    //a.showInfo();
    //cout << sizeof(a) << endl;

    Student b = {"Ivanchuk", 7, 8, 12};
    //b.showInfo();

    int N = 2;
    Studen* arr = new Studen[N] {
        {"Sydorchuk", 10, 6, 11},
        {"Shevchenko", 3, 5, 2}
    };

    addItemBack(arr, N, a);
    addItemBack(arr, N, b);
    //N => 4
    for (int i = 0; i < N; i++) {
        //arr[i].showInfo();
        cout << i+1<< ". " << arr[i].name << endl;
    }
}