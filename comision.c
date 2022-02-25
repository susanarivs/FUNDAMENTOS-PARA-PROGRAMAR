 int main()
{
    int sueldo,venta1,venta2, venta3;
    int suma, comision, total;
    printf("Introduce el sueldo base");
    scanf("%d", &sueldo);
    printf("Introduce la primer venta");
    scanf("%d", &venta1);
    printf("Introduce la segunda venta");
    scanf("%d", &venta2);
    printf("Introduce la Tercera venta");
     scanf("%d", &venta3);
    suma=venta1+venta2+venta3;
    total=suma*.25;
    comision=sueldo+total;
    printf("La comision de las sumas es %d", comision);
    return 0;
    
}