#include <stdio.h>
int main()
{
    int [array]={1,2,3,4};
    int size=sizeof(array);
    int target;
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        for(array[i]==target){
            printf("%d",i);
            break;
        }
    }

}
