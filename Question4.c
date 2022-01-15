//
// Created by michael on 27/12/2021.
//
// Write a program that declares several int and float variables - without initializing them - and then prints
// their values. Is there any patters to the values? ( Usually there isn't. )

# include <stdio.h>

int main( void ) {

    int firstInteger;
    int secondInteger;
    int thirdInteger;
    float firstFloat;
    float secondFloat;
    float thirdFloat;

    printf( "First integer: %d\n", firstInteger );
    printf( "Second integer: %d\n", secondInteger );
    printf( "Third integer: %d\n", thirdInteger );
    printf( "First float: %f\n", firstFloat );
    printf( "Second float: %f\n", secondFloat );
    printf( "Third float: %f\n", thirdFloat );

    return 0;
}

