#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	float b,c,sum,res,mul,div;
	printf("BIENVENIDO A LA CALCULADORA MAGICA\n\n");
	printf("Ingrese la operacion: ");
	scanf("%f %c %f",&b,&a,&c);
	switch (a){
		case '+': sum= b+c;
		printf("\n\nLa respuesta es: %.2f", sum); break;
		
		case '-': res= b-c;
		printf("\n\nLa respuesta es: %.2f", res); break;
		
		case '*': mul= b*c;
		printf("\n\nLa respuesta es: %.2f", mul); break;
		
		case '/': div= b/c;
		printf("\n\nLa respuesta es: %.2f", div); break;
		
		default: printf("\n\nError al ingresar los datos."); break;
	}
	return 0;
}
