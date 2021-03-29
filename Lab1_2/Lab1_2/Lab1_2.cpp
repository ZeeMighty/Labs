#include<stdio.h>
#include<conio.h>
#include <clocale>
#include <stdlib.h>


int main()
{
    int res;
    float a;
    setlocale(LC_ALL, "Russian");
    do
    {
        printf("%s", "write a: ");
        res = scanf_s("%f", &a);
        if (res == 1 && (int)a - a == 0) {
            switch ((int)a)
            {
            case 1: printf("Январь\n ");		break;
            case 2: printf("Февраль\n ");			break;
            case 3: printf("Март\n ");			break;
            case 4: printf("Апрель\n ");			break;
            case 5: printf("Май\n ");			break;
            case 6: printf("Июнь\n ");			break;
            case 7: printf("Июль\n ");		break;
            case 8: printf("Август\n ");		break;
            case 9: printf("Сентябрь\n ");		break;
            case 10: printf("Октябрь\n ");		break;
            case 11: printf("Ноябрь\n ");		break;
            case 12: printf("Декабрь\n ");		break;
            default: printf("Номер неверен\n ");
            }
            system("pause");
        }
        else {
            printf("%s", "Invalid input. Try again.\n");
            while ((getchar()) != '\n');
        }
    } while (res != 1 || (int)a - a != 0);
    _getch();
    return 0;
}
