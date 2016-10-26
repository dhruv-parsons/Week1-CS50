#include <stdio.h>
#include<cs50.h>
#include<math.h>
int main ()
    {
        int x, multiply;
        printf ("enter the number of minutes you take to shower\n");
        x= GetInt ();
        multiply = x*12;
        printf( " the number of bottles you use are %d\n", multiply);
        if (multiply > 150)
        {
        printf( "Boy, that's a lot of water!");
        }
        else
        {
        printf ("that's the water bottles you use for a shower!");
        }
        return 0;
    }