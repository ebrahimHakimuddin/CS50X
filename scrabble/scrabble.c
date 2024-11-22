#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int score[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int main(void){
    string word_1 = get_string("Player 1: ");
    string word_2 = get_string("Player 2: ");
    int length_1 = strlen(word_1);
    int length_2 = strlen(word_2);
    int score_1 = 0;
    int score_2 = 0;
    for(int i=0 ; i < length_1 ; i++){
        int c = toupper(word_1[i]);
        if(isalpha(c)){
            score_1 += score[c - 65];
        }
    }
    for(int i=0 ; i < length_2 ; i++){
        int c = toupper(word_2[i]);
        if(isalpha(c)){
            score_2 += score[c - 65];
        }
    }
    if(score_1 > score_2){
        printf("Player 1 wins!");
    }else if(score_2 > score_1){
        printf("Player 2 wins!");
    }else{
        printf("Tie!");
    }
}