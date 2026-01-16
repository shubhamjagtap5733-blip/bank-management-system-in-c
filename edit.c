#include<stdio.h>
#include "info.h"
void edit(bank *edit,int index)
{
    int num1;
    printf("1.name\n");
    printf("2.DOB\n");
    printf("3.Gmail\n");
    printf("4.number\n");
    printf("5.Address\n");
    printf("Select\n");
    scanf("%d",&num1);
    switch (num1)
    {
    case 1:scanf(" %[^\n]",edit->info[index].name);
        printf("Edit complite\n");
        break;
    case 2:scanf(" %[^\n]",edit->info[index].dob);
        printf("Edit complite\n");
        break;
    case 3:scanf(" %s",edit->info[index].gmail);
        printf("Edit complite\n");
        break;
    case 4:scanf(" %s",edit->info[index].number);
        printf("Edit complite\n");
        break;
    case 5:scanf("%[^\n]",edit->info[index].add);
        printf("Edit complite\n");
        break;
    case 0:return;
    }
  


} 