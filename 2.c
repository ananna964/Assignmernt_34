#include<stdio.h>
int main()
{
    int i,alphabet,digit,word,ch,other;
    char str[30];
    gets(str);
    i=alphabet=digit=word=other=0;
    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90|| ch>=97 && ch<=122)
            alphabet++;
        else if(ch>='0'&&ch <='9')
            digit++;
        else
            other++;
        i++;
    }
    printf("The number of alphabet=%d\n",alphabet);
    printf("The number of digits=%d\n",digit);
    printf("The number of others=%d\n",other);
    return 0;
}

