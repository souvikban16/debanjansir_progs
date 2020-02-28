#include<stdio.h>

void main()
{
    printf("Enter the character=");
    char c;
    scanf("%c",&c);
    if(( c>='a' && c<='z') ||(c>='A'&&(c<='Z')))
    {
        printf("\n Alphabet");

    }
    else
    {
        printf("\n Not an alphabet");
    }

}
