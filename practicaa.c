#include <stdio.h>

int main(){
  char c;
  printf("Ingresa un caracter: ");
  c = getchar();
  int a = (int) c;
  if(48 <=  a && a <= 57 ){
    printf("Numero ingresado: ");
  }else{
    if( 65 <= a && a <= 90 ){
      printf("Letra mayuscula ingresada: ");
    }else{
      if( 97 <= a && a <= 122 ){
        printf("Letra minuscula ingresada: ");
      }else{
        printf("Simbolo ingresado: ");
      }
    }
  }
  putchar(c);
  printf("\n");
  return(0);
}
