#include <stdio.h>
#include <string.h>
int main()

{
   int i;
   char ch[100]="Good morning everyone.Firstly lets introduce myself.....";
   int length=strlen(ch);


    FILE* file;
    file=fopen("hello.txt","w");
    if(file==NULL)
    {
        printf("File does not created");
    }
    else{

        printf("File Created");

    }
for(i=0;i<length;i++)
{
    fputc(ch[i],file);
}
fclose(file);



    return 0;
}

