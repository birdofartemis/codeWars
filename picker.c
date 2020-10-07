#include <stdio.h>

/* Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, 
which is the number of times you must multiply the digits in num until you reach a single digit.

Example: 

39 === 3; because 3*9 = 27, 2*7 = 14, 1*4 = 4;
4 === 0; because you can't split it;
*/

int picker(int n){
    int i;
    int j;
    int arrNum[10];
    int * pointer;
    int resMutpl = 1;

    if(n>9){
//Splitting Number "n"":
        for(i=0; n>9; i++){ //counts the number of times that the process will repeat, our main objective;
            for(j=0; n>1; j++){
                arrNum[j] = n % 10;
                pointer = &arrNum[j];
                n = n/10;
            }
// Mutiplication of "arrNum[j]" elements:        
            while(pointer >= &arrNum[0]){           
                resMutpl= resMutpl * *pointer;
                pointer--;
            }
            n = resMutpl;
            resMutpl=1;
        }
        return i;
    }

    else{
        return 0;
    }
}
