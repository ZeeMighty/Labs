#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int n = 10;
    int matrix[n][n];
    int sum = 0, up_sum = 0, down_sum = 0;
    // инициализация и подсчёт суммы элементов
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100 - 50;
            //matrix[i][j] = 1;
            sum += matrix[i][j];
        }
    }
    cout << "summa: " << sum;
    // Вырезаю верхний треугольник
    for (int i = 0; i < n/2; i++) {
        for (int j = i+1; j <= (i + (n-2) - 2*i); j++) {
            sum -= matrix[i][j];
            up_sum += matrix[i][j];
        }
    }
    cout << "\nup_summa: " << up_sum;
    // Вырезаю нижний треугольник
    for (int i = n/2; i < n; i++) {
        for (int j = n-i; j < i; j++) {
            sum -= matrix[i][j];
            down_sum += matrix[i][j];
        }
    }
    cout << "\ndown_summa: " << down_sum;
    // вывожу матрицу
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << "\t" << matrix[i][j];
        }
    }
    cout << "\nСумма: " << sum;

    int mas[(n + 1) / 2];
    int k = 0;
    for (int i = 0; i < n; i+=2) {
        for (int j = 0; j < n; j++) {
            if (matrix[j][i] < 0) k += 1;
        }
        mas[i/2] = k;
        k = 0;
    }
    cout << "\n Массив с кол-вом отрицательных:\n";
    for (int i = 0; i < (n + 1) / 2; i++) cout << mas[i] << "  ";
    return 0;
}