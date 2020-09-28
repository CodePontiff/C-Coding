#include <stdio.h>
int main(){
int x;

scanf("%d",&x);
int count[x];
for(int i=0; i<x;i++){
int y;

scanf("%d",&y);
int arr[y],sum=0;
for(int j=0;j<y;j++){
scanf("%d",&arr[j]);
sum=sum+arr[j];
}
int sum1=0,flag=0;
for(int j=0;j<y;j++){
sum1=sum1+arr[j];
if(sum1==sum-sum1){
flag=1;
}
}
count[i]=flag;

if(count[i]==0){
printf("Case #%d: false\n",i+1);
}else{
printf("Case #%d: true\n",i+1);
}
}

return 0;
}
