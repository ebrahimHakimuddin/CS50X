#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool check_repeat(string query){
    for (int i = 0, j = strlen(query); i < j; i++)
   {
      for (int k = i+1; k < j; k++)
      {
         if (query[i] == query[k])
         {
            return true;
         }

      }
   }
   return false;
}

int main(int argc, string argv[]){
    if(argc == 2){
    string cypher = argv[1];
    int length = strlen(cypher);
    string encoded_text;
    if(length == 26){
        string seen[26];
        for(int i =0; i < length; i++){
            if(!(isalpha(cypher[i]))){
                printf("Invalid Character in Cypher\n");
                return 1;
            }
        }if(check_repeat(cypher)){
            printf("Repeated Character\n");
            return 1;
        }else{
        string plain = get_string("plaintext:");
        int plain_length = strlen(plain);
        printf("ciphertext:");
        for(int i =0; i < plain_length; i++){
            if(isalpha(plain[i])){
                if(isupper(plain[i])){
                int c = plain[i] - 65;
                char encoded = toupper(cypher[c]);
                printf("%c", encoded);
                }else{
                int c = plain[i] - 97;
                char encoded = tolower(cypher[c]);
                printf("%c", encoded);}
            }else{
                printf("%c", plain[i]);
            }
        }
        printf("\n");
        return 0 ;}
    }else{
        printf("Cypher Not Long Enough\n");
        return 1;
    }
    }else{
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

