#include <stdio.h>

int main(){
	long long int n,c;
	scanf("%lld %lld",&n,&c);
	if (c%2==0){
		printf ("%lld\n",n*(c/2));
	}
	else {
		printf ("%lld\n",n* ((c+1)/2));
	}
	
}

