
#include <stdio.h>
#include <cstdlib>
using namespace std;
    int main()
{   
    int op1, x, op2;
    float  divisiont, total;
    printf("Introduce el numero divivendo\n");
   
    scanf("%d", & op1);
    
    printf("Introduzca el numero divisor\n");
    scanf("%d", & op2);
    printf ("Los numeros ingresados son dividendo%d, divisor %d\n",op1,op2);
    divisiont=op1/op2;
    total=(op1 % op2);
    printf("Esta es la division %f", divisiont);
     printf("Esta es el residuo %f", total);
    
    return 0;
}