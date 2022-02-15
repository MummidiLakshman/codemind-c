#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="Hello CodeMind";
    scanf("%['A-Z''a-z'' ']s",str);
    printf("%s",str);
}