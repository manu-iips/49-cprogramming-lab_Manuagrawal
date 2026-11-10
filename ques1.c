#include <stdio.h>
int main()
{ int a = 5, b = 2, c = 3;
int result;
result = a + b * c > 10 && a != b;
printf("%d" , result);
return 0;
}