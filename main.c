#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    printf("Вероятность ожирения Р(B) = 0,13; вероятность сахарного диабета Р(A) = 0,07\n");
    printf("Введите количество испытуемых: ");
    int M, i;
    float a, b, c, d, e;
    scanf ("%d", &M);
    b = M * 0.13;
    a = M * 0.07;
    //printf ("%d    ", (int)b);
    //printf ("%d\n", (int)a);

    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        c = b + rand()%(int)a;
        printf ("%d    ", (int)c);
        printf("Р(A|C) = %.2f       ", a/c);
        printf("Р(A|B,C) = %.2f\n", (a+b-c)/b);

    }

    printf ("\n\n");
    c = 13 * M / 100;
    while (c <= 20 * M / 100)
    {
        printf ("%d    ", (int)c);
        printf("Р(A|C) = %.2f       ", a/c);
        printf("Р(A|B,C) = %.2f\n", (a+b-c)/b);
        c += M / 100;
    }

    return 0;
}
