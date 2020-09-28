#include<stdio.h>
#include<string.h>

int main()
{
        int T,t;
        scanf("%d",&T);
        for(t=1;t<=T;t++)
        {
                int P,M;
                scanf("%d",&P);
                scanf("%d",&M);
                char competitor[P][25];
                int meatEaten[P];
                int i,j;
                for(i=0;i<P;i++)
                {
                        scanf("%s",competitor[i]);
                        int sum=0;
                        for(j=0;j<M;j++)
                        {
                                int meat;
                                scanf("%d",&meat);
                                sum+=meat;
                        }
                        meatEaten[i]=sum;
                }
                
                for(i=0;i<P;i++)
                {
                        for(j=i+1;j<P;j++)
                        {
                                if(meatEaten[i]<meatEaten[j])
                                {       
                                        int temp=meatEaten[i];
                                        meatEaten[i]=meatEaten[j];
                                        meatEaten[j]=temp;
                                        
                                        char temps[25];
                                        strcpy(temps,competitor[i]);
                                        strcpy(competitor[i],competitor[j]);
                                        strcpy(competitor[j],temps);
                                }
                                if(meatEaten[i]==meatEaten[j])
                                {
                                        
                                        if(strcmp(competitor[i],competitor[j])>0)
                                        {
                                                int temp=meatEaten[i];
                                                meatEaten[i]=meatEaten[j];
                                                meatEaten[j]=temp;
                                                
                                                char temps[25];
                                                strcpy(temps,competitor[i]);
                                                strcpy(competitor[i],competitor[j]);
                                                strcpy(competitor[j],temps);}
                                }
                        }
                }
                
                printf("Competition #%d:\n",t);
                for(i=0;i<P;i++)
                {
                        printf("%d. %s\n",i+1,competitor[i]);
                }
                
        }
}
