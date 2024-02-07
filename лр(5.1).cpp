#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
    setlocale(0, "");
    Triangle T;
    cout << "Введите длину стороны a: ";
    cin >> T.a;
    cout << "Введите длину стороны b: ";
    cin >> T.b;
    cout << "Введите длину стороны c: ";
    cin >> T.c;

    cout << "\nДлины сторон треугольника:"
        << "\na=" << T.a << ", b=" << T.b << ", c=" << T.c
        << "\n\nПлощадь треугольника через метод: "
        << T.square()
        << "\nПлощадь треугольника через функцию: "
        << square(T.a, T.b, T.c)
        << "\n\nВсего было создано " << Triangle::getCounter() << " объектов класа\n";
}
