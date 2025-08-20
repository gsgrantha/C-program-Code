#include <stdio.h>
int main() {
    int i,n[10]={10,20,30,40,50};
    int sum=0;
    printf("[ARRAY:]\n");
    for(i=0;i<5;i++) {
        sum += n[i];
        printf("%d\n",n[i]);
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
