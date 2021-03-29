#include <iostream>
using namespace std;
#include "windows.h"
#define N1 10
#define N2 12

int first_plus(int mas[], int n) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (mas[i] >= 0) {
            index = i; break;
        }
    }
    return index;
}

void mas_init(int mas[], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) mas[i] = rand() % 100 - 50;
}
void mas_print(int mas[], int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << " ";
}

int main()
{
    setlocale(0, "Russian");
    int A[N1], B[N2];
    int second_part, index;
    mas_init(A, N1);
    Sleep(1000);
    mas_init(B, N2);
    mas_print(A, N1);
    cout << "\n";
    mas_print(B, N2);
    index = first_plus(A, N1);
    cout << "\nВ певрой части Массива А: " << index << " элементов\n";
    second_part = N1 - index - 1;
    cout << "Во второй части Массива А: " << second_part << " элементов\n";

    index = first_plus(B, N2);
    cout << "В певрой части Массива B: " << index << " элементов\n";
    second_part = N2 - index - 1;
    cout << "Во второй части Массива B: " << second_part << " элементов\n";
    // Разделяющий элемент не относится ни к одной из частей
}
