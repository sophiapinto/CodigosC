#include <stdio.h>

int main()
{
    int a, aux, i, num, b;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Série de fibonnaci: ");
    printf("%d\n", b);
    
   
    for(i = 0; i < num; i++) {
        aux = a + b;
        a = b;
        b = aux;
        
        printf("%d\n", aux);
    }

    return 0;

    
 }
