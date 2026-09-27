#include <stdio.h>
int main()
{
    FILE* file;
    file=fopen("First file.txt","w");
    if(file=NULL)
    {
        printf("File does not created");
    }
    else{

        printf("File Created");
        fclose(file);
    }




    return 0;
}
