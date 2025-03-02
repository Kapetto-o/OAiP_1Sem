#include <iomanip>/*заголовочный файл для определения нужного числа манипуляторов, каждый из которых принимает один аргумент*/
#include <iostream>/*заголовочный файл, который объявляет объекты, управляющие чтением из стандартных потоков и записью в них*/
#include <Windows.h>/*заголовочный файл, в котором объявляются функции, предоставляющие интерфейс доступа к Windows API*/
void main()/*оператор начала текста программы*/

{
	setlocale(LC_CTYPE, "Russian");/*поддержка русского языка*/
	SetConsoleOutputCP(1251); /*Две функиции для корректного ввода и вывода кириллицы */
	SetConsoleCP(1251);
	using namespace std; /*Позволяет не писать перед каждой строкой std*/
	char s, p; p = ' '; /*Ввод переменных и присваивание значений*/
	cout << "Введите символ"; cin >> s; /*Вводим значение переменной*/
	cout << setw(5) << setfill(p) << p;/*Вывод символов первой строки*/
	cout << setw(1) << setfill(s) << s; /*setw указывает на количество заполняемых символов, в данном случае s - введённый символ */
	cout << setw(10) << setfill(p) << p;/*setw указывает на количество заполняемых символов, в данном случае p - пробел */
	cout << setw(1) << setfill(s) << s;
	cout << setw(7) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(10) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s << endl;/*Конец первой строки*/
	cout << setw(5) << setfill(p) << p;/*Вывод символов второй строки*/
	cout << setw(1) << setfill(s) << s;
	cout << setw(6) << setfill(p) << p;
	cout << setw(6) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p;
	cout << setw(6) << setfill(s) << s;
	cout << setw(5) << setfill(p) << p;
	cout << setw(3) << setfill(s) << s << endl;/*Конец второй строки*/
	cout << setw(5) << setfill(p) << p;/*Вывод символов третей строки*/
	cout << setw(1) << setfill(s) << s;
	cout << setw(10) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(7) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s;
	cout << setw(10) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s << endl;/*Конец третей строки*/
	cout << setw(4) << setfill(p) << p;/*Вывод символов четвёртой строки*/
	cout << setw(3) << setfill(s) << s;
	cout << setw(28) << setfill(p) << p;
	cout << setw(1) << setfill(s) << s << endl;/*Конец четвёртой строки*/
	cout << setw(5) << setfill(p) << p;/*Вывод символов пятой строки*/
	cout << setw(1) << setfill(s) << s;
	cout << setw(29) << setfill(p) << p;
}