// Lab_02.cpp
// Мінурка Вадим
// Лабораторна робота № 2.1
// Лінійні програми
// Варіант 177

#include <iostream>  
using namespace std;

int main()
{
    cout << "4 корпус" << endl;
    double m;   // вхідний параметр
    double z1;  // результат обчислення першого виразу
    double z2;  // результат обчислення другого виразу

    cout << "m = ";
    cin >> m;
    z1 = sqrt(pow(3 * m + 2, 2) - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
    z2 = sqrt(m+2);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
    return 0;