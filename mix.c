#include <stdio.h>

int main()
{
        char name[10];
        int age;

        printf("\n\033[1;31m Enter Your Name : \033[1;34m");
        scanf("%s",name);
        printf("\033[1;31m Enter Your Age : \033[1;34m");
        scanf("%d",&age);

        printf("\n\033[1;37m Name : \033[1;33m%s\n",name);
        printf("\033[1;37m Age : \033[1;33m%d\n",age);
}