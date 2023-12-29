#include <stdio.h>

int main() {
    int num = 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        int year, month, day;
        scanf("%4d%2d%2d", &year, &month, &day);
        if(month <= 0 || month >12 || day <= 0 || day > days[month-1])
        	printf("#%d -1\n", i);
        else
            printf("#%d %04d/%02d/%02d\n", i, year, month, day);
    }
	return 0;
}