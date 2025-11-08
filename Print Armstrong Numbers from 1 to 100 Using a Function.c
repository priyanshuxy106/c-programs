#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while(temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    for(int i = 1; i <= 100; i++) {
        if(isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
