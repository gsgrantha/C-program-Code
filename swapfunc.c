    #include <stdio.h>
    int main() {
        int a,b,result;
        char operation;
    scanf("%d %d",&a,&b);
    scanf(" %c",&operation);
    switch(operation){
    case '+':
    result=a+b;
    printf("Result: %d\n", result);
     break;
    case '-':
     result=a-b;
    printf("Result: %d\n", result);
     break;
     case '*':
     result=a*b;
     printf("Result: %d\n", result);
     break;
    case '/':
    if (b == 0) {
     printf("Division by zero is not allowed\n");
    }
    else {
    result =a/b;
    printf("Result: %d\n", result);
    }
    break;
    case '%':
    if (b==0) {
    printf("Division by zero is not allowed\n");
    }
    else {
    result = a%b;
    printf("Result: %d\n", result);
    }
    break;
    default:
    printf("Invalid operation\n");
    }
    return 0;
    }
