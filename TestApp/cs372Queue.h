#pragma once
#include "cs372List.h"
template <typename T>
class Queue
{
private:
    List<T> *queueList = new List<T>();
public:
    Queue() {    }
    Queue(Queue& rhs) {}
    ~Queue() { delete queueList; }
    bool  empty() { 
        return queueList->empty();
    }
    void push(T data) { 
        queueList->push_front(data);
    }
    T pop()
    {
        return queueList->pop_back();
    }
    void traverse(void (*doIt)(T data)) {
        queueList->traverse(doIt);
    };
};

