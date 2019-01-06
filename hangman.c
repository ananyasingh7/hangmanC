#include<stdio.h>


int main(){
    printf("Welcome to Hangman!\n");
    printf("Try to guess the secret word one letter at a time.\n");

    printf("Player 1, please think of a word and then type it in: \n");
    char word[256];
    scanf("%s", word);
    printf("%s\n", word); //use for debugging purposes 
    return 0;
}