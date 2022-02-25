#include <stdio.h>
#include <math.h>

    int main()
{
    float Cal1, Cal2, Cal3,Cal4, Cal5, Promediot, suma;
    printf("Introduzca la primer calificacion\n");
    scanf("%f", & Cal1);
    printf("Introduzca la segunda calificacion\n");
    scanf("%f", & Cal2);
    printf("Introduzca la tercer calificacion\n");
    scanf("%f", & Cal3);
    printf("Introduzca la cuarta calificacion\n");
    scanf("%f", & Cal4);
    printf("Introduzca la quinta calificacion\n");
    scanf("%f", & Cal5);
    suma=Cal1+Cal2+Cal3+Cal4+Cal5;
    Promediot=suma/5;
    printf("El promedio es %f y el redondeo es %f y el otro redondeo es %f", Promediot, ceil(Promediot), floor(Promediot));
    
    return 0;
    
}         
