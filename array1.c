#include <stdio.h>
int main() {
    int i,n[10]={10,20,30,40,50};
    printf("ARRAY:[10,20,30,40,50]\n");
    for(i=0;i<5;i++){
        printf("in position:%d the elements is:%d\n",i,n[i]);
    }
    return 0;
}
