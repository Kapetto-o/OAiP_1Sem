﻿#include <iostream> //Подключение библиотеки
using namespace std; // Позволяет не писать std перед потоковыми операторами Ввода-вывода
void main() // Тело программы
{
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    const int N = 20; // 
    int* arr = new int[N]; // Создаём указатель. Сохраняем место в озу для массива и инициализируем
    int count = 0, z;
    cout << "Введите размер массива: "; cin >> z; // Вывод текста и ввод значения переменной
    cout << "Введите числа в массив (через пробел): ";
    for (int i = 0; i < z; i++) { // Цикл, для ввода значений в массив
        cin >> *(arr + i);
    }
    cout << "Числа после удаления: ";
    for (int i = 0; i < z; i++) { // Цикл, в результате которого будут удалены все неподходящие числа
        if (arr[i] % 2 == 0 && arr[i] % 4 == 0 && arr[i] % 12 != 0 || arr[i] == 2) {
            cout << *(arr + i) << " ";
            count++;
        }
    }
    cout << endl;
}