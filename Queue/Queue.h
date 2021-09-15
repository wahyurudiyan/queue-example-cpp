//
// Created by Wahyu Rudiyan S on 14/09/21.
//

#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include <string>
using namespace std;

class Queue {
private:
    string* queueData;
    int count, capacity,
        front, rear;

    bool isEmpty();
    bool isFull();
    int sizeOfQueue();
public:
    Queue(int size);
    string Pop();
    void Get();
    void Push(const string& data);
};

#endif