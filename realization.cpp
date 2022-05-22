#include <iostream>
#include "queue.h"

using namespace std;

//Конструктор
Queue::Queue() { queue = new int[SIZE]; frnt = rear = 0; }

//Деструктор
Queue::~Queue()
{
    delete[] queue;
}
//Вывод элементов очереди
void Queue::out()
{
    for (int i = frnt + 1; i < rear + 1; i++)
        cout << " " << queue[i];
}
//Помещение элемента в очередь
void Queue::push(int num)
{
    if (rear + 1 == frnt || (rear + 1 == SIZE && !frnt))
    {
        cout << "очередь полна" << endl;
        return;
    }
    rear++;
    if (rear == SIZE) rear = 0;
    queue[rear] = num;
}

int Queue::copy(Queue& src, int i) //Создание копии 
{
    int a = src.queue[i];
    return a;
}

void Queue::pop() // Извлечение элемента из очереди
{
    if (frnt == rear) { cout << "очередь пуста" << endl; return; }
    frnt++;
    if (frnt == SIZE) frnt = 0;
}

int Queue::size() //Определение размера очереди
{
    int s = 0; for (int i = frnt; i < rear; i++) s++; return s;
}

int Queue::counter(Queue& src, float middle) //Подсчёт элементов, которые больше САЗ.
{
    int c = 0;
    for (int i = frnt; i < rear; i++) if (queue[i] > middle) c++;
    return c;
}

int Queue::back() { return queue[rear]; } // Последний элемент очереди
int Queue::front() { return queue[frnt + 1]; } // Первый элемент очереди
int Queue::choose(int i) { return queue[i]; } // Выбранный элемент
