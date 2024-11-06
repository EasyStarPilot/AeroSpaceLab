#include <stdio.h>

void main()
{
    printf("rechenart 1:a+b 2:a-b 3:a*b 4:a/b 5:a^b");
    int rechenart = 0;
    scanf("%i", rechenart);
    printf("a:");
    int a = 0;
    scanf("%i", a);
    printf("b:");
    int b = 0;
    scanf("%i", b);
    double loesung = 0;
    switch (rechenart)
    {
    case 1:
        loesung = Plus(int a, int b);
        break;
    case 2:
        loesung = Minus(a, b);
        break;
    case 3:
        loesung = Mal(a, b);
        break;
    case 4:
        loesung = Geteilt(a, b);
        break;
    case 5:
        loesung = Hoch(a, b);
        break;

    default:
        printf("Fehler!\n");
        break;
    }
    printf("loesung: " + (loesung);"%d");
}
double Plus(int a, int b)
{
    double loesung = 0;
    loesung = a + b;
    return loesung;
}
double Minus(int a, int b)
{
    double loesung = 0;
    loesung = a - b;
    return loesung;
}
double Mal(int a, int b)
{
    double loesung = 0;
    loesung = a * b;
    return (loesung);
}
double Geteilt(int a, int b)
{
    double loesung = 0;
    loesung = (double)a / b;
    return (loesung);
}
double Hoch(int a, int b)
{
    double loesung = 1;
    while (b >= 1)
    {
        loesung = loesung * a;
        b = b - 1;
    }
    return (loesung);
}
