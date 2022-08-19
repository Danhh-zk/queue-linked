// lap2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkedQueue.h"
using namespace std;

int main()
{
    LinkedQueue<int> queue;
    int x, y;

    queue.initializeQueue();

    x = 4;
    y = 5;

queue.addQueue(x);

queue.addQueue(y);

queue.deQueue(x);

queue.addQueue(x + 5);

queue.addQueue(16);

queue.addQueue(x);

queue.addQueue(y - 3);

cout << "Queue Elements: ";

while (!queue.isEmptyQueue())
{
queue.deQueue(y);
cout << " " << y;

}

cout << endl; system("pause");

return 0;
}