#include <stdio.h>
#include <cs50.h>

int main(void){
    long long number = get_long_long("Number: ");
    long long visa = number / 1000000000000;
    long long amex = number / 10000000000000;
    long long visa_16 = number / 1000000000000000;
    long long mastercard = number / 100000000000000;
    if(visa == 4){
        int sum_even = 0;
        int sum_odd = 0;
        long long even = number;
        long long odd = number;
        for(int i = 1; i <= 13; i++){
            int mult = even%10;
            even = even/10;
            mult = mult*2;
            if(i%2 == 0){
                if(mult > 9){
                    for(int k =1; k <= 2;k++){
                        int temp = mult % 10;
                        mult = mult/10;
                        sum_even += temp;
                    }
                }else{sum_even += mult;}
        }
}for(int i = 1; i <= 13; i++){
            int mult = odd%10;
            odd = odd/10;
            if(i%2 != 0){
                sum_odd += mult;
    }
        }
    int total = sum_even + sum_odd;
    if(total%10 == 0){
        printf("VISA\n");
    }else{
    printf("INVALID\n");}
    }else if(visa_16 == 4){
        int sum_even = 0;
        int sum_odd = 0;
        long long even = number;
        long long odd = number;
        for(int i = 1; i <= 16; i++){
            int mult = even%10;
            even = even/10;
            mult = mult*2;
            if(i%2 == 0){
                if(mult > 9){
                    for(int k =1; k <=2;k++){
                        int temp = mult % 10;
                        mult = mult/10;
                        sum_even += temp;
                    }
                }else{sum_even += mult;}
        }
}for(int i = 1; i <= 16; i++){
            int mult = odd%10;
            odd = odd/10;
            if(i%2 != 0){
                sum_odd += mult;
    }
        }
    int total = sum_even + sum_odd;
    if(total%10 == 0){
        printf("VISA\n");
    }else{
    printf("INVALID\n");}
    }else if(mastercard == 51 ||mastercard== 52 ||mastercard == 53 ||mastercard == 54 ||mastercard == 55){
        
        int sum_even = 0;
        int sum_odd = 0;
        long long even = number;
        long long odd = number;
        for(int i = 1; i <= 16; i++){
            int mult = even%10;
            even = even/10;
            mult = mult*2;
            if(i%2 == 0){
                if(mult > 9){
                    for(int k =1; k <= 2;k++){
                        int temp = mult % 10;
                        mult = mult/10;
                        sum_even += temp;
                    }
                }else{sum_even += mult;}
        }
}for(int i = 1; i <= 16; i++){
            int mult = odd%10;
            odd = odd/10;
            if(i%2 != 0){
                sum_odd += mult;
    }
        }
    int total = sum_even + sum_odd;
    if(total%10 == 0){
        printf("MASTERCARD\n");
    }else{
    printf("INVALID \n");}
    }else if(amex == 34 || amex == 37){
        
        int sum_even = 0;
        int sum_odd = 0;
        long long even = number;
        long long odd = number;
        for(int i = 1; i <= 15; i++){
            int mult = even%10;
            even = even/10;
            mult = mult*2;
            if(i%2 == 0){
                if(mult > 9){
                    for(int k =1; k <= 2;k++){
                        int temp = mult % 10;
                        mult = mult/10;
                        sum_even += temp;
                    }
                }else{sum_even += mult;}
        }
}for(int i = 1; i <= 15; i++){
            int mult = odd%10;
            odd = odd/10;
            if(i%2 != 0){
                sum_odd += mult;
    }
        }
    int total = sum_even + sum_odd;
    if(total%10 == 0){
        printf("AMEX\n");
    }else{
    printf("INVALID\n");}
    }else{
        printf("INVALID\n");
    }}
