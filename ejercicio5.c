#include <stdio.h>

    int main()
{   
    printf("Calcularemos la calificacion final de un alumno\n");
    float Cal1, Cal2, Cal3, Cal4, Cal5, Promediot, suma, total;
    float op1, x, op2;
    printf("Introduzca la calificacion del primer examen\n");
    scanf("%f", & Cal1);
    printf("Introduzca la calificacion del segundo examen\n");
    scanf("%f", & Cal2);
    printf("Introduzca la calificacion del tercer examen\n");
    scanf("%f", & Cal3);
    suma=Cal1+Cal2+Cal3;
    Promediot=suma/3;
    x=(Promediot*.50);
    printf("El promedio es %f\n", (Promediot*.50));
  
    printf("Introduzca el valor del examen final\n");
    scanf("%f", & Cal4);
    op1=(Cal4*.15);
    printf("La calificacion del examen final es %f\n", op1);
    printf("Introduzca el valor de la calificacion del trabajo final\n");
    scanf("%f", & Cal5);
    op2=(Cal5*.35);
    printf("es %fLa calificacion final \n", op2);
    total=x+op1+op2;
    printf("La calificacion final es %f\n", total);
    return 0;
}