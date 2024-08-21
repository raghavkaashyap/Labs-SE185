/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Student 1 - Role: Quiz Creator	and debugger - Participation: x%
(Use this line to describe your contribution to the project)
2- Student 2 - Role: Quiz Creator and debugger - Participation: y%
(Use this line to describe your contribution to the project)

3-Raghav Kaashyap - Role: Quiz Creator and Debugger
4-
5-																                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/
int quiz1();
int quiz2();
int quiz3();
/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
    int userNumber;
    int randomNumber;
    int userScore;
    int sumScore=0;
    int totalScore=0; //total score of all quizzes taken
    int totalAttempts=0; //total attempts of all quizzes
    int numAttempts=0; //number attepts of each quiz
    double averageScore; //Final average of all scores across all attempts 
    char userContinue='y'; //keeps track of user response and enters while loop accordingly
    printf("Welcome! You will enter a number between 1 and 9 and randomly be assigned a quiz!\n");
    printf("Good luck\n");
    while (userContinue=='y'){
        srand(time(NULL));
        sumScore=0; //sumScore and numAttempts are 0 before every iteration of the while loop
        numAttempts=0;
        printf("Enter a number between 1 and 9: ");
        scanf("%d", &userNumber);
        printf("\n");
        randomNumber = rand()%3+1; //random number between 1 and 3 inclusive
        if(randomNumber==1){
            printf("You've been assigned quiz 1!\n");
            userScore=quiz1();
            sumScore+=userScore;//score of first attempt of quiz 1 added to sumScore
            numAttempts++;
            if (userScore==15){
                printf("Average of all attempts of Quiz 1: %0.2lf\n", (double)userScore);
            }
            else{
                while(userScore!=15){ //loop runs till user gets a full score on quiz 1
                    printf("You did not get a full score! Try again.\n");
                    userScore = quiz1();
                    sumScore += userScore;
                    numAttempts++;
                }
                printf("Average of all attempts of Quiz 1: %0.2lf\n", (double)sumScore/numAttempts);
            }
            totalAttempts+=numAttempts; //totalAttempts and numAttempts updated after first quiz run
            totalScore+=sumScore;
        }
        else if (randomNumber == 2){//if randomNumber is 2, user is assigned quiz 2
            printf("You've been assigned quiz 2!\n");
            userScore=quiz2();
            sumScore+=userScore;
            numAttempts++;
            if (userScore==15){
                printf("Average of all attempts of Quiz 2: %0.2lf\n", (double)userScore);
            }
            else{
                while(userScore!=15){
                    printf("You did not get a full score! Try again.\n");
                    userScore = quiz2();
                    sumScore+=userScore;
                    numAttempts++;
                }
                printf("Average of all attempts of Quiz 2: %0.2lf\n", (double)sumScore/numAttempts);
            }
            totalAttempts+=numAttempts;
            totalScore+=sumScore;           
        }
        else{//if random number is 3, user is assigned quiz 3
            printf("You've been assigned quiz 3!\n");
            userScore=quiz3();
            sumScore+=userScore;
            numAttempts++;
            if (userScore==15){
                printf("Average of all attempts of Quiz 3: %0.2lf\n", (double)userScore);
            }
            else{
                while(userScore!=15){
                    printf("You did not get a full score! Try again.\n");
                    userScore = quiz3();
                    sumScore+=userScore;
                    numAttempts++;
                }
                printf("Average of all attempts of Quiz 3: %0.2lf\n", (double)sumScore/numAttempts);
            }
            totalAttempts+=numAttempts;
            totalScore+=sumScore;            
        }

        printf("Do you want to take another quiz? Enter y or n:\n"); //Asks user if they want to try another quiz
        scanf(" %c", &userContinue);
        printf("\n");
        if (userContinue=='y'){
            continue;
        }
        else{
            averageScore = (double)totalScore/totalAttempts; //average of all attempts of all quizzes is assigned to averageScore
            printf("Thank you for taking the quiz!\n");
            printf("Your average of all attempts on all quizzes is %0.2lf\n", averageScore);
        }

    }
	

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */

//quiz1(), quiz2(), and quiz3() ask the user the quiz questions, flag if the responses are correct, and return the score of each attempt
//Also lets the user know if a response is incorrect

int quiz1(){
    char response1[10]; //response1, response2, response3 take the user's answer. They are then compared with ans1, ans2, ans3 respectively
    char response2[10];
    char response3[10];
    char ans1[10] = "False";
    char ans2[10] = "b";
    char ans3[10] = "const";
    int score=0;//If the value of user response matches the value of ans, 5 is added to score. Else "Incorrect" is printed

    printf("Quiz 1!!\n");
    printf("Question 1 (True or False): All while loops are infinite loops.\n");
    scanf("%s", response1);
    if (strcmp(response1,ans1)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 2 (Multiple choice - a,b,c, or d): All keywords in C are in a) upper case b) lower case c) camel case d) none\n");
    scanf("%s", response2);
    if (strcmp(response2,ans2)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 3 (Fill in the blank): ___ keyword is used to prevent any changes to a variable in a C program.\n");
    scanf("%s", response3);
    if(strcmp(response3,ans3)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }

    return score;
}

int quiz2(){
    char response1[10];
    char response2[10];
    char response3[10];
    char ans1[10] = "False";
    char ans2[10] = "c";
    char ans3[10]= "1972";
    int score=0;

    printf("Quiz 2!!\n");
    printf("Question 1 (True or False): 2AB5GEF9 is a valid hexadecimal number.\n");
    scanf("%s", response1);
    if (strcmp(response1,ans1)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 2 (Multiple choice - a,b,c, or d): Who's the father of C programming? a) Steve Jobs b) James Gosling c) Dennis Ritchie d) Rasmus Lerdorf\n");
    scanf("%s", response2);
    if (strcmp(response2,ans2)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 3 (Fill in the blank): The C programming language was developed in the year ______ .\n");
    scanf("%s", response3);
    if(strcmp(response3,ans3)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }

    return score;
}

int quiz3(){
    char response1[10];
    char response2[10];
    char response3[20];
    char ans1[10] = "False";
    char ans2[10] = "a";
    char ans3[20] = "programming";
    int score=0;

    printf("Quiz 3!!\n");
    printf("Question 1 (True or False): In any C program the main function will always return zero.\n");
    scanf("%s", response1);
    if (strcmp(response1,ans1)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 2 (Multiple choice - a,b,c, or d): Which of the following is not a valid variable name in C? a) $number b) variable_count c) number d) ooo\n");
    scanf("%s", response2);
    if (strcmp(response2,ans2)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }
    printf("\nQuestion 3 (Fill in the blank): C is a ______ language.\n");
    scanf("%s", response3);
    if(strcmp(response3,ans3)==0){
        score+=5;
    }
    else{
        printf("Incorrect response!\n");
    }

    return score;
}