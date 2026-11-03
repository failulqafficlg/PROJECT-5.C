#include<stdio.h>
int main()
{
 char s[100];
 FILE *fp;

 fp=fopen("feedback.txt","w");
 fprintf(fp,"1. I learned the basics of c programmig.\n");
 fprintf(fp,"2. I learned how to write the c program.\n");
 fprintf(fp,"3. I learned about header file.\n");
 fprintf(fp,"4. I gained confidence in coding.\n");
 fprintf(fp,"5. The teacher explained the concept clearly.\n");
 fclose(fp);

 fp=fopen("feedback.txt","r");
 printf("\nFive feedback\n");

 while(fgets(s,sizeof(s),fp)!=NULL)
 {
  printf("%s",s);
 }
 fclose(fp);
 fp=fopen("feedback.txt","a");
 fprintf(fp,"\n1. Sir, your class was very interesting.\n");
 fprintf(fp,"2. Your  teaching helped me to understand the c program.\n");
 fprintf(fp,"3, you explain the error in the program clearly.\n");
 fprintf(fp,"4. you clearly explain the doubt when i aks.\n");
 fprintf(fp,"5. sir, instead of focusing only on theory practising code will help us understand the concept better.\n");
 fclose(fp);

 printf("\nAll feedback saved successfully\n");
 return 0;
}

