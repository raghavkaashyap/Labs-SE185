#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

const char* randomButton(int num);

int main(int argc, char *argv[]){
    int check=0;
    int roundCount=0;
    int triangle=0, circle=0, x_button=0, square=0;
    int newTime=0;
    int totalTime = 2500;
    int timeVar=0;
    int randomNumber=0;
    srand(time(NULL));
    printf("This is a Bop-It Game!\n");
    printf("Please press the Circle Button to begin!\n");

    while(circle==0 && triangle== 0 && square==0 && x_button==0){
        scanf("%d, %d, %d, %d, %d", &newTime, &triangle, &circle, &x_button, &square);
    }
    check=circle;
    printf("%d",check);
    while(check){
        timeVar = newTime;
        randomNumber = rand()%4+1;
        printf("Press the %s button!\n", randomButton(randomNumber));
        while(timeVar+250>newTime){
            scanf("%d, %d, %d, %d, %d", &newTime, &triangle, &circle, &x_button, &square);
        }
        printf("You have %d milliseconds to respond!\n", totalTime);
        printf("\n");
        timeVar=newTime;
        while(timeVar+totalTime>=newTime){
            scanf("%d, %d, %d, %d, %d", &newTime, &triangle, &circle, &x_button, &square);
            if(triangle + circle + x_button + square != 0){
                if(randomNumber==1 && circle==1 && x_button==0&&square==0&&triangle==0){
                    roundCount++;
                    totalTime-=100;
                    break;
                }
                else if(randomNumber==2 && triangle==1 && circle==0&&x_button==0&&square==0){
                    roundCount++;
                    totalTime-=100;
                    break;
                }
                else if(randomNumber==3 && square==1 && x_button==0&&circle==0&&square==0){
                    roundCount++;
                    totalTime-=100;
                    break;
                }
                else if(randomNumber==4 && x_button==1 && circle==0&&square==0&&triangle==0){
                    roundCount++;
                    totalTime-=100;
                    break;
                }
                else{
                    printf("Wrong button!\n");
                    printf("You lose!\n");
                    check=0;
                    break;
                }
            }
        }            
        if (timeVar+totalTime<newTime){
            printf("You ran out of time. :(\n");
            printf("Thanks for playing!\n");
            break;
        }
    }
    printf("You made it through %d rounds!", roundCount);
    return 0;
}


const char* randomButton(int num){

    switch (num){
        case 1:
            return "Circle Button";
            break;
        case 2:
            return "Triangle Button";
            break;
        case 3:
            return "Square Button";
            break;
        default:
            return "Cross Button";
            break;
    }
}