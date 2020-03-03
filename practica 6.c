#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, cont=1, prom,b=1;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	do{
		printf("Ingrese el siguiente numero entero: ");
		scanf("%d",&a);
		if (a>=0){
			b=b+a;
		    cont=cont+1;
		}
	}while(a>=0);
	cont--;
	prom=b/cont;
	printf("El promedio de los numeros ingresados es %d",prom);
	return 0;
}
