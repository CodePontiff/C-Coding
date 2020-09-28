#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
char names1[n];
  char names2[n];
  char names3[n];
int mm=1,counter=0;
int i, j;
for(i=0;i<n;i++)
{
scanf("%s",&names1[i]);
}
for(i=0;i<n; i++)
{
names2[i]=names1[i];
names3[i]=0;
}
  for(i=0;i<n; i++)
{
    for(j=0;j<n;j++)
    {
      if(names1[i]==names2[j])
      {
        names3[j]=mm;
        mm++;
      }
    }
    mm=1;
}   
for(i=0; i<n; i++)
{
if(names3[i]==2)
{
counter++;
}
}
printf("You have %d duplicate name(s).\n", counter);
}
