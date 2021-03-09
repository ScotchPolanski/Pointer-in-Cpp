#include <iostream>

int main()
{
	int* b = nullptr;
	b = new int;
	*b = 100;
	int* a = nullptr;
	a = new int;
	*a = *b;
	std::cout << "*b = " << *b << "\n";						// 100
	*b = 102;
	std::cout << "*a = " << *a << "\n";						// 100
	std::cout << "b* nach Aenderung = " << *b << "\n";		// 102
}
