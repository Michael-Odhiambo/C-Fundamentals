//
// Created by michael on 27/12/2021.
//
// Write a program that asks the user to enter a value for x and then displays the value of the following
// polynomial: 3 * x ^ 5 + 2 * x ^ 3 - x ^ 2 + 7 * x - 6.

# include <stdio.h>

int main( void ) {

    int x;

    printf( "Enter the value of x: " );
    scanf( "%d", &x );

    int result = 3 * ( x * x * x * x * x ) + 2 * ( x * x * x * x ) - 5 * ( x * x * x ) - ( x * x ) + ( 7 * x ) - 6;

    printf( "The value of the polynomial is: %d\n", result );

    return 0;
}

