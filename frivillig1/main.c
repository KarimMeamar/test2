#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)
{
	  srand(time(NULL));
    int i;
    char result[3]= {'1', 'x' , '2'};
    printf("Din Strycktipskupong:\n\n");
	for (i = 1; i <= 13; i++) {
        int x = rand()%3;
        if (x==0) { printf("Match %2d : %2c\n" , i, result[0]);}
        if (x==1) { printf("Match %2d : %4c\n" , i, result[1]);}
        if (x==2) { printf("Match %2d : %6c\n" ,i , result[2]);}
      }
	return 0;
}

