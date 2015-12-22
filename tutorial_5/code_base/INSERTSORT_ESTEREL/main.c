/**
 * @file main.c
 * @brief harness/driver for the esterel reactive kernel
 * @author Martin Becker <becker@rcs.ei.tum.de>
 * @date 2015-November- 8
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NCARDS 4

/**************************
 * ESTERL PROGRAM:
 **************************/
/* must be exactly like this (other modules are allowed, other I/O signals not):

module INSERTSORT:

input CARD1_IN : integer, CARD2_IN : integer, CARD3_IN : integer, CARD4_IN : integer; % Esterel V5 has no arrays...
output CARD1_OUT : integer, CARD2_OUT : integer, CARD3_OUT : integer, CARD4_OUT : integer;
input START;
output FINISHED;

 ...

end module
*/

/********************************
 * VARIABLES FOR ESTEREL OUTPUTS
 ********************************/
static int out[NCARDS]; // outputs wi
static int finished = 0;
static int a[NCARDS];
static int tmp[NCARDS];

/**************************
 * FUNCTIONS
 **************************/
static void print_deck(int a[NCARDS]) {
    int i = 0;
    for (; i<NCARDS; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char**argv) {

//    int a[NCARDS];
    int i=0;
    a[0] = 6; a[1] = 7; a[2] = 1; a[3] = 9;

    printf("Initial deck: ");
    print_deck(a);

    // always a good idea at beginning
    INSERTSORT_reset();
    INSERTSORT();

    // set inputs by calling functions that Esterel generatesx


    // call Esterel program repeatedly until output is stable <=> is sorted
    finished = 0;
    while (!finished) {
	
    INSERTSORT_I_CARD1_IN(a[0]);
    INSERTSORT_I_CARD2_IN(a[1]);
    INSERTSORT_I_CARD3_IN(a[2]);
    INSERTSORT_I_CARD4_IN(a[3]);
	
    INSERTSORT_I_START();
        
        // set inputs here
        INSERTSORT(); // call to proceed one tick
        // outputs are set by the kernel calling the functions INSERTSORT_O_*

        i = i + 1;
        printf("After %d rounds: ", i);
        print_deck(tmp);
	memcpy(a,tmp,4*sizeof(int));
	INSERTSORT_reset();
	INSERTSORT();
    }
    return 0;
}

void INSERTSORT_O_FINISHED() {
    finished = 1;
}
void INSERTSORT_O_CARD4_OUT(int V) {
    tmp[3] = V;
}
void INSERTSORT_O_CARD3_OUT(int V) {
    tmp[2] = V;
}
void INSERTSORT_O_CARD2_OUT(int V) {
    tmp[1] = V;
}
void INSERTSORT_O_CARD1_OUT(int V) {
    tmp[0] = V;
}
