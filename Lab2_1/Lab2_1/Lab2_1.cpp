#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, max, min, i_max = 0, i_min = 0;
    cout << "Введите количество элементов массива:\n";
    cin >> N;
    int* mas = (int*)malloc(N * sizeof(int));
    srand(time(0));
    for (int i = 0; i < N; i++) {
        mas[i] = rand() % 10;
    }
    max = mas[0];
    min = mas[0];
    for (int i = 1; i < N; i++) {
        if (mas[i] > max) {
            max = mas[i];
            i_max = i;
        }
        if (mas[i] < min) {
            min = mas[i];
            i_min = i;
        }
    }
    int otvet = abs(i_min - i_max) - 1;
    cout << "Количество элементов между мин и макс:\t" << otvet;
    return 0;
}