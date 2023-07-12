#include<stdio.h>

void count(FILE* file)
{
    int vowel=0;
    int consonant=0;
    int space=0;

     char c;

    for (c=fgetc(file);c!=EOF;c=fgetc(file))
    {
        if(c== 'a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            (vowel)++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            (consonant)++;
        }
         else if (c == ' ') {
            (space)++;
        }
        
    }
    printf("vowels:%d\n",vowel);
    printf("consonant:%d\n",consonant);
    printf("space:%d\n",space);
    
}

int main()
{
    
    FILE* file=fopen("source","r");
    // int vowel=0;
    // int consonant=0;
    // int space=0;
    count(file);
    fclose(file);
    // printf("vowels:%d",vowel);
    // printf("consonant:%d",consonant);
    // printf("space:%d",space);
    return 0;
}