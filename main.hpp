#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************
int getTwoValues(int, int);

int getNextPrime(int);

int getPrevPrime(int);
// ******************************
// Implement all your functions here
// ******************************
int getTwoValues(int begin,int end){
    //do-while loop to ensure begin < end without having to waste extra lines
    do {
        //prompt #1
        cout << "Enter the first number: " << endl;
        cin >> begin;
        //prompt #2
        cout << "Enter the next number. This number must be smaller than " << begin << ": " << endl;
        cin >> end;
        //keeps the loop going
        if(begin < end){
            cout << "Your numbers are too low! Try again!" << endl;
        }
        //when begin > end
        else{
            cout << "Thank you for your cooperation!" << endl;
            break;
        }
    } while (begin < end);
    //unexpected error
    cout << "The beginning number is: " << begin << endl;
    return begin;
    return end;
}

int getNextPrime(int begin){
    // Finding prime numbers with space between begin and end
    cout << "The beginning number is: " << begin << endl;
    int i,j, prime;
    for (i = 0; i <= j; i++){
        for(j = 2; j <= (i/2); j++){
            if (i % j == 0){
                break;
                }
            }
            //We found a prime number
            if (j > (i/2)){
                cout << i << " is a prime number\n";
                prime = i;
                if(i > begin){
                    cout << i << " is the closest prime number to " << begin << "." << endl;
                }
            }
    }
        // Return the number of prime numbers
        return prime;
}

int getPrevPrime(int end){
    //code
    int i,j, prime;
    for (i = end - 1; ; i--){ // end - 1 to avoid checking the same number again
        for(j = 2; j <= (i/2); j++){
            if (i % j == 0){
                break;
            }
        }
        //We found a prime number
        if (j > (i/2)){
            cout << i << " is a prime number\n";
            prime = i;
            return prime; // return the first prime number found
        }
    }
  return -1;
}