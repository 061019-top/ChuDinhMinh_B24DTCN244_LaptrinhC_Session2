#include <stdio.h>

int main() {
int so1 = 5;
int so2 = 10;
float so3 = 2.75;


float tong = so1 + so2 + so3;
int tong_nguyen = so1 + so2 + (int)so3;

printf("Tong 3 so (float): %.2f\n", tong);
printf("Tong phan nguyen cua 3 so (int): %d\n", tong_nguyen);

return 0;


}

