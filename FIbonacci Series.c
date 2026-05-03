//Fibonacci series using Function and recursion
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void fibonacci_using_iteration(int n){
    int a=0, b=1, next;
    printf("Fibonacci Series using Iteration: \n");
    for(int i=0; i<n; i++){
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series using Recursion: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonacci(i));
    }
    printf("\n");

    printf("Fibonacci Series using iteration: \n");
    fibonacci_using_iteration(n);
    
    return 0;
}