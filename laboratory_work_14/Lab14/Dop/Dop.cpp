#include <iostream> // Подключаем библиотеки
#include <locale>
using namespace std; // Позволяет не писать std перед каждым оператором

int main() {
	srand(time(NULL)); // Даёт возможность рандомизировать числа
	setlocale(LC_ALL, "rus"); // Подключает руссикй язык
	const int n = 5;
	int A[n][n], changeid[2], checked = 0, max = 0; // Объявляем многомерный массив
	for (int i = 0; i < n; i++) { // Заполняем массив случайными числами
		for (int d = 0; d < n; d++) {
			A[i][d] = (int)(((double)rand() / (double)RAND_MAX) * 100);
		}
	}
	for (int i = 0; i < n; i++) { // Выводим элементы массива на экран
		for (int d = 0; d < n; d++) {
			cout << A[i][d] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) { // Проверяем какой максимальный элемент массива
		for (int d = 0; d < n; d++) {
			if (A[i][d] > max) {
				max = A[i][d];
				changeid[0] = i;
				changeid[1] = d;
			}
		}
	}
	int change = A[checked][checked];
	A[checked][checked] = max; // Подключаем дополнительные массивы
	A[changeid[0]][changeid[1]] = change;
	checked++;
	for (int i = 1; i < n; i++) { // Перемещаем элементы массива пока максимальный элемент не окажется в позиции 1х1
		int newmax = 0;
		for (int d = 0; d < n; d++) {
			for (int k = 0; k < n; k++) {
				if (A[d][k] > newmax && A[d][k] < max) {
					newmax = A[d][k];
					changeid[0] = d;
					changeid[1] = k;
				}
			}
		}
		change = A[checked][checked];
		A[checked][checked] = newmax;
		A[changeid[0]][changeid[1]] = change;
		checked++;
		max = newmax;
	}
	cout << endl << "Новый массив с максимальными значениями по диагонали:\n";
	for (int i = 0; i < n; i++) { // Вывод элементов нового массива
		for (int d = 0; d < n; d++) {
			cout << A[i][d] << " ";
		}
		cout << endl;
	}
}
