#include<stdio.h>
#include<conio.h>

int main(void)
{
    int res, i, zeros = 0;
    float a[11];
    printf("%s", "put in 10 numbers: ");
    for (i = 0; i < 10; i++) {
        do
        {
            res = scanf_s("%f", &a[i]);
            if (res == 1 && (int)a[i] - a[i] == 0 && a[i] >= 0) {
                if (a[i] == 0) zeros++;
                if (i < 9) printf("%s", "next: ");
            }
            else {
                printf("%s", "Invalid input. Try again.\n");
                while ((getchar()) != '\n');
            }
        } while (res != 1 || (int)a[i] - a[i] != 0 || a[i] < 0);
        _getch();
    }
    printf("%s", "number of nulls:\n");
    printf("%d", zeros);
    return 0;
}