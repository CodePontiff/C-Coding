#include <stdio.h>
#include <math.h>

long int hcf(long int a, long int b){
    while(a!=b){
        if(a > b)a -= b;
        else b -= a;
    }
    return a;
}

long int smallPrime(long int n) { 
    if (n % 2 == 0) 
        return 2;
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) return i; 
    }  
    return n; 
}

long int largePrime(long int n){
   long long maxPrime = -1;
   while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1;
        for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
	}
 
}

int main(){
  int a,b;
  long int g,c,d;
  scanf ("%d",&a);
  for(b=0;b<a;b++){
    scanf("%ld %ld",&c,&d);
    g=hcf(c,d);
    printf("Case #%d: %ld\n",b+1,smallPrime(g)*largePrime(g));
  }
  return 0;
}
