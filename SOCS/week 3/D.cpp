#include<stdio.h>
#include<string.h>

int main()
{
char str[100001];
int i,a,b;
int freq[26] = {0};
scanf("%d\n",&a);
for(b=0;b<=a;b++){
gets(str);
printf("Case #%d:\n",b+1);
for(i = 0; str[i] != '\0';i++)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
freq[str[i] - 'a']++;
}
else if(str[i] >= 'A' && str[i] <= 'Z')
{
freq[str[i] - 'A']++;
}
}
for(i = 0; i < 26; i++)
{
if(freq[i] != 0)
{
printf("[%c] => %d \n",i+'a', freq[i]);
}
}
}
return 0;
}
