﻿#include<iostream> // Подключение библиотек
#include <cstdlib> // для генерации случайных чисел
#include <ctime> // для инициализации генератора случайных чисел
using namespace std; // Позволяет не писать std перед каждым оператором
int main()
{
	setlocale(LC_ALL, "rus"); // Подключает русский язык
	srand(time(0)); // Инициализация генератора случайных чисел
	int const tak = 10;
	int f, d, i = 1, max = 0, a[tak], n, scht = 0;
	cout << "введите размер массива: " << endl; cin >> n; // Вывод текста и ввод значения переменной

		for (f = 0; f < n; f++)
		{
			a[f] = rand() % n;//генерация случайных чисел
			if (a[f] > max)//если текущее число больше предыдущего максимального
			f = max;//то текущее число становится максимальным
		}
		const int* mx = &max;//указатель
		for (f = 0; f < n; f++)
		{
			cout << a[f] << " ";//выводим сам массив
		}
		cout << endl;
		for (d = 0; d < n; d++)
		{
			a[d] = rand() % n;//генерация случайных чисел
			if (a[d] = *mx)//если элемент массива равен максимальному элементу прошлого массива 
				scht++;//то мы прибавляем еденицу к переменой
		}
		for (d = 0; d < n; d++)
		{
			cout << a[d] << " ";//выводим сам массив
		}
		cout << endl;
		if (scht > 0)//если переменная больше нуля (она изначально была равна нулю) то как минимум одно число из массива б совпадает с максимальным числом из массива а
			cout << " наибольший элемент массива F содержится в массиве D " << endl;
		else 
			cout << " наибольший элемент массива F НЕ содержится в массиве D " << endl; 
}