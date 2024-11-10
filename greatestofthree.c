#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter the three number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&& a>c)
    printf(" %d a is  greatest:",a);
    else if(b>c)
    printf(" %d b is greatest:",b);
    else
    printf(" %c c id greatest:",c);}

