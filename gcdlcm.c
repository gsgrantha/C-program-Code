#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);
    printf("GCD=%d\n",gcd_result);
    printf("LCM=%d\n",lcm_result);
    return 0;
}

