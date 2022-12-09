#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"

int Square::Count = 0;

Square::Square() //����������� ��� ����������
{
	side = 4;
}

Square::Square(int side) //����������� � �����������
{
	this->side = side;
}

Square::~Square() //����������
{
}

void Square::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
	try { // ������ ����� try
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
	printf("\n ������� - %d", side);
	printf("\n ������� - %.0f\n", area());
}

