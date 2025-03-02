#include <iostream> // Подключение библиотек
#include <locale>
using namespace std; // Позволяет не писать std перед операторами

int main() { // Тело программы
	setlocale(LC_ALL, "ru"); // Подключаем русский язык
	srand(time(NULL)); // Для создания случайных чисел
	const int n = 5; // Подключаем переменные
	double A[n][n], Y[n], max = 0; // Подключение многомерного массива
	for (int i = 0; i < n; i++) { // Заполняем массив случайными числами
		for (int d = 0; d < n; d++) {
			A[i][d] = (int)(((double)rand() / (double)RAND_MAX) * 100);
		}
	}
	for (int i = 0; i < n; i++) { // Перемещаем элементы  главной диагонали матрицы в новый массив
		Y[i] = A[i][i];
		if (A[i][i] > max) max = A[i][i]; // Определяет максимальный элемент массива
	}
	for (int i = 0; i < n; i++) {
		Y[i] = Y[i] / max;
	}
	for (int i = 0; i < n; i++) { // Заполняет второй массив числами
		for (int d = 0; d < n; d++) {
			cout << A[i][d] << " ";
		}
		cout << endl;
	}
	cout << endl << "Наибольший элемент: " << max; // Вывод значений переменных
	cout << endl << "Новый массив:\n";
	for (int i = 0; i < n; i++) { // Вывод получившегося массива
		cout << Y[i] << " ";
	}
}