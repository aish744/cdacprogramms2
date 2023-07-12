#include<stdio.h>

void Append(const char* filename,const char* data) {
    FILE* file = fopen(filename,"a");
    if(file == NULL)
    {
        printf("error opening the file");
        return;
    }
    fprintf(file,"%s\n",data);
    fclose(file);
}

int main()
{
    Append("data.txt","hello");
    Append("data.txt","Iam Aishwarya ");
    // FILE* file = fopen("data.txt","a");
    // if (file == NULL )
    // {
    //     printf("error in opeing file");

    // }
    // fprintf(file,"hello\n");
    // fprintf(file,"this is aihswarya swami\n");
    //  fclose(file);  




     printf("file is appended successfully\n");
     return 0;

}

  