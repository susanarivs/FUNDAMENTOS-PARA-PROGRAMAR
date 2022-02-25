#include <stdio.h>

    int main()
{
    int Cal1, Cal2, Cal3, Promediot, suma;
    printf("Introduzca la primer calificacion\n");
    scanf("%d", & Cal1);
    printf("Introduzca la segunda calificacion\n");
    scanf("%d", & Cal2);
    printf("Introduzca la tercer calificacion\n");
    scanf("%d", & Cal3);
    suma=Cal1+Cal2+Cal3;
    Promediot=suma/3;
    printf("El promedio es %d", Promediot);
    
    return 0;
    
}