#include<stdio.h>
int main(){
    int a,b,d,e,C,cust;
    long int c;
    float profit,P,E;
    scanf("%d",&a);
    for(b=0;b<a;b++){
        profit=0;
        cust=0;
        scanf("%ld %d",&c,&e); 
        for(d=0;d<e;d++){
            scanf("%d %f %f",&C,&P,&E);
            profit+=P;
            profit-=E;
            cust+=C;
        }
        if(profit>=0)printf("profit,");
        else printf("deficit,");
        if(cust>=(cust+c)/2) printf(" market leader.\n");
        else printf(" insignificant in the market.\n");
    }
    return 0;
}
