#include <stdio.h>
#include <string.h>
int main()

{

   char ch[100];
   int age;
   FILE* file;
   file=fopen("hello.txt","w");
    if(file==NULL)
    {
        printf("File does not created\n");
    }
    else{

        printf("File Created\n");
        printf("Enter your name: \n");
        fgets(ch,sizeof(ch),stdin);
        fputs(ch,file);
        printf("Enter your age\n");
        scanf("%d",&age);
        fprintf(file,"AGE:%d\n",age);
        fclose(file);
        printf("Data added in the file successfully");



    }



    return 0;
}


