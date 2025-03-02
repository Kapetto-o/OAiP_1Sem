#include <iostream> // Подключение библиотек
#include <ctime>

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

// Задача 1
void task1() {
    int* arr = new int[15]; // Создание динамического массива размером 15
    srand(time(0));
    int product = 1;
    for (int i = 0; i < 15; i++) {
        arr[i] = rand() % 200 + 1; // Заполнение массива случайными числами от 1 до 200
        if (arr[i] < 50) { // Если элемент массива меньше 50, умножаем его на product
            product *= arr[i];
        }
    }
    cout << "Произведение элементов массива, значения которых меньше 50: " << product << endl; // Вывод произведения элементов массива, значения которых меньше 50
    delete[] arr;// Освобождение памяти
}

// Задача 2
void task2(int** A, int* B, int n, int m) {
    int* result = new int[n]; // Создание динамического массива для хранения результата
    for (int i = 0; i < n; i++) {
        result[i] = 0;
        for (int j = 0; j < m; j++) {
            if (A[i][j] < 0 && B[j] < 0) { // Если элементы матрицы A и вектора B отрицательны, умножаем их и добавляем к result[i]
                result[i] += A[i][j] * B[j];
            }
        }
    }
    cout << "Произведение матрицы A и вектора B: "; // Вывод результата
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    delete[] result; // Освобождение памяти
}

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    task1(); // Вызов функции для решения задачи 1
    int n = 3, m = 3;
    int** A = new int* [n]; // Создание и заполнение матрицы A
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        for (int j = 0; j < m; j++) {
            A[i][j] = -5; // Заполните матрицу A
        }
    }
    int* B = new int[m]; // Создание и заполнение вектора B
    for (int i = 0; i < m; i++) {
        B[i] = -3; // Заполните вектор B
    }

    task2(A, B, n, m); // Вызов функции для решения задачи 2
    for (int i = 0; i < n; i++) { // Освобождение памяти
        delete[] A[i];
    }
    delete[] A;
    delete[] B;
    return 0;
}