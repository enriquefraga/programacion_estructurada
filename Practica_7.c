#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, cont=0, n;

    do{
        printf("Ingrese un numero menor a 100: ");
        scanf("%d",&n);
    }while(n<1 || n>100);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%j==0) cont=cont+1;
        }
        if(cont==2) printf("\n%d", i);
        cont=0;

    }
    return 0;
}
