#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        printf("%d ", str[i]-64);
    }
    return 0;
}