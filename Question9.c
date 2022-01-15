//
// Created by michael on 27/12/2021.
//
// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the
// smallest number of $20, $10, $5, and $1 bills:

# include <stdio.h>

int main( void ) {

    int dollarAmount, numberOfTwenties, numberOfTens, numberOfFives, numberOfOnes;

    printf( "Enter a dollar amount: " );
    scanf( "%d", &dollarAmount );

    int amountRemaining;
    numberOfTwenties = dollarAmount / 20;
    amountRemaining = dollarAmount - ( numberOfTwenties * 20 );
    numberOfTens = amountRemaining / 10;
    amountRemaining = amountRemaining - ( numberOfTens * 10 );
    numberOfFives = amountRemaining / 5;
    amountRemaining = amountRemaining - ( numberOfFives * 5 );
    numberOfOnes = amountRemaining / 1;

    printf( "$20 bills: %d\n", numberOfTwenties );
    printf( "$10 bills: %d\n", numberOfTens );
    printf( "$5 bills: %d\n", numberOfFives );
    printf( "$1 bills: %d\n", numberOfOnes );

    return 0;
}

