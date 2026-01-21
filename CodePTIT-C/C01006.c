#include <stdio.h>
int main(){
    int a,b,tong,hieu,tich,du;
    float thuc;
    scanf("%d %d",&a,&b);
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuc=(float)a/b;
    du=a%b;
    printf("%d %d %d %.2f %d",tong,hieu,tich,thuc,du);
    return 0;
}
