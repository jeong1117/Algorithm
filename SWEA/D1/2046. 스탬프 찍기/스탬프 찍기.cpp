#include <stdio.h>

int main(){
    unsigned int num = 0;
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
        printf("#");
	
    return 0;
}