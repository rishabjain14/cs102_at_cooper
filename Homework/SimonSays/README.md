### How to install and run 

Install the files uploaded.

gcc main.c to compile the files.

run the program using ./a.out.

Libraries used - string.h / stdio.h / stdlib.h


## Simon Says Description

```
The Team: Rishab Jain and Sid Pinto

Project Description: This is a simple text game in the terminal. 
The rules are just like the classic game of Simon says; if Simon says to do it, do it.
The game becomes more are more difficult as it progresses, opening with the simplest questions and ending with the most difficult.

Project Process: We aimed to create a game that took the classic concept of Simon Says and make it more difficult. 
We wanted the game to start over once the player lost but the mechanism for doing so was far more difficult than we expected. 
Because we ran into so many errors with starting over the game, we decided to let the user run the game again if they wanted to start over. 
Additionally, we ran into issues with scanning character string imputs with spaces.
For this reaon we had to search for help online to let our code read sentences entered by the user.

```
## Make file - compiles the program
```
n: main.c 
		gcc -o main main.c 
```

### main.c - starts the begingamefunction
```
#include <stdio.h>
#include "simonsays.c"
#include "simonsays.h"

int main()
{
    begingame();
}
```

### simonsays.h - declares the questions used in the c file
```
/*simonsays.h*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int begingame(void);
int question1(void);
int question2(void);
int question3(void);
int question4(void);
int question5(void);
int question6(void);
int question7(void);
int question8(void);
int question9(void);
int question10(void);
int question11(void);
int question12(void);
int question13(void);
int question14(void);
int question15(void);
int question16(void);
int question17(void);
int question18(void);
int question19(void);
int question20(void);
int question21(void);
int question10(void);
int question22(void);
int question23(void);
int question24(void);
int question25(void);
int question26(void);
int question27(void);
int question28(void);
int question29(void);
int question30(void);
int question31(void);
int question32(void);
int question33(void);
int question34(void);
int question35(void);
int question36(void);
int question37(void);
```

### simonsays.c - the questions outputed during the game

```
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "simonsays.h"

int begingame(void)
{
    char response;
    printf("Welcome to Simon Says! Would you like to begin? (y/n) \n");
    scanf("%c", & response);
    if (response == 'y')
    {
        question1();
    }
    else
    {
        printf("lame \n");
    }
}



int question1(void)
{
    int answer;
    printf("Sam says type 7 \n");
    scanf("%d", &answer);
    if (answer == 7)
    {
        printf ("You got it wrong! \n \n \n");
    } 
    else
    {
        question2();
    }
    return(0);
}



int question2(void)
{
    int answer;
    printf("Simon says type 5 \n");
    scanf("%d", &answer);
    if (answer == 5)
    {
        question3();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}



int question3(void)
{
    char ans[100];
    printf("Simon says type Welcome to Simon Says!\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "Welcome to Simon Says!") == 0)
    {
        question4();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}



int question4(void)
{
    int answer;
    printf("Simon says type 9 \n");
    scanf("%d", &answer);
    if (answer == 9)
    {
        question5();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question5(void)
{
    char ans[100];
    printf("Simon says type Hello, Simon \n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "Hello, Simon") == 0)
    {
        question6();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question6(void)
{
    int answer;
    printf("Sivan says type 5 \n");
    scanf("%d", &answer);
    if (answer == 5)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question7();
    }
    return(0);
}




int question7(void)
{
    char ans[100];
    printf("Simon says type I know how to play now!\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "I know how to play now!") == 0)
    {
        question8();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question8(void)
{
    int answer;
    printf("Simon says type 1 \n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        question9();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}



int question9(void)
{
    char ans[100];
    printf("Simon says type Raini Rodriguez\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "Raini Rodriguez") == 0)
    {
        question10();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question10(void)
{
    int answer;
    printf("Simon says enter the answer to 2+2 \n");
    scanf("%d", &answer);
    if (answer == 4)
    {
        question11();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question11(void)
{
    char ans[100];
    printf("Simon says type zooxanthellae\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "zooxanthellae") == 0)
    {
        question12();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question12(void)
{
    int answer;
    printf("Simon says enter the answer to 5-4\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        question13();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question13(void)
{
    char ans[100];
    printf("Simone says type yayoi kusama\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "yayoi kusama") == 0)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question14();
    }
    return(0);
}




int question14(void)
{
    int answer;
    printf("Simon says enter the answer to 3^2\n");
    scanf("%d", &answer);
    if (answer == 9)
    {
        question15();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question15(void)
{
    char ans[100];
    printf("Simon says type go visit https://biodieselbiochar.wixsite.com/eid101/biodiesel\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "go visit https://biodieselbiochar.wixsite.com/eid101/biodiesel") == 0)
    {
        question16();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question16(void)
{
    int answer;
    printf("Simon says enter the squre root of 25\n");
    scanf("%d", &answer);
    if (answer == 5)
    {
        question17();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question17(void)
{
    char ans[100];
    printf("Simon says enter the capital of Iowa (answers are lowercase) \n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "des moines") == 0)
    {
        question18();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question18(void)
{
    int answer;
    printf("Simon says enter the number of Voldemort's horcruxes\n");
    scanf("%d", &answer);
    if (answer == 8)
    {
        question19();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question19(void)
{
    char ans[100];
    printf("Sammy says enter the powerhouse of the cell\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "mitochondria") == 0)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question20();
    }
    return(0);
}




int question20(void)
{
    int answer;
    printf("Simon says enter the amount of times Japan won a World War\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        question21();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question21(void)
{
    char ans[100];
    printf("Simon says enter the actor who plays Jesse Pinkman in Breaking Bad\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "aaron paul") == 0)
    {
        question22();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question22(void)
{
    int answer;
    printf("Simon says enter the number of continents on earth\n");
    scanf("%d", &answer);
    if (answer == 7)
    {
        question23();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question23(void)
{
    char ans[100];
    printf("Simon says enter thirty one l's (L) in a row\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "lllllllllllllllllllllllllllllll") == 0)
    {
        question24();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question24(void)
{
    int answer;
    printf("Simon says enter the number of unpaired electrons in K\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        question25();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question25(void)
{
    char ans[100];
    printf("Sofia says enter the name of sid's dog\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "ozzie") == 0)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question26();
    }
    return(0);
}




int question26(void)
{
    int answer;
    printf("Simon says enter the number of unique chess pieces\n");
    scanf("%d", &answer);
    if (answer == 6)
    {
        question27();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question27(void)
{
    char ans[100];
    printf("Simon says type haha im letting a computer tell me what to do\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "haha im letting a computer tell me what to do") == 0)
    {
        question28();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question28(void)
{
    int answer;
    printf("Sylvia says enter the number of supreme court justices\n");
    scanf("%d", &answer);
    if (answer == 9)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question29();
    }
    return(0);
}






int question29(void)
{
    char ans[100];
    printf("Simon says do you like playing this game?\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "yes") == 0)
    {
        printf("thanks :) \n\n");
        question30();
    }
    else
    {
        printf("wow. thats actually really hurtful. you dont deserve it anyway. \n \n ");
    }
    return(0);
}




int question30(void)
{
    int answer;
    printf("Simon says enter the number of goals Germany scored in the 2014 World Cup Semifinal\n");
    scanf("%d", &answer);
    if (answer == 7)
    {
        question31();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}






int question31(void)
{
    char ans[100];
    printf("Sebastian says type Wow! You've made it really far!\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "Wow! You've made it really far!") == 0)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question32();
    }
    return(0);
}




int question32(void)
{
    int answer;
    printf("Simon says enter the number of US presidents who have been assasinated\n");
    scanf("%d", &answer);
    if (answer == 4)
    {
        question33();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question33(void)
{
    char ans[100];
    printf("Simon says enter the name of the first woman to win a nobel prize (1903)\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "marie curie") == 0)
    {
        question34();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}




int question34(void)
{
    int answer;
    printf("Sally says type 4\n");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf ("You got it wrong! \n \n ");
    }
    else
    {
        question35();
    }
    return(0);
}






int question35(void)
{
    char ans[100];
    printf("Simon says enter the name of the first building to have an elevator\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "the foundation building") == 0)
    {
        question36();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}



int question36(void)
{
    int answer;
    printf("Simon says enter the atomic number of lithium\n");
    scanf("%d", &answer);
    if (answer == 3)
    {
        question37();
    }
    else
    {
        printf ("You got it wrong! \n \n ");
    }
    return(0);
}





int question37(void)
{
    char ans[100];
    printf("Simon says enter the name of the reaction that turns cooking oil into biodiesel\n");
    fgets (ans, 100, stdin);
    scanf ("%[^\n]%*c", ans);
    if( strcmp(ans, "transesterification") == 0)
    {
        printf("\n\nYou win!!   :)\nThanks for playing Simon Says!! \nYou're really good at this you should get into esports or try out for Jeopardy or something\n\n");
    }
    else
    {
        printf ("You got it wrong! And that was the last question too! you totally blew it \n \n ");
    }
    return(0);
}
```
