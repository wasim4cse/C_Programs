#include<stdio.h>
#include<math.h>
int main () {

  int n;

  printf("Enter total Numbers ");
  scanf("%d", &n);

printf("The armstrong numbers between n are:\n");

  for ( int i=1; i<=n; i++ ) {
    int temp = i;
    int digits = 0;


while (temp != 0) {
    temp /= 10;
    digits++;
}




temp = i;
int result = 0;

while ( temp != 0)
{
   int power = temp%10;
    result += pow(power,digits);
    temp/=10;
}

if (result == i) {
    printf("%d ",i);
}
  }
return 0;
}