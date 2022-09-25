/*
NAME: Youssef Ali Mohamed

EMAIL: aliy47628@gmail.com

GROUP: OCT_21

TIME: 1 PM --> 6 PM

*/

#include <stdio.h>
#include <stdlib.h>

#include "SDB.h"



STD_DATA STD_LIST[MAX_NUM_STUDENTS];

int counter=0;


void SDB_InitializeDataList(void)
{

    int k;
    for (k=0;k<=MAX_NUM_STUDENTS;k++)
    {
    STD_LIST[k].id      = 0;
    STD_LIST[k].year    = 0;
    STD_LIST[k].C_1_id  = 0;
    STD_LIST[k].C_1_GRD = 0;
    STD_LIST[k].C_2_id  = 0;
    STD_LIST[k].C_2_GRD = 0;
    STD_LIST[k].C_3_id  = 0;
    STD_LIST[k].C_3_GRD = 0;
    }
}

BOOLEAN SDB_IsFull(void)
{
    if (counter >= 10)
    {
        printf("STUDENT DATA BASE IS FULL \n\n");
        return TRUE;
    }
    else
    {
        printf("STUDENT DATA BASE IS NOT FULL \n\n");
        return FALSE;
    }
}



unsigned char SDB_GetUsedSize(void)
{
    printf("USED SIZE IS %d \n\n",counter);
    return counter;

}




BOOLEAN SDB_AddEntry(unsigned char id,unsigned char year,unsigned char C_1_id,
                     unsigned char C_1_GRD,unsigned char C_2_id,unsigned char C_2_GRD,
                     unsigned char C_3_id,unsigned char C_3_GRD)
{
    int i;
    if (counter == 10)
    {
        printf("STUDENT LIST IS FULL \n\n");
        return FALSE;

    }
    else
    {


    for (i=1;i<=MAX_NUM_STUDENTS;i++)
            {
            if ( STD_LIST[i].id  == 0)

            {
            STD_LIST[i].id      =  id;
            STD_LIST[i].year    =  year;
            STD_LIST[i].C_1_id  =  C_1_id;
            STD_LIST[i].C_1_GRD =  C_1_GRD;
            STD_LIST[i].C_2_id  =  C_2_id;
            STD_LIST[i].C_2_GRD =  C_2_GRD;
            STD_LIST[i].C_3_id  =  C_3_id;
            STD_LIST[i].C_3_GRD =  C_3_GRD;
            counter++;
            printf("ENTRY ADDED SUCCESSFULLY \n\n");
            return TRUE;
            break;
            }
            }
    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
            if(STD_LIST[i].id != 0)

            {
            STD_LIST[(counter+1)].id     =  id;
            STD_LIST[(counter+1)].year    =  year;
            STD_LIST[(counter+1)].C_1_id  =  C_1_id;
            STD_LIST[(counter+1)].C_1_GRD =  C_1_GRD;
            STD_LIST[(counter+1)].C_2_id  =  C_2_id;
            STD_LIST[(counter+1)].C_2_GRD =  C_2_GRD;
            STD_LIST[(counter+1)].C_3_id  =  C_3_id;
            STD_LIST[(counter+1)].C_3_GRD =  C_3_GRD;
            counter++;
            printf("ENTRY ADDED SUCCESSFULLY \n\n");
            return TRUE;
            }
    }
    }
}





void SDB_DeleteEntry(unsigned char id)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id == 0)
        {
          printf("STUDENT ID DOESN'T EXIST \n\n");
        }
    }
    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
            if (STD_LIST[i].id == id)
            {
                STD_LIST[i].id      = 0;
                STD_LIST[i].year    = 0;
                STD_LIST[i].C_1_id  = 0;
                STD_LIST[i].C_1_GRD = 0;
                STD_LIST[i].C_2_id  = 0;
                STD_LIST[i].C_2_GRD = 0;
                STD_LIST[i].C_3_id  = 0;
                STD_LIST[i].C_3_GRD = 0;
                if (counter >0)
                {
                counter--;
                }
                else
                {
                //do nothing
                }
                printf("ENTRY DELETED SUCCESSFULLY \n\n");
            }
    }

}






BOOLEAN SDB_ReadEntry(unsigned char id)
{
    int i;

    for (i=0;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id == id)
        {

            printf("STUDENT YEAR IS: %d \n\n",STD_LIST[i].year);
            printf("STUDENT COURSE 1 ID IS: %d \n\n",STD_LIST[i].C_1_id);
            printf("STUDENT COURSE 1 GRADE IS: %d \n\n",STD_LIST[i].C_1_GRD);
            printf("STUDENT COURSE 2 ID IS: %d \n\n",STD_LIST[i].C_2_id);
            printf("STUDENT COURSE 2 GRADE IS: %d \n\n",STD_LIST[i].C_2_GRD);
            printf("STUDENT COURSE 3 ID IS: %d \n\n",STD_LIST[i].C_3_id);
            printf("STUDENT COURSE 3 GRADE IS: %d \n\n",STD_LIST[i].C_3_GRD);
            return TRUE;
        }
    }
    for (i=0;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id != id)
        {
            return FALSE;
        }
    }

}




void SDB_GetIdList(void)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id == 0)
        {
            //do nothing
        }
        else
        {
        printf("STUDENT %d ID IS %d  \n\n",i,STD_LIST[i].id);
        }
    }
    printf("NUMBER OF STUDENTS IS %d  \n\n",counter);
}




BOOLEAN SDB_IsIdExist(unsigned char id)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id == id)
        {
            printf("STUDENT ID EXISTS \n\n");
            return TRUE;
        }
    }
    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].id != id)
        {
            printf("STUDENT ID DOESN'T EXIST \n\n");
            return FALSE;
        }
    }



}
