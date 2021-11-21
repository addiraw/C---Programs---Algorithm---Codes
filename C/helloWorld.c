#include<stdio.h>

int main()
{
    FILE * fp;
    char ch;
    fp =fopen("helloWorld.txt","W");
    printf("Enter data");
    while ((ch=getchar())!=EOF) 
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("helloWorld.text","R");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);

    }
    fclose(fp);
    return 0;
    


}