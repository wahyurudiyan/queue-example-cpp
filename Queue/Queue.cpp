//
// Created by Wahyu Rudiyan S on 14/09/21.
//

#include <string>
#include <iostream>
#include "queue.h"

using namespace std;

// private function
int Queue::sizeOfQueue() {
    return count;
}

bool Queue::isEmpty() {
    return (sizeOfQueue() == 0);
}

bool Queue::isFull() {
    return (sizeOfQueue() == capacity);
}

// public function
Queue::Queue(int size) {
    queueData = new string[size];
    capacity = size; count = 0;
    rear = -1; front = 0;
}

void Queue::Push(const string& data) {
    if (isFull()) {
        cout << "Queue is full, unable to store the data!\nSystem going to exit...!" << endl;
        exit(EXIT_FAILURE);
    }

    rear = (rear + 1) % capacity;
    queueData[rear] = data;

    cout << "PUSH data: '" << queueData[rear] << "' into queue!" << endl;
    count++;
}

string Queue::Pop() {
    if (isEmpty()) {
        cout << "Queue is empty, pelase do insert data first!" << endl;
        exit(EXIT_FAILURE);
    }

    string msg = queueData[front];
    front = (front + 1) % capacity;
    count--;

    return msg;
}

void Queue::Get() {
    int qSize = sizeOfQueue();

    cout << "Queue size: " << qSize << endl;
    for (int i = 0; i < qSize; i++) {
        cout << "Queue data is: ";
        cout << queueData[i] << endl;
    }
}