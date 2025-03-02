#include <iostream> // Подключение библиотек
#include <cstring>

using namespace std; // Позволяет не писать std перед операторами ввода-вывода

bool startsWithB(char* str) { // Функция для проверки, начинается ли строка с буквы 'b'
    return str[0] == 'b';
}

int main() {
    setlocale(LC_CTYPE, "Russian"); // Подключает русский язык
    int n;
    cout << "Введите количество строк: ";
    cin >> n;

    char** strings = new char* [n]; // Заполняем строки
    for (int i = 0; i < n; ++i) {
        strings[i] = new char[100];
    }

    cout << "Введите строки:\n";
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    cout << "Строки, начинающиеся с 'b':\n";
    for (int i = 0; i < n; ++i) { // Вывод результата
        if (startsWithB(strings[i])) {
            cout << strings[i] << '\n';
        }
    }

    for (int i = 0; i < n; ++i) { // Освобождение памяти
        delete[] strings[i];
    }
    delete[] strings;

    return 0;
}
