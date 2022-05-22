#include <iostream>
#include <conio.h>
#include "queue.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    Queue qq, qr;
    int i; //Элемент
    int a = 1; //Меню-детектор
    int c = 0; //Счётчик
    int d; //Выбор очереди.
    int x;
    float cl = 0, r = 0;
    float s = 0, n;
    float ma = 0; //Среднее арифметическое

    cout << "Меню программы:" << endl;
    cout << "1 - Добавление элемента очереди." << endl;
    cout << "2 - Извлечение элемента очереди." << endl;
    cout << "3 - Вывод очереди на экран." << endl;
    cout << "4 - Посчитать количество элементов, больших среднего арифметического." << endl;
    cout << "5 - Создание копии очереди." << endl;
    cout << "6 - Слияние оригинальной очереди с копией и вывод очереди на экран." << endl;
    cout << "0 - выход." << endl;

    while (a != 0)
    {
        cout << endl;
        switch (_getch())
        {
        case('1'): cin >> i; qq.push(i); break;
        case('2'): cl += qq.front(); r++; qq.pop(); break;
        case('3'): cin >> d; if (d == 1) qq.out(); if (d == 2) qr.out(); break;
        case('4'):
            for (i = 1; i <= qq.size()+r; i++) s += qq.choose(i);
            s -= cl;
            cout << s << endl;
            n = qq.size();
            cout << n << endl;
            ma = s / n;
            cout << ma << endl;
            c = qq.counter(qq, ma);
            cout << "Количество элементов очереди, больших среднего арифметического: " << c << endl;
            s = ma = n = 0;
            break;
        case('5'): for (i = 1; i <= qq.size(); i++) qr.push(qq.copy(qq, i)); break;
        case('6'): for (i = 1; i <= qr.size(); i++) { x = qr.choose(i); qq.push(x); } qq.out(); break;
        case('0'): a = 0;  break;
        }
    }
    return 0;
}
