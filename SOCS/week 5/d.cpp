#include <stdio.h>
#include <stdio.h>
#include <math.h>

int binarySearch(int arr[], int t,  int r, int yes) 
{ 
    if (r >= t) { 
        int mid = t + (r - t) / 2; 


        if (arr[mid] == yes) 
        {
        	return mid; 
		}
            


        if (arr[mid] > yes)
        {
        	return binarySearch(arr, t, mid - 1, yes); 
		}
            


        return binarySearch(arr, mid + 1, r, yes); 
    } 


    return -1; 
} 

int main(){

    int CaseNum, Num, cari, i;
    CaseNum = 1;
    Num = 0;
    cari = 0;
    i = 1;


    while(scanf("%d %d", &Num, &cari) == 2) {
        if(Num == 0 && cari == 0){
            break;
        }
        int arr[1000] = {};
            int index=0, ans=-1;
            int idx = 0;
        int root = sqrt(Num);
        int temp1, temp, find;

        for(int i = 1; i <= root; i++) {
            if(Num % i == 0){
                arr[idx] = i;
                idx++;
            }
         }
         temp1 = idx;
         temp = idx - 1;
         for(int i = 0; i < idx; i++){
             if(Num / arr[temp] == root){
                 temp--;
                 continue;
             }
             arr[temp1] = Num / arr[temp];
             temp--;
             temp1++;
         }

        find = binarySearch(arr, 0, temp1-1, cari);

        printf("Case #%d:\n",CaseNum);
        for(int j = 0; j < temp1; j++){
            printf("%d",arr[j]);

             if(j == temp1-1){
                 printf("\n");
             }else if(j < temp1){
                 printf(" ");
             }
         }

         printf("%d\n",find);
         printf("\n");
         idx = 0;
         for(int j = 0; arr[j]; j++){
             arr[j] = NULL;
         }

         CaseNum++;
    }

    return 0;
}
