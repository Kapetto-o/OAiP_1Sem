#include <iostream> // Подключение библиотек
#include <ctime>

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

bool isNumberOnMainDiagonal(int** array, int N, int M, int number) { // Функция для проверки, есть ли число на главной диагонали
    int minDimension = min(N, M);
    for (int i = 0; i < minDimension; i++) {
        if (array[i][i] == number) {
            return true; // Если число найдено, возвращаем true
        }
    }
    return false; // Если число не найдено, возвращаем false
}

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    srand(time(0)); // Инициализация генератора случайных чисел

    int N, M, number;
    cout << "Введите количество строк (N): ";
    cin >> N;
    cout << "Введите количество столбцов (M): ";
    cin >> M;
    cout << "Введите число для поиска на главной диагонали: ";
    cin >> number;

    int** array = new int* [N]; // Создание и заполнение двумерного динамического массива
    for (int i = 0; i < N; i++) {
        array[i] = new int[M];
        for (int j = 0; j < M; j++) {
            array[i][j] = rand() % 100; // Заполнение массива случайными числами
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    if (isNumberOnMainDiagonal(array, N, M, number)) { // Проверка, есть ли заданное число на главной диагонали
        cout << "Число " << number << " находится на главной диагонали." << endl;
    }
    else {
        cout << "Число " << number << " не находится на главной диагонали." << endl;
    }

    for (int i = 0; i < N; i++) { // Освобождение памяти
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
