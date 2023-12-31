#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // 바위(2)가 가위(1)를 이김 => 2 - 1 == 1
    // 보(3)가 바위(2)를 이김 => 3- 2 == 1
    // 가위(1)가 보(3)를 이김 => 1 - 3 == -2
    if((a - b) == 1 || (a - b) ==-2)
        printf("A");
    else
        printf("B");
    
    return 0;
}