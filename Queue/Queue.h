//
// Created by Wahyu Rudiyan S on 14/09/21.
//

#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include <string>
using namespace std;

#define MAX_CAP 50
#define MIN_LEN -1

class Queue {
private:
    int size,
        count,
        capacity,
        front,
        rear;

    string* queueData;

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