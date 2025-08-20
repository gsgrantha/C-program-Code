
#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2){
        for((j=n-i)/2; j>=1; j--){
        printf(" ");
    }
    for(j=1; j<=i; j++){
        printf(" %d",i);

}
    printf("\n");
}
    return 0;
}
