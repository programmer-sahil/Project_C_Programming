#include <stdio.h>
#include <math.h>
int sum(int a, int b){
    printf("%d \n", a+b);
}
int difference(int a, int b){
    printf("%d \n", a-b);
}
int multiply(int a, int b){
    printf("%d \n", a*b);
}
int divide(int a, int b){
    return a/b;
}

int main() {
    sum(100,200);
    difference(500,200);
    multiply(5,5);
    printf("%d", divide(10,2));
    
    

    return 0;
}
