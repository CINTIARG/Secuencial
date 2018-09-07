#include <stdio.h>
#include <math.h>
int main (){
    int p,s,r,d;
    scanf("%d%d%d", &p,&s,&r);
    if(s>r){
    d=p/(s-r);}
    if(d>1){
    printf("%d\n",d);}
                       
    system("PAUSE");
    return 0;
}
