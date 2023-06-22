// Write a program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
#include<conio.h>

void main(){
int a = 8;
int b = 3;

clrscr();

printf("enter the value of the first number :%d\n",a);
printf("enter the value of the second number :%d\n",b);

if(a<b){
printf("the minimum value is %d",a);
}else{
printf("the minimum value is %d",b);
}
getch();
}
