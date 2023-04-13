// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <cassert>

using namespace std;

class Flat
{
	int cena;
	int S;
public:
	Flat(int newCena, int newS) : cena{ newCena }, S{ newS } {}

	Flat() : Flat(0, 0) {}

	Flat(const Flat& cop) : cena{ cop.cena } {}

	friend bool operator==(const Flat& lhs, const Flat& rhs)
	{
		return lhs.S == rhs.S;
	}

	friend bool operator!=(const Flat& lhs, const Flat& rhs)
	{
		return !(lhs.S == rhs.S);
	}

	friend bool operator>(const Flat& lhs, const Flat& rhs)
	{
		return lhs.cena > rhs.cena;
	}

	friend bool operator<(const Flat& lhs, const Flat& rhs)
	{
		return lhs.cena < rhs.cena;
	}

	Flat& operator=(const Flat& object)
	{
		if (!(this == &object))
		{
			cena = object.cena;
			S = object.S;
		}
		return *this;
	}

	void print() const
	{
		cout << "\nЦена: " << cena << "\nПлощадь: " << S;
	}

	~Flat() {}

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	Flat kv1{ 120000, 20 };
	Flat kv2;
	kv1.print();
	kv2.print();

	bool a = kv1 > kv2;
	bool b = kv1 == kv2;
	bool c = kv1 != kv2;
	cout << endl << a << endl << b << endl << c;
	kv2 = kv1;
	kv2.print();

}