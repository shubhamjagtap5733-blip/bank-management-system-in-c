#include<stdio.h>
#include "info.h"
int gmail(bank *gmail,char *str)
{
    int n=0,invalid=0;
   
    do
    {
        if(invalid){
            printf("Enter Mail ID again\n");
            scanf(" %s",str);
        }
        invalid++;
        int i=0,count=0;
        while(str[i])
        {
            if(str[i]=='@'||str[i]=='.'||(str[i]>='0'&&str[i]<='9'))
            {
                i++;
                continue;
            }
            
            int n=islower(str[i]);
            if(n==0)
            {
                count++;
                break;
            }
            i++;
        }i=0;
        int num;
        if(count==1)
        {
            printf("Enter only lower case letter\n");
            continue;
        }

        char *ptr1=strstr(str,"@");
        if(ptr1==NULL)
        {
           printf("\"@\" is not present\n");
           continue;
        }
        if(strstr(ptr1+1,"@"))
        {
            printf("\"@\" should not present more then one time\n");
            continue;
        }
        char *ptr=strstr(str,".com");
        if(ptr==NULL)
        {
           printf("\".com\" is not present\n");
           continue;
        }
        int k=strcmp(ptr,".com");
        if(k!=0)
        {
            printf("\".com\" should not present more then one time\n");
            continue;
        }i=1;
        int l2=strlen(ptr1),domain;
        while(ptr1[i]!='.')
        {
            domain=isalpha(ptr1[i]);
            if(domain==0)
                break;
            i++;
        }
        if(domain==0)
        {
            printf("Please enter a valid domain name\n");
            continue;
        }
        i=0,k=0;
        int j=0;
        while(str[i])
        {
            if(str[i]=='@'&&str[i+1]=='.')
            {
                printf("Domain name is missing\n");
                j=1;
                break;
            }
            i++;
        }
        if(j!=0)
           continue;
        for(int i=0;i<gmail->count;i++)
        {
            if(strcmp(gmail->info[i].gmail,str)==0)
            {
                k=1;
                printf("Gmail id is already exists reEnter\n");
                break;
            }
        }
        if(k==0)
        return 1;
    } while (1);
    
}
