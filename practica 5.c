#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, cont=1, prom,b=1;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	b=b+a;
	while (a>=0){
		printf("Ingrese el siguiente numero entero: ");
		scanf("%d",&a);
		if (a>=0){
			b=b+a;
		    cont=cont+1;
		}
	}
	cont--;
	prom=b/cont;
	printf("El promedio de los numeros ingresados es %d",prom);
	return 0;
}
