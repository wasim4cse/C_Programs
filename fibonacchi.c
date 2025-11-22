#include<stdio.h>
int main() {    
    int a = 0;
    int b = 1;
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("%d,%d,", a,b);

    for (int i=0; i<=n-2; i++) 
    {
        int x = a+b;
        printf("%d,", x);
        a = b;
        b = x;
    }
return 0;
}