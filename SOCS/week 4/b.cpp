#include <stdio.h>
#include <string.h>

char star[40000][40000], temp[10][40000];

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int count = 0; 
    while (fscanf(fp, "%s\n", &star[count]) == 1) {
        count++;
    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (strcmp(star[i], star[j]) < 0) {
                strcpy(temp[0], star[i]);
                strcpy(star[i], star[j]);
                strcpy(star[j], temp[0]);
            }
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%s\n", star[i]);
    }
    count = 0;
    fclose(fp);
    return 0;
}
