#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Circle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	int kolvo;

	do
	{
		printf("\n Программа для вычисления площади различных фигур");
		printf("\n Выберите фигуру: ");
		printf("\n 1) Квадрат");
		printf("\n 2) Прямоугольник");
		printf("\n 3) Треугольник");
		printf("\n 4) Трапеция");
		printf("\n 5) Круг");
		printf("\n 6) Завершить программу");
		printf("\n\n Введите номер фигуры: ");
		while (scanf("%d", &N) != 1 || N <= 0 || N > 6)
		{
			while (getchar() != '\n');
			printf("\n Вы ввели Неверный номер. Повторите попытку.\n");
			printf("\n Введите номер фигуры: ");
		}
		switch (N)
	    {
		case 1:
		{
			printf("\n Вы выбрали квадрат \n");
			printf("\n Пример \n");
			//Вызов конструктора без параметров
			Square* square1 = new Square; //Выделение Динамической памяти объекту класса Square
			Square* square2 = new Square;
			(*square1).print(); //Вывод площади квадрата на экран
			printf("\n\n Введите данные: \n\n");
			(*square1).set(); //Установка значений
			(*square1).print();
			printf("\n\n Введите данные: \n\n");
			(*square2).set(); //Установка значений
			(*square2).print();
			printf(" Количество созданных квадратов: %d\n", square1->GetCount());
			delete square1, square2; //Освобождение памяти 
			break;
		}
		case 2:
		{
			printf("\n Вы выбрали Прямоугольник \n");
			printf("\n Пример \n");
			//Вызов конструктора с 1 параметром
			Rectang* rectang1 = new Rectang(7); //Выделение Динамической памяти объекту класса Rectang
			rectang1->print(); //Вывод площади Прямоугольника на экран
			printf("\n Сколько Прямоугольников создать? (1-5)");
			while (scanf("%d", &kolvo) != 1 || kolvo <= 0 || kolvo > 5)
			{
				while (getchar() != '\n');
				printf("\n Выход за границы массива.\n");
				printf(" Сколько Прямоугольников создать? (1-5)");
			}
			Rectang* rectang_arr = new Rectang[5];
			for (int i = 0; i < kolvo; i++)
			{
				rectang_arr[i];
				printf("\n\n Введите данные: \n\n");
				rectang1->set(); //Установка значений
				rectang1->print();
			}
			delete rectang1; //освобождение памяти
			delete[] rectang_arr;
			break;
		}
		case 3:
		{
			printf("\n Вы выбрали Треугольник \n");
			printf("\n Пример \n");
			//Вызов конструктора с 2 параметрами
			Triangle* triangle1 = new Triangle(3, 5, "Желтый"); //Выделение Динамической памяти объекту класса Triangle
			triangle1->print(); //Вывод площади Треугольника на экран
			printf("\n\n Введите данные: \n\n");
			triangle1->set(); //Установка значений
			triangle1->print();
			delete triangle1; //освобождение памяти
			break;
		}
		case 4:
		{
			printf("\n Вы выбрали Трапецию \n");
			printf("\n Пример \n");
			//Вызов конструктора с 3 параметрами
			Trapezoid* trapezoid1 = new Trapezoid(4, 2, 3); //Выделение Динамической памяти объекту класса Trapezoid
			trapezoid1->print(); //Вывод площади Трапеции на экран
			printf("\n\n Введите данные: \n\n");
			trapezoid1->set(); //Установка значений
			trapezoid1->print();
			delete trapezoid1; //освобождение памяти;
			break;
		}
		case 5:
		{
			printf("\n Вы выбрали Круг \n");
			printf("\n Пример \n");
			//Вызов конструктора с 1 параметром
			Circle* circle1 = new Circle(6); //Выделение Динамической памяти объекту класса Circle
			circle1->print(); //Вывод площади Круга на экран
			printf("\n\n Введите данные: \n\n");
			circle1->set(); //Установка значений
			circle1->print();
			delete circle1; //освобождение памяти;
			break;
		}

		}
	} while (N != 6);
}