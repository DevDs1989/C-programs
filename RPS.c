#include <stdio.h>
#include <stdlib.h>

void main(){
  int input, computer, userScore, computerScore, maxScore;
  userScore = 0;
  computerScore = 0;
  maxScore = 5;
    printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
    printf("0 for Rock\n1 for Paper\n2 for Scissor\n3 to Exit\n\n");
    printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
  
  while(1){
    
    printf("Enter Your Choice: ");
    scanf("%d", & input);
    computer = rand() % 3;

    if(input == 3){
      printf("Exiting\nFinal Score is %d - %d\n", userScore,computerScore);
      exit(1);

    }


    else if(input == 0 && computer == 1){
      printf("Your picked Rock\t Computer picked Paper\nYou Lose!\n");
      computerScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == 0 && computer == 2){
      printf("Your picked Rock\t Computer picked Scissor\nYou Win!\n");
      userScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == 1 && computer == 0){
      printf("Your picked Paper\t Computer picked Rock\nYou Win!\n");
      userScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == 1 && computer == 2){
      printf("Your picked Paper\t Computer picked Scissor\nYou Lose!\n");
      computerScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == 2 && computer == 0){
      printf("Your picked Scissor\t Computer picked Rock\nYou Lose!\n");
      computerScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == 2 && computer == 1){
      printf("Your picked Scissor\t Computer picked Paper\nYou Win!\n");
      userScore++;
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input == computer){
      printf("Tie!!!!\n");
      printf("Score is\nUser: %d\nComputer: %d\n\n", userScore, computerScore);
    }

    else if(input != 0, 1 ,2, 3){
      printf("\nINVALID INPUT YOU MORON!!!!\nTRY AGAIN!\n\n");
      exit(1);}
    }
    }
