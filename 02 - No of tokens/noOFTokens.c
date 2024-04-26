#include <stdio.h>

int main ()
{
    char ch[100] ; 
    int wordCount = 0 ; 
    printf("etner the string\n") ; 
    fgets(ch, 100,stdin);
    int length = sizeof(ch) / sizeof(ch[0]);
    for (int i = 0 ; i <= length; i++){
        if (ch[i] == ' ' &&  ch[i+1] != ' ')
        {
            wordCount++; 
        }
        
    }
    printf("\n%d", wordCount);
    return 0 ; 
}