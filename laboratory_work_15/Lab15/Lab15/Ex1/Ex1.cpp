#include <iostream> // Подключение библиотек

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    int k;
    cout << "Введите размер массива: "; cin >> k;

    int* arr = (int*)malloc(k * sizeof(int)); // Выделение памяти под массив

    cout << "Введите элементы массива: "; // Ввод элементов массива
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    int positive_count = 0, sum = 0, last_zero_index = -1;

    for (int i = 0; i < k; i++) { // Подсчет положительных элементов и индекса последнего нулевого элемента
        if (arr[i] > 0) {
            positive_count++;
        }
        if (arr[i] == 0) {
            last_zero_index = i;
        }
    }

    for (int i = last_zero_index + 1; i < k; i++) { // Подсчет суммы элементов после последнего нулевого элемента
        sum += arr[i];
    }

    cout << "Количество положительных элементов: " << positive_count << endl;
    cout << "Сумма элементов после последнего нулевого: " << sum << endl;

    free(arr); // Освобождение памяти

    return 0;
}