#include <stdio.h>

int main(){
	unsigned long long int x;
	scanf("%d",&x);
	x=x*2-(x/5)*2;
	printf("The bells ring %llu times\n",x);
}
