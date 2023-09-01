#include <stdio.h>
#include <stdlib.h>


unsigned int column=0;
unsigned int row=0;
unsigned int NumbOfElem=0;

int main()
{
      printf("Please Enter No. Of Element To Print Half pyramid:");
      scanf("%i",&NumbOfElem);
   for(column=0 ; column < NumbOfElem; column++)
   {
      for(row = 0; row <= column; row++)
          {
              printf("*");
          }

      printf("\n");
   }
 return 0;
}



