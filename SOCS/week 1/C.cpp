#include <stdio.h>

int main(){
	float x,y,add,sub,mul,div;
	scanf ("%f %f",&x,&y);
	add=x+y;
	sub=x-y;
	mul=x*y;
	div=x/y;
	
	printf("%1.2f %1.2f %1.2f %1.2f\n",add,sub,mul,div);
}
