#include<stdio.h>
#include<stdbool.h>
#include<string.h> 
#include<stdlib.h>

void printArray(char * array, int length){
    for(int i = 0; i<length; ++i){
        printf("%c",array[i]);
    }
}

void findLetter(char * word,char * tempWord, char c, int length){
    for(int i = 0;i<length;++i){
        if(c == word[i]){
            tempWord[i]=c;
        }
    }

    printArray(tempWord,length);
}


bool checkTempArray(char * tempArray, int length){
    for(int i = 0;i<length;++i){
        if('*' == tempArray[i]){
            return false; 
        }
    }   

    return false;
}






int main(){
    printf("Welcome to Hangman!\n");
    printf("Try to guess the secret word one letter at a time.\n");

    printf("Player 1, please think of a word in LOWERCASE and then type it in: \n");
    char word[256];
    char tempWord[256];
    scanf("%s", word);
    int length = strlen(word) + 1;
    for(int i = 0; i<length; ++i){
        tempWord[i]='*';
        tempWord[length-1]='\n';
    }
 
    printf("Player 2, you are up! You have 6 tries to guess a letter at a time. \n");
    printArray(tempWord,length);
    bool finGame = false;
    int guesses = 6;
    while(finGame != true){
        int winner = strcmp(tempWord,word);
        if(winner = 0){
            printf("Congrats you got it!");
            guesses = 0;
            finGame = true;
        }       
        char letter;
        printf("Enter a letter: \n");
        scanf(" %c",&letter);
        findLetter(word, tempWord, letter, length);

        if(!checkTempArray(tempWord,length)){ //false
            guesses--;
            printf("%d\n",guesses);
        }

        if(guesses == 0){
            finGame = true;
        }
       
    }

    printf("The word is: ");
    printArray(word,length);
    printf("\nThe tempword is: ");
    printArray(tempWord,length);
    
    if(word == tempWord){
        printf("Congrats you got it!");
    }


    
    if(tempWord != word){
        printf("you didn't get it\n");
    }   


    return 0;
}

