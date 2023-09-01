#include <stdio.h>
#include <stdlib.h>


unsigned int row=0;
unsigned int column=0;
unsigned int NumbOfElem=0;

int main()
{
  printf("Please Enter No. Of Element To Print Invert Half pyramid:");
  scanf("%i",&NumbOfElem);
    for (column=NumbOfElem;column>=1;column--)
    {
        for(row=1;row<=column;row++)
        {
            printf("* ");
        }
      printf("\n");

    }
    return 0;
}
