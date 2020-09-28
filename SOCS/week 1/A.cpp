#include <stdio.h>

  int main() {
    char a[101];
    double b;
    float round; 
    scanf("%s",a);
    getchar();
    
    scanf("%lf",&b);
    
    b *= 100;
    b += 0.5;
    b = (int) b;
    float y = b/100;
    float rounded = round(y);
    printf("%s finished this semester with \"%.2f\" GPA. Congratulations!\n",a,rounded);
}
