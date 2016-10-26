#include <stdio.h>
#include<cs50.h>
int main(void)
{
        int height,space,rows,hash;
        do
        {
            printf("Please choose a number for your Mario Pyramid from 0 to 23");
            height =GetInt();
        }
        while ((height <0 ) || (height> 23));
        for( rows=1; rows<=height; rows++)
        { for (space= (height - rows); space>0; space--)
        {
            printf(" ");
        }
        for(hash =1;hash  <= rows+1; hash++)
        {
            printf("#");
        }
        printf("\n");
        }
           return 0;
}
