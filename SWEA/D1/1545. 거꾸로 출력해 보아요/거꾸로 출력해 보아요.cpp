#include <stdio.h>

int main() {
    int num = 0;
    for(scanf("%d", &num); num >=0; num--)
        printf("%d ", num);
    
    return 0;
}