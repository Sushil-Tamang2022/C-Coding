#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main() {

    // while loop = Continue some code WHILE the condition remains true
    //                       Condition must be true for us to enter while loop

    // ---------- EXAMPLE 1 ----------

    int number = 0;

    while(number <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    };

    // ---------- EXAMPLE 2 ----------

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) {
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s!", name);

    // ---------- EXAMPLE 3 ----------

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response); // remove \n from input buffer

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }
    
    printf("You exit the game");

    return 0;
}