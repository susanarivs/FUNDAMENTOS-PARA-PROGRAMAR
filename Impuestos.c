#include <stdio.h>

    int main()
{
    int horas,ope, saldo, oper,s;
    int res;
   
        
    printf("Introduce las horas trabajadas\n");
    scanf("%d",& horas);
         
          if(horas>=0 && horas<39){
          oper= horas*250;
           printf("tu salario bruto es %d\n",oper); 
                 
                      if(oper<=6000){
                         printf("No pagas impuestos\n");
                         printf("tu sueldo total es %d\n",oper);
                        }   
                        else if(oper<=8000){
                               s=oper*0.5;
                             printf("pagas impuestos %d\n",s);
                             saldo=oper-s;
                             printf("tu sueldo total es %d\n",saldo);
                        } 
                         else if(oper>=8000){
                               s=oper*0.10;
                             printf("pagas impuestos %d\n",s);
                             
                            saldo=oper-s;
                            printf("tu sueldo total es %d\n",saldo);
                        }    
                      
                   
                       
         }        
          
                
        else if(horas!=39 && horas>=40){
             ope=horas*250;
               res=ope*1.5;
        printf("Tu sueldo es  %d\n",res); 
           }            
                         if(res>=8000){
                               s=res*0.10;
                             printf("pagas impuestos %d\n",s);
                             
                            printf("tu sueldo total es %d\n",res-s);
                        }    
                      
         
  return 0;
    
}  