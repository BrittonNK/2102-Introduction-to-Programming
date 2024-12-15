#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    int computer_choice, user_choice_mapped;
    char user_choice;


    srand(time(NULL));

    // Welcome & Game rules
    printf("Welcome to the Stone-Knife-Paper game!\n");
    printf("-------------------------------------------------------------- \n");
    printf("Game Rules are as follows: \n");
    printf("1. Stone blunts Knife. \n");
    printf("2. Knife cuts Paper. \n");
    printf("3. Paper wraps Stone. \n");
    printf("Input 'S' for Stone, 'K' for Knife and 'P' for Paper. \n");
    printf("-------------------------------------------------------------- \n");

    //user input & Validation
    do {
        printf("Input your choice: \n");
        scanf(" %c", &user_choice);
        user_choice = toupper(user_choice);
    }while(user_choice != 'S' && user_choice != 'K' && user_choice != 'P');

    // Computer
    computer_choice = rand() % 3;

    //Map user input
    if(user_choice == 'S') {
        user_choice_mapped = 0;
    }
    else if(user_choice == 'K') {
        user_choice_mapped = 1;
    }
    else if(user_choice == 'P') {
        user_choice_mapped = 2;
    }

    printf("The Computer chose: ");
    switch (computer_choice) {
        case 0: printf("Stone\n"); break;
        case 1: printf("Knife\n"); break;
        case 2: printf("Paper\n"); break;
    }

    printf("You chose: ");
    switch (user_choice_mapped) {
        case 0: printf("Stone\n"); break;
        case 1: printf("Knife\n"); break;
        case 2: printf("Paper\n"); break;

    }


    if (user_choice_mapped == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice_mapped == 0 && computer_choice == 1) ||
               (user_choice_mapped == 1 && computer_choice == 2) ||
               (user_choice_mapped == 2 && computer_choice == 0))
    {
        printf("You win!\n");
    } else
    {
        printf("Computer wins!\n");
    }

return 0;
}
