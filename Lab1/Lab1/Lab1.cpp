#include<stdio.h>
#include<conio.h>

int main(void)
{
    int res;
    float a, b, c, x;
    do
    {
        printf("%s", "write a: ");
        res = scanf_s("%f", &a);
        if (res == 1 && (int)a - a == 0) printf("%s", "write b: ");
        else {
            printf("%s", "Invalid input. Try again.\n");
            while((getchar()) != '\n');
        }
    } while (res != 1 || (int)a - a != 0);
    _getch();
    do
    {
        res = scanf_s("%f", &b);
        if (res == 1 && (int)b - b == 0) printf("%s", "write c: ");
        else {
            printf("%s", "Invalid input. Try again.\n");
            while ((getchar()) != '\n');
        }
    } while (res != 1 || (int)b - b != 0);
    _getch();
    do
    {
        res = scanf_s("%f", &c);
        if (res == 1 && (int)c - c == 0 && c != 0) {
            x = a * b / c;
            printf("%s", "x = ");
            printf("%f", x);
        }
        else {
            printf("%s", "Invalid input. Try again.\n");
            while ((getchar()) != '\n');
        }
    } while (res != 1 || (int)c - c != 0 || c == 0);
    _getch();
    return 0;
}