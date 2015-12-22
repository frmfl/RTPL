/**
 * @file main.c
 * @brief insertion sort algorithm for array of size 10
 * @author Martin Becker <becker@rcs.ei.tum.de>
 * @date 2015-November-08
 */

#include <stdio.h>
#define NCARDS 4

static void print_deck(int a[NCARDS]) {
    int i = 0;
    for (; i<NCARDS; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

static int insertsort(int a[NCARDS]) {
    int i,j, temp;
    i = 1;
    while(i < NCARDS) {
        j = i;
        while (a[j] < a[j-1]) {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
        printf("After %d rounds: ", i);
        print_deck(a);
        i++;
    }
    return 1;
}


int main(int argc, char**argv) {
    unsigned int a[NCARDS];

    // for testing, we define the reversed card deck here
    a[0]=10; a[1]=9;a[2]=8; a[3]=7;

    printf("Initial deck: ");
    print_deck(a);
    insertsort(a);

    return 0;
}
