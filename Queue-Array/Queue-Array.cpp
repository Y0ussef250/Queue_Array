#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value);
void dequeue();
int peek();
void display();

int main()
{
	for (int i = 0;i < 2;i++)
	{
		int x = 0;
		cout << "Enter Three Elements: ";
		cout << endl;
		for (int j = 0;j < 3;j++)
		{
			cin >> x;
			enqueue(x);
			//cout << endl;
		}

		cout << "The elements of queue are : ";
		display();

		dequeue();

		cout << "After deleting one element from the queue .. Elements : ";
		display();

		cout << "peek = " << peek();

		cout << endl;
		cout << endl;
	}

	return 0;
}

void enqueue(int value)
{
	if (rear != SIZE - 1)
	{
		if (front == -1 && rear == -1)
		{
			front++;
			queue[++rear] = value;
		}
		else
		{
			queue[++rear] = value;
		}
	}
	else
	{
		cout << "queue is full! .. Can`t adding this element." << endl;
    }
}

void dequeue()
{
	if (front != -1 && rear != -1 && front <= rear)
	{
		front++;
	}
	else
	{
		cout << "queue is empty." << endl;
	}
}

int peek()
{
	if (front != -1 && rear != -1 && front <= rear)
	{
		return queue[front];
	}
	else
	{
		cout << "queue is empty." << endl;
		return -1;
	}
}

void display()
{
	if (front != -1 && rear != -1 && front <= rear)
	{
		for (int i = front;i <= rear;i++)
		{
			cout << " '" << queue[i] << "' ";
		}
		cout << endl;
	}
	else
	{
		cout << "queue is empty." << endl;
	}
}