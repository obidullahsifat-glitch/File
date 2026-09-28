#include <stdio.h>
#include <string.h>
int main()

{

   char ch[100];
   FILE* file;
    file=fopen("hello.txt","a");
    if(file==NULL)
    {
        printf("File does not created\n");
    }
    else{

        printf("File Created\n");
        printf("Enter your name: \n");
        fgets(ch,sizeof(ch),stdin);
        fputs(ch,file);
        fclose(file);


    }



    return 0;
}

