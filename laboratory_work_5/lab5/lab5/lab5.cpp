﻿#include <iostream> // Подключение стандартной библиотеки
using namespace std; // Позволяет не писать std перед каждым потоковым оператором ввода-вывода

void main() // Оператор начала текста программы
{
	setlocale(LC_CTYPE, "Russian");// Поддержка русского языка
	double a, b, c, r, s, t, box, pos; // Задаём переменные программы
	cout << "Введите размеры коробки (a b c): "; cin >> a >> b >> c; // Операторы ввода-вывода. Задаём значения переменным a, b и c
	cout << "Введите размеры посылки (r s t): "; cin >> r >> s >> t; // Операторы ввода-вывода. Задаём значения переменным r, s и t
	box = a * b * c; // Вычисляет значение переменной box
	pos = r * s * t; // Вычисляет значение переменной pos
	if ((r >= a || b) && (s >= a || b) && (t >= c) && (pos >= box)) //Задаёт условие. В случае если оно верно выведется "Можно упаковать", иначе "Нельзя упаковать"
		cout << "Коробку можно упаковать в посылку";
	else
		cout << "Коробку нельзя упаковать в посылку";
}