#include <iostream> } // Подключаем библиотеки

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    int rows, cols;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> rows >> cols;

    int** matrix = new int* [rows]; // Создание динамической матрицы
    for (int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];
    
    cout << "Введите элементы матрицы:\n"; // Заполнение матрицы
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];
    
    int sum = 0;
    for (int i = 0; i < rows; ++i) { // Поиск первой строки, где все элементы положительны
        bool allPositive = true;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
            sum += matrix[i][j];
        }
        if (allPositive) break;
    }

    for (int i = 0; i < rows; ++i) // Уменьшение всех элементов матрицы на найденную сумму
        for (int j = 0; j < cols; ++j)
            matrix[i][j] -= sum;

    cout << "Обновленная матрица:\n"; // Вывод обновленной матрицы
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << ' ';
        cout << '\n';
    }

    for (int i = 0; i < rows; ++i) // Освобождение памяти
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}