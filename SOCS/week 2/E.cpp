#include<stdio.h>
int main(){
	int a,b,c,d,e,ganjil,genap;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		ganjil=0;
		genap=0;
		scanf("%d",&c);
		
		for(d=0;d<c;d++){
			
			scanf("%d",&e);
				if(e%2 == 1)
				{
					ganjil+=e;	
				} 
				else{
					genap+=e;	
					}
		}
		printf("%d %d\n",genap,ganjil);
	}
}
