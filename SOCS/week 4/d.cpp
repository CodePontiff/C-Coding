#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(int *a, int *b){
*a = *a+*b;
*b = *a-*b;
*a = *a-*b;
}
void sortArray(int *class, int* student, int n){
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(class[j]>class[j+1]){
swap(&class[j], &class[j+1]);
swap(&student[j], &student[j+1]);
}
if(class[j]==class[j+1] && student[j]>student[j+1])
{
swap(&student[j], &student[j+1]);
}
}
}
}
int main(){
FILE *fp = fopen("testdata.in","r");
char line[100];
int class[1000000]={0}, student[1000000]={0}, count = 0;
if(fp==NULL){
exit(EXIT_FAILURE);
}
else{
while (fgets(line, 100, fp) != NULL){
char *token = strtok(line, "-");
class[count] = atoi(token);
token = strtok(NULL, "-");
student[count] = atoi(token);
count++;
}
fclose(fp);
}
sortArray(class, student, count);
int c = 0;

for (int k= 0; k < count; k++)
{
if(class[k]!=c){
c = class[k];
printf("\nclass#%d\n", c);
printf("--------\n");
printf("Student#%d\n", student[k]);
}else{
printf("Student#%d\n", student[k]);
}
}
return 0;
}
