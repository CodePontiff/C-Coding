#include<stdio.h>
#include<string.h>
int main()
{
FILE *f;
f=fopen("testdata.in","r");
char ch;
int count=0;
ch=fgetc(f);
int flag=0;
  
while(ch!=EOF)
{
if(ch=='#')
flag=1;
else if(ch=='1' && flag==1)
{
count++;
flag=0;
}
ch=fgetc(f);
}
fclose(f);
printf("%d\n",count);
return 0;
}
