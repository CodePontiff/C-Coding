#include<stdio.h>
void main()
{
    FILE *fp;
    int i,j,n,flag,tc=1;
    char in[100],out[100],result[100];
    fp=fopen("testdata.in","r");
    while(!feof(fp))
    {
        fscanf(fp,"%s",in);
        i=0;
        while(in[i])
        {
            out[i]=in[i]^8;
            i++;
        }
        out[i]='\0';
        i=0;
        j=0;
        flag=0;
        while(out[i])
        {            
            if(i%2==1)
            {
                if(out[i]<'0' || out[i]>'9')
                {
                    flag=1;
                    break;
                }
                else
                {
                    n = out[i] - '0';
                    while(n > 0)
                    {
                        result[j] = out[i-1];
                        j++;
                        n--;
                    }
                }      
            }    
            i++;
        }
        result[j]='\0';
        if(flag==1)
            printf("Case #%d: Corrupted format\n",tc);
        else
            printf("Case #%d: %s\n",tc,result);
        
        tc++;
    }
}
