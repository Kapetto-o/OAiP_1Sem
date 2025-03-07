﻿#include <iostream> //Подключение библиотеки
using namespace std; // Позволяет не писать std перед потоковыми операторами Ввода-вывода
int main() // Тело программы
{
	setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
	const int n1 = 100; // Максимальный размер строки
	char St[n1], S[n1]; // Два массива для двух строк
	cout << "Введите строку: "; cin.getline(St, n1); // Считывает размер строки и вставляет его в массив
	int StIndex = 0, SIndex = 0, n; // Подключаем индексы для строк
	cout << "Введите номер позиции: "; cin >> n;
	while (St[StIndex] != '\0') { // Пока мы не дойдём до последнего символа, цикл будет повторятся 
		S[SIndex] = St[StIndex + n]; // Копируем символы во второй массив
		SIndex++;
		StIndex++;
	}
	S[SIndex] = '\0'; // Добавляем завершающий символ во второй массив
	cout << "Строка S после вставки: " << S << endl;
	return 0;
}