#pragma once
#include "Figure.h"

class Square : public Figure
{
private:
	int side;
	static int Count;

public:
	Square(); //����������� ��� ����������
	Square(int side);//����������� � �����������
	~Square(); //����������
	void set(); //��������� �������
	void print();
	float area();
	static int GetCount()
	{
		return Count;
	}
};

