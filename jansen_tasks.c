#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppercase1(char str[])
{
    for (int i = 0; i < strlen(str); i++) {
        // if(str[i] <= 97 && str[i] >= 122)
        // {
        //     printf("%d\n", i);
        //     str[i] -= 32;
        // }
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Uppercase1: %s\n", str);
}

void uppercase2(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Uppercase2: %s\n", str);
}

char *duplicate(const char *p)
{
    char *q;
    strcpy(q, p);
    return p;
}

void censor(char str[])
{
    printf("Before censor: %s\n", str);
    for (int i = 0; i < strlen(str); i++) 
    {
        if(str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o')
        {
            str[i] = str[i+1] = str[i+2] = 'x';
            i = i+3;
        }
    }
    printf("After censor: %s\n", str);
}

void get_extension(const char *file_name, char *extension)
{
    if(strlen(extension))
    
    for (int i = 0; i < strlen(extenssion); i++) {
        /* code */
    }
}

int main()
{
    
    char str[100] = "food foo1 foot foolish";
    uppercase1(str);
    uppercase2(str);
    
    char newStr[100] = "food foo1 foot foolish";
    
    censor(newStr);
    
    printf("Duplicate: %s\n", duplicate(str));

    return 0;
}
