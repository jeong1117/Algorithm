#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[81];

    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        if(islower(str[i]))
           str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    
    return 0;
}