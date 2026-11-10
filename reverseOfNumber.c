#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int lastdigit = 0;
    int sum = 0;
    printf("Reverse of Digit : ");
    while(n!=0){
        lastdigit = n%10;
        sum = sum + (10*lastdigit);
        n = n/10;
        printf("%d ", lastdigit);

    }
    

    return 0;
}