#include <stdio.h>
int main(){
    int n,nam,tuan,ngay;
    scanf("%d",&n);
    nam=n/365;
    if(nam==0){
        tuan=n/7;
        ngay=n%7;
    }
    else{
        tuan=(n-nam*365)/7;
        ngay=(n-nam*365)&7;
    }
    printf("%d %d %d",nam,tuan,ngay);
    return 0;
}
