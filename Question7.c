//
// Created by michael on 27/12/2021.
//
// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.

# include <stdio.h>

int main( void ) {

    float amount;

    printf( "Enter an amount: " );
    scanf( "%f", &amount );

    printf( "With tax added: %.2f\n", amount + ( 0.05 * 100 ) );

    return 0;
}

