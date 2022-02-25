#include<stdio.h>
int main(){
	int anio,l;
	printf("Ingrea el año que deseas calcular\n");
	scanf("%d", &anio);
	if((anio/4) && (anio%4==0))
	printf("Es un año bisiesto\n");
	else 
	   printf("No es un año bisiesto\n");
	   
	      if((anio/100) && (anio%100==0))
            	printf("Es un año bisiesto\n");
             	else 
	             printf("No es un año bisiesto\n");
	                   if((anio/400) && (anio%400==0))
                         	printf("Es un año bisiesto\n");
             	          else 
	                           printf("No es un año bisiesto\n");
}
