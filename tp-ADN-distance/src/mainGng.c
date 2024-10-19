#include "Needleman-Wunsch-recmemo.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
   char *stringX = "AKATSUKIAKATSUKI";
   char *stringY = "GIANG";

   long res = EditDistance_NW_Ite(stringX, 16, stringY, 4);
   printf("distance = %d  \n", res);
    long cur = EditDistance_NW_Rec(stringX, 16, stringY, 4);
   printf("distance recursive = %d  \n", cur);
}