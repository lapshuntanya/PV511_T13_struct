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

    a.showInfo();
    cout << sizeof(a) << endl;

}