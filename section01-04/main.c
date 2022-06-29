#include <stdio.h>

int main(){

    // 1 dimentional array
/*  int nums[10]; // declare array with 10 elements but all of them need to be initialized with a known value.
    nums[0] = 5; // first element
    nums[3] = 2; // fourth element
    nums[9] = 3; // last element
 */
    int nums[10] = {} ; // declare array with zero in every value. Now Garbage is zero.
    nums[0] = 5; // first element
    nums[3] = 2; // fourth element
    nums[9] = 3; // last element

    printf("1 dimentional arrays\n");
    printf("%d %d %d\n", nums[0], nums[3], nums[9]);
    printf("(Garbage):%d %d %d\n", nums[1], nums[4], nums[7]); 

    // 2 dimentional array
    // int numsTable[2][3] = {}; // initialized with zeros

    // Initialize every value
    int numsTable[2][3] = {
        {1,2,3},
        {4,5,6}
        };

      //int numsTable[0][0] = 1;
    // int numsTable[1][1] = 2;

    printf("2 dimentional arrays\n");
    printf("%d %d %d\n\n", numsTable[0][0], numsTable[1][1], numsTable[1][2]);

    // Adresses

    printf("%d %d\n", &numsTable[0], numsTable[0]);
    printf("%d %d %d\n", &numsTable[0], &numsTable[0][1], numsTable);
    printf("Address of [0][0] = %d\n", &numsTable[0][0]);
    printf("Address of [0][0] = %d\n", &numsTable[0][1]);
    printf("Address of [0][0] = %d\n", &numsTable[0][2]);
    printf("Address of [0][0] = %d\n", &numsTable[1][0]);
    printf("Address of [0][0] = %d\n", &numsTable[1][1]);
    printf("Address of [0][0] = %d\n", &numsTable[1][2]);
    printf("Address of [0][0] = %d\n", &numsTable[2][0]);
    printf("Address of [0][0] = %d\n", &numsTable[2][1]);
    printf("Address of [0][0] = %d\n", &numsTable[2][2]);
}