#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string text = get_string("Text: ");
    int length_text = strlen(text);
    char* words[100];{'\0'};
    int count = 0;
    for(int i = 0; i < length_text ; i++ ){
        string temp; 
        if(text[i] == ' '){
            words[count] = temp;
            count++;
        }else {
        temp[i] = text[i];
        printf("%s\n", temp);
        }
    printf("%c", words);
}
}