#include <iostream> // Подключение библиотеки

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

bool isNumberOnMainDiagonal(int** array, int N, int M, int number) { // Функция для проверки наличия числа на главной диагонали
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i == j && array[i][j] == number) { // Если элемент находится на главной диагонали и равен искомому числу
                return true;
            }
        }
    }
    return false;
}

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    int N, M, number;

    std::cout << "Введите размеры массива N и M: ";
    std::cin >> N >> M;

    int** array = new int* [N]; // Создание двумерного динамического массива
    for (int i = 0; i < N; ++i) {
        array[i] = new int[M];
    }

    std::cout << "Введите элементы массива:\n"; // Заполнение массива
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> array[i][j];
        }
    }

    std::cout << "Введите число для проверки: ";
    std::cin >> number;

    if (isNumberOnMainDiagonal(array, N, M, number)) { // Проверка наличия числа на главной диагонали
        std::cout << "Число " << number << " находится на главной диагонали.\n";
    }
    else {
        std::cout << "Число " << number << " не находится на главной диагонали.\n";
    }

    for (int i = 0; i < N; ++i) { // Освобождение памяти
        delete[] array[i];
    }
    delete[] array;

    return 0;
}