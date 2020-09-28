#include <stdio.h>
#include <stdbool.h>
#include <string.h>
float getMedian(int arr[],int start,int end)
{
  
int i=0;
int min=arr[start]; 
int max=arr[start]; 
float sum=arr[start]; 
for(int i=start+1;i<end;i++) 
{
if(min > arr[i] ) 
min=arr[i]; 
if(max<arr[i]) 
max=arr[i]; 
sum+=arr[i]; 
}
return (sum-min-max)/2.0;
  
  
}
int main()
{
  
int n;
  
scanf("%d",&n); 
   char names[n][100];
   bool output[n]; 
   int inputnum=0;
int i=0;
while(inputnum<n) 
{
char name[50];
  
scanf("%s",names[inputnum]); 
int numberOfScores;
scanf("%d",&numberOfScores); 
  
  
int arr[numberOfScores]; 
float currMedian;
  
       i=0;
while(i<numberOfScores) 
{
scanf("%d",&arr[i]);
i++;
}
  
float lastMedian=getMedian(arr,0,4); 

bool flag=true;
  
for(i=1;i<=numberOfScores-4;i++)
{
currMedian=getMedian(arr,i,i+4);
  
if(lastMedian > currMedian) 
{
flag=false;
break;
}
lastMedian=currMedian;
}
if(flag==true)
{
           output[inputnum]=true;   
       }
else
{
output[inputnum]=false;
}
  
inputnum++;
  
}
   for(i=0;i<n;i++)
   {
      
    printf("%s: %s\n",names[i],output[i] ? "Accepted" : "Rejected");
   }
return 0;
}
