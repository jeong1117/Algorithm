#include <stdio.h>

int main() {
    int test_case = 0;
    scanf("%d", &test_case);
    for(int i = 1; i <= test_case; i++) {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("#%d %d %d\n", i, (num1 / num2), (num1 % num2));
    }
    return 0;
}