/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name: Raghav Kaashyap																	 -
- 	Section: 7																 -
-	NetID: raghavk@iastate.edu															     -
-	Date: 09/07/2023																 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    /* Put your code after this line */
	int x,y,z;
	printf("Enter a width: ");
	scanf("%d", &y);
	printf("Enter a height: ");
	scanf("%d", &x);
	printf("Enter a length: ");
	scanf("%d", &z);
	printf("A %d by %d by %d rectangle's area is %d\n", x,y,z,x*y*z);





    return 0;
}
