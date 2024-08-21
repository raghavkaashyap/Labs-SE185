/*----------------------------------------------------------------------------
-		         SE 185: Lab 05 - Conditionals (What's up?)	    	         -
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
double magnitude(double x, double y, double z);
int close_to(double tolerance, double point, double value);
void orientation(double gx, double gy, double gz);

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab05.c -o lab05
// Run with ./ds4rd.exe -d 054c:05c4 -D DS4_BT -a -g -b | ./lab05

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int check;
int main(int argc, char *argv[])
{
    int triangle, circle, x_button, square;
    double ax, ay, az, gx, gy, gz;
    double acceleration;

    while (1)
    {
        scanf("%lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d",
              &ax, &ay, &az, &gx, &gy, &gz, &triangle, &circle, &x_button, &square);
        

        /* printf for observing values scanned in from ds4rd.exe,
         * be sure to comment or remove in final program */
        //printf("Echoing output: %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n",
              // ax, ay, az, gx, gy, gz, triangle, circle, x_button, square);
        acceleration = magnitude(ax,ay,az);
        if (close_to(0.2,0.1,acceleration)){
            orientation(gx,gy,gz);
        }
        //printf("The acceleration's current magnitude is: %lf\n",  acceleration);
        if (triangle == 1){
            break;
        }


    }

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */
double magnitude(double x, double y, double z)
{
	double mag = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return mag;
}

int close_to(double tolerance, double point, double value){
    double result1 = point + tolerance;
    double result2 = point - tolerance;
    if ((value>=result2)&&(value<=result1)){
        return 1;
    }
    else{
        return 0;
    }

}

void orientation(double gx, double gy, double gz){
    int a,b;
    if (close_to(0.2, 1, gy)){
        if(check!=1){
            printf("TOP\n");
            check=1;
        }
    }
            
    else if(close_to(0.2, -1, gy)){
        if(check!=2){
            printf("BOTTOM\n");
            check=2;
        }
    }
    else if(close_to(0.2,-1,gx)){
        if(check!=3){
            printf("LEFT\n");
            check=3;
        }
  
    }
    else if(close_to(0.2,1,gx)){
        if(check!=4){
            printf("RIGHT\n");
            check=4;
        }
        
    }
    else if(close_to(0.2,-1, gz)){
        if(check!=5){
            printf("FRONT\n");
            check=5;
        }        

    }
    else if(close_to(0.2,1,gz)){
        if(check!=6){
            printf("BACK\n");
            check=6;
        }

    }
}

