#include <stdio.h>
#include <string.h>

int main()
{
long int n,i;

scanf("%ld", &n);

char name[n][100], src[100];

int apples[n], oranges[n];
int sum;


for(i=0; i<n; i++)
{
scanf("%s", name[i]);
}

for(i=0;i<n;i++)
{
scanf("%d", &apples[i]);
}

for(i=0; i<n; i++)
{
scanf("%d", &oranges[i]);
}

scanf("%s",src);
for(i=0; i<n; i++)
{
if(strcmp(name[i], src) == 0)
{
sum = apples[i] + oranges[i];
}
}
printf("%d\n", sum);
return 0;
}
