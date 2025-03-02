#include <iostream> // Подключение библиотек

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    int rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    int** matrix = new int* [rows]; // Создание динамического массива
    for (int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    cout << "Введите элементы матрицы:\n"; // Заполнение матрицы
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    int zero_cols = 0; // Подсчет столбцов с нулевыми элементами
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][j] == 0) {
                zero_cols++;
                break;
            }
        }
    }

    int max_series_row = 0, max_series_length = 0; // Поиск строки с самой длинной серией одинаковых элементов
    for (int i = 0; i < rows; ++i) {
        int current_length = 1;
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == matrix[i][j - 1])
                current_length++;
            else
                current_length = 1;
            if (current_length > max_series_length) {
                max_series_length = current_length;
                max_series_row = i;
            }
        }
    }

    cout << "Количество столбцов, содержащих хотя бы один нулевой элемент: " << zero_cols << "\n";
    cout << "Номер строки, в которой находится самая длинная серия одинаковых элементов: " << max_series_row + 1 << "\n";

    for (int i = 0; i < rows; ++i) // Освобождение памяти
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
