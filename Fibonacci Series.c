#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;
    printf("How many terms? ");
    scanf("%d", &n);
    printf("%d %d", first, second);
    for(i = 2; i < n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
