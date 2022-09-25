#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED

/*
NAME: Youssef Ali Mohamed

EMAIL: aliy47628@gmail.com

GROUP: OCT_21

TIME: 1 PM --> 6 PM

*/




#define MAX_NUM_STUDENTS  10

typedef enum
{
    FALSE,
    TRUE

}BOOLEAN;

typedef struct
{
    unsigned char id;
    unsigned char year;
    unsigned char C_1_id;
    unsigned char C_1_GRD;
    unsigned char C_2_id;
    unsigned char C_2_GRD;
    unsigned char C_3_id;
    unsigned char C_3_GRD;


}STD_DATA;

void SDB_InitializeDataList(void); //function to initialize and clear all the data inside the list

BOOLEAN SDB_IsFull(void);  // check if the data list is full

unsigned char SDB_GetUsedSize(void); // prints the used size of the list

BOOLEAN SDB_AddEntry(unsigned char id,unsigned char year,
                     unsigned char C_1_id,unsigned char C_1_GRD,
                     unsigned char C_2_id,unsigned char C_2_GRD,
                     unsigned char C_3_id,unsigned char C_3_GRD); // adding new element to the list
        /*
        it takes 8 inputs all of data type uint8 (unsigned char)
        1-) student id  (id) .  2-)student year  (year).
        3-) course_1 id (C_1_id).  4-)course_1 grade (C_1_GRD).
        5-) course_2 id (C_2_id).  6-)course_2 grade (C_2_GRD).
        7-) course_3 id (C_3_id).  8-)course_3 grade (C_3_GRD).
        */


void SDB_DeleteEntry(unsigned char id); // deleting an element from the list using its id

BOOLEAN SDB_ReadEntry(unsigned char id); // reading and printing the data of an element inside the list

void SDB_GetIdList(void);  // printing all students IDs inside the list

BOOLEAN SDB_IsIdExist(unsigned char id); // checking if an element exists inside the list with its id

#endif // SDB_H_INCLUDED
