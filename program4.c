/*
    Accept one number and check whether is divisiable by 5 or not 
*/

#include<stdio.h>

typedef int bool;
#define True 1
#define False 0

bool check(int iNo)
{
    if((iNo % 5 ) == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = False;


    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = check(iValue);


    if(bRet == True)
    {
        printf("Print Divisiable by 5 \n");
    }
    else
    {
        printf("Not Divisiable by 5 \n");
    }




    return 0;
}