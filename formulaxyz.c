#include <stdio.h>
#include <math.h>
int main(){
    float x,y,z;
    printf("Dame un numero decimal");
    scanf("%f",&x);
    y=(x+5)/(2*(x+1));
    z= (pow(y,2)+(x*(x-(2*y))))/(x*y);
    printf("%f",z);
    system("PAUSE");
    return 0;
}

