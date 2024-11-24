#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(void){
    string text = get_string("Text: ");
    int count_letters = 0, count_words = 1, count_sentences = 0;
    int length_text = strlen(text);
    for(int i =0; i < length_text; i++){
        if(text[i] == ' '){
            count_words++;
        }else if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
            count_sentences++;
        }else if(isalpha(text[i])){
            count_letters++;
        }
    };
    float L = ((float)count_letters / count_words) * 100;
    float S = ((float)count_sentences / count_words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if(grade < 1){
        printf("Before Grade 1\n");
    }else if(grade >= 16){
        printf("Grade 16+\n");
    }else{
        printf("Grade %d\n",grade);
    }
}