#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
float x;
int cents,a,b,c,d,sum;
do{
x = get_float("Changes own:");
}while(x<0);
cents = round(x*100);

a = (cents/25);
b = ((cents%25)/10);
c = ((cents%25)%10)/5;
d = (((cents%25)%10)%5)/1;

sum = (a+b+c+d);
printf("%d\n",sum);
}