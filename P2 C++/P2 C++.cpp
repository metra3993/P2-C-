#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    const int ROWS = 3;
    const int COLS = 5;

    double matrix[ROWS][COLS];

    cout << "Введите элементы для " << ROWS << " строк и " << COLS << " столбцов:\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << "Средние арифметические для каждой строки:\n";
    for (int i = 0; i < ROWS; ++i) {
        double sum = 0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
        cout << "Строка " << i + 1 << ": " << sum / COLS << endl;
    }

    return 0;
}
