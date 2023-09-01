#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>


/****1) The sum of an array is the sum of its individual elements. For
example, if an array is numbers = {1, 2, 3, 4}, the sum of the array
is 1+2+3+4 = 10.
Function Description: Complete the function summation. The
function must return the integer sum of the numbers array.
 int summation(int numbers_size, int* numbers)***/

#define NumberOfArr 5
int summation(int numbers_size, int *numbers);

int main() {

    int arr[NumberOfArr];
   int Numbers=0,i=0;
   for (i=0;i<NumberOfArr;i++)
   {
       scanf("%i",&arr[i]);
   }
   Numbers=summation(NumberOfArr,arr);
   printf("The Sum Of Array = %i",Numbers);


    return 0;
}
 int summation(int numbers_size, int* numbers)
 {
     int Number=0;
     int i=0;
     for(i=0;i<numbers_size;i++)
     {
         Number+=numbers[i];

     }
     return Number;
 }


