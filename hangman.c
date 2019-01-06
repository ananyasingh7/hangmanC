#include<stdio.h>
#include<stdbool.h>
#include<string.h> 
#include<stdlib.h>


int main(){
    printf("Welcome to Hangman!\n");
    printf("Try to guess the secret word one letter at a time.\n");

    printf("Player 1, please think of a word and then type it in: \n");
    char word[256];
    char tempWord[256];
    scanf("%s", word);
    int length = strlen(word);
    for(int i = 0; i<length; ++i){
        tempWord[i]='*';
        tempWord[length-1]='\n';
    }

    for(int i = 0; i<length; ++i){
        printf("%c",tempWord[i]);
    }


    printf("Player 2, you are up! You have 6 tries to guess a letter at a time. \n");
    bool finGame = false;
    int guesses = 6;
    while(finGame != true){
        char letter;
        printf("Enter a letter: \n");
        scanf(" %c",&letter);
        finGame = true;
    }

    return 0;
}

