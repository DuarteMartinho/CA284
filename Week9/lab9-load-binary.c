#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char*argv[]) {
    FILE *pfile = NULL;  // File pointer
    char *filename = "studentBinary.bin"; //So a binary file has an extension of '.bin'
    pfile = fopen(filename, "rb"); //open a file with a binary mode
    if(!pfile) //check if the open operation work correctly
    {
        printf("Error opening %s for writing. Program terminated.\n", filename);
        exit(1);
    }
    
    int data[] = {0,0,0}; //Create an array to store the data
    int num_items = sizeof(data)/sizeof(int); //Identify the length of the array
    int wcount = fread( data, sizeof(int), num_items, pfile); //Read the data from binary file
    fclose(pfile); //close the file

    /* print the array to see if the file has been read correctly */
    for(int i = 0; i < num_items; ++i)
    {
        printf("%d ", data[i]);
    }
    return 0;
}