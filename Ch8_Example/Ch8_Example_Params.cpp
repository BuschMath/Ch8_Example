#include <iostream>

using namespace std;

void ExampleFunction(int& value);

int main()
{
	int data = 8;

	ExampleFunction(data);

	cout << data << endl;

	return 0;
}

void ExampleFunction(int& value)
{
	cout << value << endl;

	value += 1;

	cout << value << endl;
}