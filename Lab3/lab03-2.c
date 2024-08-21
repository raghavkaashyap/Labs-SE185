/*----------------------------------------------------------------------------
-		    SE 185: Lab 03 - Introduction to the DS4 and Functions	    	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab03-2.c -o lab03-2
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -b | ./lab03-2

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int numButtons(int but1, int but2, int but3, int but4);

int main(int argc, char *argv[])
{
    int b1, b2, b3, b4;

    while (1)
    {
        scanf("%d, %d, %d, %d", &b1, &b2, &b3, &b4);
        printf("%d buttons pressed\n", numButtons(b1,b2,b3,b4));
        fflush(stdout);

    }

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */

int numButtons(int but1, int but2, int but3, int but4){

    int numButton;
    numButton = but1 + but2 + but3 + but4;
    return numButton;

}