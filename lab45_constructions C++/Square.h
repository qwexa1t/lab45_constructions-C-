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

	static void GetCount()
	{
		printf(" Количество созданных квадратов: %d\n", Count);
	}
	static void ResetCount()
	{
		Count = 0;
	}
};

