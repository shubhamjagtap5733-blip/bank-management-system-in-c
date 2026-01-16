#include<stdio.h>
#include<string.h>
#include "info.h"
int adminAuthentication()
{
    char str1[30],str2[25];
    while(1)
    {
        printf("Enter a User Name\n");
        scanf(" %s",str1);
        if((strcmp(str1,"shubhamjagtap9022"))!=0)
        {
            printf("Invalid User\n");
            continue;
        }
        printf("Enter a Passwd\n");
        scanf(" %s",str2);
        if((strcmp(str2,"Shubham@9022"))!=0)
        {
            printf("Invalid passwd\n");
            continue;
        }
        return 1;
    }
}