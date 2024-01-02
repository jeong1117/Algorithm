#include <stdio.h>
#include <string.h>

int main() {
    int test_case = 0;
    scanf("%d", &test_case);
    for(int i = 1; i <= test_case; i++) {
        char str[31];
        scanf("%s", str);
        for(int j = 1; j <= 11; j++) {
            if(str[0] == str[j]) {
                char strtmp[j+1];
                strncpy(strtmp, str, j);
                strtmp[j] = '\0';
                if(strncmp(&str[j*2], strtmp, j) == 0) {
                    printf("#%d %d\n", i, j);
                    break;
            	}
            }
        }
    }
    return 0;
}