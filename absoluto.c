#include <stdio.h>
#include <math.h>

int main (){
    int a,b,c;
    printf("Dame dos numeros enteros\n");
    scanf("%d\n",&a);
    scanf("%d",&b);
    c = a+b;
    printf("%g",fabs(c));
    system("PAUSE");
    return 0;
}
