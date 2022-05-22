#pragma once
#include <iostream>
using namespace std;

class BaseQueue
{
public:
    virtual int back() = 0;
    virtual int front() = 0;
};

class Queue: public BaseQueue
{;
    static const int SIZE = 100;
    int* queue;
    int frnt, rear;
public:
    Queue();
    ~Queue();
    virtual void push(int num);
    virtual void out();
    virtual int size();
    virtual void pop();
    virtual int front();
    virtual int back();
    virtual int copy(Queue& src, int i);
    virtual int counter(Queue& srs, float middle);
    virtual int choose(int i);
};
