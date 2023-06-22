// Write a program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
#include<conio.h>

void main(){
int s;
clrscr();
printf("enter the value of first number :");
scanf("%d",&s);

if(s<0){
printf("the number is negative :");
}else if (s == 0){
printf("the number is neutral :");
}else{
printf("the number is positive :");
}
getch();
}