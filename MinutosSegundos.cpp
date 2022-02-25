
#include <stdio.h>
#include <cstdlib>
using namespace std;
    int main()
{   
    int op1;
    float  minutos,segundos;
    printf("Introduce los segundos a calcular\n");
   
    scanf("%d", & op1);
     minutos=op1/60;
     segundos=op1%60;
  
    printf ("Los numeros ingresados son %f minutos  y %f segundos \n", minutos, segundos);
   
    
    
    return 0;
}