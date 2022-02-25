#include <stdio.h>

    int main()
{
    int Gc, Fahrenheit;
    printf("Introduzca los grados celcius\n");
    scanf("%d", & Gc);
    Fahrenheit=((Gc*9/5) + 32);
    printf("Los grados Fahrenheit son %d", Fahrenheit);
    
    return 0;
    
}