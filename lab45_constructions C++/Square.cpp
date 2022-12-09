#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"

int Square::Count = 0;

Square::Square() //Конструктор без параметров
{
	side = 4;
}

Square::Square(int side) //Конструктор с параметрами
{
	this->side = side;
}

Square::~Square() //Деструктор
{
}

void Square::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
	try { // начало блока try
		if (side < 0)
			throw "Negative number.";
		if (side > 100)
			throw "Large number. Maximum value 100";
		Count++;
	}
	catch (const char* e)
	{
		printf("\n Error: %s\n\n", e);
		return set();
	}

}

float Square::area()
{
	return side * side;
}

void Square::print()
{
	printf("\n Сторона - %d", side);
	printf("\n Площадь - %.0f\n", area());
}

