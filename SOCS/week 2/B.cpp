#include <stdio.h>
 
void printit(int number, int k){
         int i = 1;
        while(i < number-k){
            printf(".");
            i++;
        }
        printf("0");
        i++;
        while(i< number){
            printf(".");
            i++;
        }
        if(i==number){
            printf("0");
            i++;
        }
        while(i<number+k){
            printf(".");
            i++;
        }
        if(k>0){
            printf("0");
            i++;
        }
        while(i<number*2){
            printf(".");
            i++;
        }
        printf(".\n");
}

int main(int argc, char** argv) {

    int number, i, k, count = 1;
 
    scanf("%d", &number);
    for (k = 0; k < number-1; k++){
        printit(number, k);
    }

    for(i= 1; i<number*2; i++){
        printf("0");
    }
    printf(".\n");
    k--;
    for (; k >= 0; k--)
     {
         printit(number, k);
      }
      return 0;
}
