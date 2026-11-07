#include<stdio.h>
#include<conio.h>

int main()
{
FILE*fp;
char line[1000];
clrscr();
fp=fopen("feedback.txt","w");
if(fp == NULL)
{
printf("File open failed!\n");
getch();
return 0;
}

fprintf(fp,"FEEDBACK ABOUT C PROGRAMMING CLASSES:\n");
fclose(fp);
printf("File created successfully.\n");

fp=fopen("feedback.txt","a");
if(fp == NULL)
{
printf("File cannot be opened!");
getch();
return 0;
}
fprintf(fp,"1.The classes are really interesting when it comes to labs and project sessions.");
fprintf(fp,"2.The exam questions are also easy to attend.\n");
fprintf(fp,"3.The instructor was very kind and polite at teaching.\n");
fprintf(fp,"4.But in class hours ,at some point it makes me feel sleepy and boring.\n");
fprintf(fp,"5.Overall ,it was really a good experience.\n");
fclose(fp);
printf("File appended successfully.\n");

fp=fopen("feedback.txt","r");
if(fp == NULL)
{
printf("File cannot be opened!");
getch();
return 0;
}

printf("\nFile contents:\n");
while(fgets(line, sizeof(line),fp) != NULL)
{
printf("%s",line);
}
fclose(fp);

printf("\n Press any key to exit....");
getch();
}
