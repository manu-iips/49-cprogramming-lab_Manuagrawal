#include <stdio.h>
int main() {
    
int a = 10, b = 20;
printf("%d", (a > 5) && (b < 15));
printf("%d", (a == 10) || (b == 10));
printf("%d", !(a > b));
return 0;
}