/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    double integer_result; //changed integer_result from int to a double
    double decimal_result;
    //converting 77 to a double so the value after the decimal point isn't truncated
    integer_result = (double) 77 / 5;
    printf("The value of 77/5 is %lf, using integer math.\n", integer_result);

    integer_result = 2 + 3;
	// no value was used to replace %d. integer_result replaces %d 
    printf("The value of 2+3 is %d.\n", (int)integer_result); 

    decimal_result = 1.0 / 22.0;
	//%d replaced with %lf to accomodate a double
    printf("The value 1.0/22.0 is %lf.\n", decimal_result); 

    return 0;
}
