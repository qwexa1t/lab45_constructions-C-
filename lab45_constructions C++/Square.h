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

	static void GetCount()
	{
		printf(" ���������� ��������� ���������: %d\n", Count);
	}
	static void ResetCount()
	{
		Count = 0;
	}
};

