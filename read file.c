#include <stdio.h>
int main()
{
    FILE* file;
    char ch;
    file=fopen("hello.txt","r");
    if(file==NULL)
    {
        printf("File does not created\n");
    }
    else{

        printf("File Created\n");
        while(!feof(file))
        {
           ch=fgetc(file);
           printf("%c",ch);
        }


        fclose(file);
    }




    return 0;
}

