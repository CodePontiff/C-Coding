#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char **key=(char**)malloc(sizeof(char*)*100);
char **value=(char**)malloc(sizeof(char*)*100);
char **fake_value=(char**)malloc(sizeof(char*)*100);
char **password=(char**)malloc(sizeof(char*)*100);
char **fake_password=(char**)malloc(sizeof(char*)*100);
char a[100],b[100],c[100],d[100],e[100],qk[100],qp[100];
int k=0,n,q;
scanf("%d",&n);
for(int j=0;j<n;j++)
{
scanf("%s %s %s %s %s",a,b,c,d,e);
key[j]=a;
value[j]=b;
fake_value[j]=c;
password[j]=d;
fake_password[j]=e;
}
scanf("%d",&q);
while(q!=0)
{
scanf("%s %s",qk,qp);
for(int i=0;i<n;i++)
{
if(strcmp(qk,key[i])==0)
{
if(strcmp(qp,password[i])==0){
printf("%s",value[i]);
break;
}
else if(strcmp(qp,fake_password[i])==0){
printf("%s\n",fake_value[i]);
break;
}
else{
printf("Key or password not found.\n");
break;
}
}
else{
printf("Key or password not found.\n");
break;
}
}
q--;
}
}
