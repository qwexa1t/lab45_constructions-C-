#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
private:
	int lower_base;
	int upper_base;
	int height;

public:
	Trapezoid(); //����������� ��� ����������
	Trapezoid(int lower_base, int upper_base, int height);//����������� � �����������
	Trapezoid(int lower_base);//����������� � 1 ����������
	~Trapezoid(); //����������
	void set(); //��������� �������
	void print();
	float area();
};

