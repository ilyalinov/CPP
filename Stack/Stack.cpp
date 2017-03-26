#include <iostream>

struct StackElem {
	int value;
	StackElem *next;
};

class Stack {
	StackElem *head;

	public:
		void push(int x);

		int pop();

		void deleteStack(StackElem *e);

		int& max();

		~Stack();
};

void Stack::push(int x) {
	if (head == nullptr) {
		head = new StackElem();
		head->value = x;
	}
	else {
		StackElem* newElem = new StackElem();
		newElem->value = x;
		newElem->next = head;
		head = newElem;
	}
}

int Stack::pop() {
	if (head == nullptr) {
		return -1;
	}
	else {
		auto temp = head;
		head = head->next;
		int result = temp->value;
		delete temp;
		return result;
	}
}

void Stack::deleteStack(StackElem *e) {
	if (e != nullptr) {
		if (e->next != nullptr) {
			deleteStack(e->next);
		}

		std::cout << "deleted " << e->value << std::endl;
		delete e;
	}
}

int& Stack::max() {
	auto temp = head;
	auto elemMax = head;

	while (temp != nullptr) {
		if (temp->value > elemMax->value) {
			elemMax = temp;
		}
		temp = temp->next;
	}

	return elemMax->value;
}

Stack::~Stack() {
	deleteStack(head);
}

int main()
{
	Stack *stack = new Stack();
	stack->push(0);
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->max() = 10;
	std::cout << stack->pop() << std::endl;
	std::cout << stack->pop() << std::endl;
	delete stack;
	return 0;
}