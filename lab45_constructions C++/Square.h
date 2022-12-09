#pragma once
#include "Figure.h"

class Square : public Figure
{
private:
	int side;
	static int Count;

public:
	Square(); //Конструктор без параметров
	Square(int side);//Конструктор с параметрами
	~Square(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
	static int GetCount()
	{
		return Count;
	}
};

