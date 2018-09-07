#include <stdio.h>
int main(){
    int x1,x2,y1,y2; 
    float d;
    printf("Ingresa las coordenadas de dos puntos");
    scanf("%d%d, %d%d",&x1,&y1,x2,&y2);
    int r,r2,s;
    r=x2-x1;
    r2=y2-y1;
    s=pow(r,2)+pow(r2,2);
    d= sqrt(s);
    printf("La distancia es %d",d);
    
system("pause");
    return 0;
}
