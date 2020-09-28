#include <stdio.h>

int main (){
    int n;
    long long int m;
    double power=1;
    scanf("%d %lld",&n,&m);
    for(int i=0;i<n;i++)power*=2;
    printf("%d\n",(int)power%m);
}
