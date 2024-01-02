#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        int n[3] = {(i / 100), ((i %100) / 10), ((i % 100) % 10)};
        int cnt = 0;
        for(int j = 0; j < 3; j++) {
        	if(n[j] != 0 && (n[j] % 3) == 0) {
                printf("-");
                cnt++;
            }
        }
        if(cnt == 0)
            printf("%d", i);
        printf(" ");
    }
    return 0;
}