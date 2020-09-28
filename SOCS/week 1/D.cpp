#include <stdio.h>
int main(){
    long long int n,i=1000,hasil;
    scanf("%lld",&n);
    while(n/i!=0)i*=10;
    hasil=n/(i/1000);
    printf("%lld\n",(hasil/10)%(hasil%10));
}
