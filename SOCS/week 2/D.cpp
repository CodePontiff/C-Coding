#include<stdio.h>
int main(){
    int a,b,c,d;
    long int W,B;
    char e;
    scanf("%d",&a);
    for(b=0;b<a;b++){
        W=0;B=0;
        scanf("%d",&c);
        scanf("%c",&e);
        while((int)e>65){
            if(e=='W'){
                W++;
            }else{
                B++;
                if (B%2==0 && W>0)W--;
            }
            scanf("%c",&e);
        }
        if (W>=10) printf("Case #%d: Jojo fall asleep\n",b+1);
        else printf("Case #%d: Jojo stayed awake\n",b+1);
    }
    return 0;
}
