#include <stdio.h>
#include <stdlib.h>

#include "SDB.h"
/*
NAME: Youssef Ali Mohamed

EMAIL: aliy47628@gmail.com

GROUP: OCT_21

TIME: 1 PM --> 6 PM

*/

/*
The function " SDB_InitializeDataList(); " must be called at the beginning of the project
*/

/*
The following code is just a test to the project. Functions are made in SDB.c and declared in SDB.h
you can just call the function in main to test the project
*/



int main()
{
    SDB_InitializeDataList();

    SDB_AddEntry(1,1,10,100,15,100,20,100);
    SDB_AddEntry(2,2,10,90,15,10,20,50);
    SDB_AddEntry(3,1,10,23,15,74,20,60);
    SDB_AddEntry(4,3,10,100,15,100,20,100);
    SDB_AddEntry(5,1,10,100,15,100,20,100);
    SDB_AddEntry(6,4,10,100,15,100,20,100);
    SDB_AddEntry(7,2,10,100,15,100,20,100);
    SDB_AddEntry(8,3,10,100,15,100,20,100);
    SDB_AddEntry(9,2,10,100,15,100,20,100);
    SDB_AddEntry(10,4,10,100,15,100,20,100);

    SDB_IsIdExist(4);

    SDB_DeleteEntry(4);

    SDB_AddEntry(4,4,10,100,15,100,20,100);

    SDB_ReadEntry(4);

    SDB_GetIdList();

    return 0;
}
