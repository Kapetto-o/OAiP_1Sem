#include <iostream> // Подключение библиотек
#include <locale>
using namespace std; // Позвояет не писать std перед каждым оператором 

int main() {
	setlocale(LC_ALL, "ru");// Подключает русский язык
	srand(time(NULL)); // Даёт возможность записи случайных чисел
	const int n = 5;
	int A[n][n], column; // Многомерный массив
	for (int i = 0; i < n; i++) {
		for (int d = 0; d < n; d++) {
			A[i][d] = (int)(((double)rand() / (double)RAND_MAX) * 200 - 50); // Заполняем массив случайными числами
		}
	}
	for (int i = 0; i < n; i++) { // Выводит элементы массива на экран
		for (int d = 0; d < n; d++) {
			cout << A[i][d] << " ";
		}
		cout << endl;
	}
	bool done = false; // Логическая переменная
	for (int i = 0; i < n; i++) { 
		for (int d = 0; d < n; d++) { // Меняет знаки отрицательного столбика на противоположные, если удовлетворяет условиям
			if (A[d][i] < 0) {
				done = true;
				break;
			}
			if (d == (n - 1)) {
				if (i > 0) {
					for (int k = 0; k < n; k++) {
						A[k][i - 1] = -A[k][i - 1];
					}
				}
				column = i;
				done = false;
			}
		}
		if (done == false) { // Выводит все положительные колонки
			cout << "Неотрицательные колонны\n";
			for (int d = 0; d < n; d++) {
				cout << A[d][column] << endl;
			}
			cout << endl;
			if (i > 0) { // Если условие выполняется, выводит элементы массива
				cout << "Колонна до нее с противоположным знаком\n";
				for (int d = 0; d < n; d++) {
					cout << A[d][column - 1] << endl;
				}
			}
		}
	}
}