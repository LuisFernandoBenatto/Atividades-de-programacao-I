#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int vet[10];
    int x = 0;
    int a = 0;

    for(int i=0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    printf("\n\n Digite X:");
    scanf("%d", &x);

    for(int i=0; i<10; i++){
        if (x == vet[i]){
        a++;
        }
       }
    printf("\n >>>%d<<< \n", a);

    system("pause");
    return 0;
}
