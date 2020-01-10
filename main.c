/* Author: Geancarlo Murillo
   Main Memory Exercise
*/

/*Assume that a system has a 32-bit virtual address with a 4-KB page size.
Write a C program that is passed a virtual address (in decimal) on the command line
and have it output the page number and offset for the given address.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned long address;
    unsigned long page;
    unsigned long offset;

    address = atoll(argv[1]); // get address from command line

    page = address / 4096; // address / page_size
    offset = address % 4096;  // mod address page_size

    printf("The address %lu contains: \n", address);
    printf("page number = %lu\n",page);
    printf("offset = %lu\n", offset);

    return 0;
        
}