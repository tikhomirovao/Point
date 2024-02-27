#include <iostream>
#include <stdlib.h>

using namespace std;

class Point													//класс точка
{
	int X, Y;												//координаты точки
public:
	Point(int x = 0, int y = 0) :X{ x }, Y{ y } {}			//Конструктор с двумя параметрами, со значением параметров по умолчанию и унифицированной инициализацией полей

	void Show()const										//метод вывода экран
	{
		cout << X << ";" << Y << endl;
		cout << endl;
	} 
	Point operator=(Point)const								//перегрузка оператора копирующего присваивания  в качестве метода
	{
		Point Result(this->X, Y);							//создаем временный объект для хранения и возврата результата
		Result.X = X;										//присваиваем значение полей X,Y переданного объекта  в поля X,Y нового объекта
		Result.Y = Y;										//присваиваем значение полей X,Y переданного объекта  в поля X,Y нового объекта
		return Result;										//возвращаем значение итогового(нового) объекта
	}
};
int main()
{
	system("chcp 1251");
	system("cls");

	Point A(45, 25);
	cout << "Точка А: ";
	A.Show();

	Point B = A;
	cout << "Точка B: ";
	B.Show();
}