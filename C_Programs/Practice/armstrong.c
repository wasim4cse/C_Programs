#include<stdio.h>
#include<math.h>
int main() {
    int num, temp, originum, power;
    long overview = 0;
    int digits = 0;

    printf("Enter the number");
    scanf("%d", &num);
    originum=num;

    // digit checking

    temp = num;   
      while (temp!=0)
        {
           temp/=10;
           digits++;
    }

temp = num;
while (temp!=0)
{
  power = temp%10;
  overview += pow(power, digits);
  temp /= 10;
}

if ((int)overview == originum) {
    printf("The number is an Amstrong number");
}

else {
    printf("The number isnt an Amstrong Number");
}

return 0;
}