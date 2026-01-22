#include<stdio.h>
#include<string.h>
#include "info.h"
int save_account(bank * save)
{
    FILE *fp;
    if((fp=fopen("contact.txt","w"))==NULL)
    {
        fprintf(stderr,"File is not found\n");
        return 0;
    }
    fprintf(fp,"#%d\n",save->count);
    for(int i=0;i<save->count;i++)
    {
        fprintf(fp,"%s,%s,%s,%s,%s,%s,%s,%s,%ld,%ld,%ld,%s,",save->info[i].name,save->info[i].adhaar,save->info[i].number,save->info[i].add,save->info[i].gmail,save->info[i].pan,save->info[i].post,save->info[i].dob,save->info[i].money,save->info[i].account,save->info[i].card,save->info[i].passwd);
        fprintf(fp,"%s,%s,%s,%s,%ld\n",save->bank_name,save->ifsc,save->bank_add,save->phone,save->account);

    }
    fclose(fp);
}
int Load_account(bank * save)
{
    FILE *fp;
    if((fp=fopen("contact.txt","r"))==NULL)
    {
        fprintf(stderr,"File is not found\n");
        return 0;
    }
    fscanf(fp,"#%d\n",&save->count);
    if(save->count==0)
    {
        printf("no data for read\n");
        return 0;
    }
    for(int i=0;i<save->count;i++)
    {
        fscanf(fp,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%ld,%ld,%ld,%[^,],%[^,],%[^,],%[^,],%[^,],%ld ",save->info[i].name,save->info[i].adhaar,save->info[i].number,save->info[i].add,save->info[i].gmail,save->info[i].pan,save->info[i].post,save->info[i].dob,&save->info[i].money,&save->info[i].account,&save->info[i].card,save->info[i].passwd,save->bank_name,save->ifsc,save->bank_add,save->phone,&save->account);
       

    }
    fclose(fp);
}