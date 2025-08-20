#include <stdio.h>
int main(){
   int m[10][10],i,j;
   printf("identity matrix :\n");
   for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           if(i==j){
               printf(" 1");
           }
           else{
               printf(" 0");
           }
       }
       printf("\n");
   }
    return 0;
}
