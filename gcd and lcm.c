//GCD and LCM
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_recursive(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}   
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int result_gcd = gcd_recursive(num1, num2);
    int result_lcm = lcm(num1, num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, result_gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, result_lcm);
    
    return 0;
}