#include <stdio.h>

int main() {
    int P, K;
    scanf("%d %d", &P, &K);
    if(P > K)	// 비밀번호가 K보다 클 경우
    	printf("%d\n", P - K + 1);		// K 자신의 시도 횟수를 포함하므로 +1
    else		// 비밀번호가 K보다 작을 경우
    	// K 자신의 시도 횟수를 포함해야 하니까 999 가 아니라 1000 에서 빼줌, 000도 시도하니까 +1
        printf("%d\n", (1000 - K) + P + 1);
    
    return 0;
}