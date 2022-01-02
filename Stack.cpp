#include<iostream>
#define maxsize 100000
using namespace std;
class stack {
private:
	int top;int arr[maxsize];
public:
	stack() { top = -1; }
	void push(int value);
	int pop();
	int peek();
	bool isFull();
	bool isEmpty();
	void display();
};
int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.push(50);
	s.display();

	return 0;
}
void stack::push(int value)
{
	if (isFull()) {
		cout << "Stack is Over Flow" << endl;
		exit(-1);
	}
	arr[++top] = value;
}
int stack::pop()
{
	if (isEmpty()) {
		cout << "Stack is Under Flow" << endl;
		exit(-1);;
	}
	return arr[top--];
}
int stack::peek()
{
	if (isEmpty()) {
		cout << "Stack is Under Flow" << endl;
		exit(-1);
	}
	return arr[top];
	
}
bool stack::isFull()
{
	if (top == maxsize - 1)return true;
	return false;
}

bool stack::isEmpty()
{
	if (top == -1)return true;
	return false;
}

void stack::display()
{
	if (isEmpty()) {
		cout << "Stack is Under Flow" << endl;
		exit(-1);
	}
	for (int i = top;i >= 0;i--) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
