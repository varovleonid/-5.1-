#include <iostream>
#include <windows.h>
class Triangle {
    static int counter;
public:
    // 1 задание
    Triangle() {
        counter++; // увеличиваем счетчик при каждом создании объекта
    }
    ~Triangle() {
        counter--; // уменьшаем счетчик при каждом удалении объекта
    }
    static int getCounter() {
        return counter; // метод для получения текущего значения счетчика
    }
    double a;
    double b;
    double c;

    double square() {
        double p = (a + b + c) / 2;
        return (sqrt(p * (p - a) * (p - b) * (p - c)));
    }
};
int Triangle::counter = 0;

double square(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}
