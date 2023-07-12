#include<stdio.h>
void count(FILE* file,int* vowel, int* consonant, int* space)
{
    * vowel=0;
    * consonant=0;
    * space=0;

    char c;

    for (c=fgetc(file);c!=EOF;c=fgetc(file))
    {
        if(c== 'a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            (*vowel)++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            (*consonant)++;
        }
         else if (c == ' ') {
            (*space)++;
        }
        
    }
}
int main()
{
    FILE* file= fopen("source","r");

    int space=0;
    int vowel=0;
    int consonant=0;
    if (file == NULL) {
        printf("Error: Failed to open the file\n");
        return 1;
    }
    // char c;

    // for (c=fgetc(file);c!=EOF;c=fgetc(file))
    // {
    //     if(c== 'a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ||
    //         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    //     {
    //         vowel++;
    //     }
    //     else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    //     {
    //         consonant++;
    //     }
    //      else if (c == ' ') {
    //         space++;
    //     }
    //     // if(c == " \n")
    //     // {
    //     //     space++;
    //     // }
    // }
    count(file,&vowel,&consonant,&space);
    fclose(file);
    printf("number of voweles are: %d \n",vowel);
    printf("number of consatant are: %d \n",consonant);
    printf("number of spaces are: %d \n",space);

    return 0;

}
