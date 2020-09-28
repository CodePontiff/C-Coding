#include<stdio.h>

void Brances(int currentPos, int currentSum, int dt[], int size) {
int d = dt[currentPos];
if(currentPos*2+1 < size) {
Brances(currentPos*2+1, currentSum + d, dt, size);
if(currentPos*2+2 < size)
Brances(currentPos*2+2, currentSum + d, dt, size);
} else
printf("%d\n",currentSum + d);
}

int main() {

int counter;
scanf("%d",&counter);

int caseId = 1;
int ukuran;

while(caseId <= counter) {
scanf("%d",&ukuran);
int dt[ukuran];

for(int i=0;i<ukuran; i++) {
scanf("%d",&dt[i]);
}
printf("Case #%d:\n",caseId);

Brances(0, 0, dt, ukuran);
caseId++;
}

}
