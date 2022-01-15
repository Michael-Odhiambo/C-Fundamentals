//
// Created by michael on 27/12/2021.
//
// Condense the DimensionalWeight.c program by (1) replacing the assignments to height, length, and width with
// initializers and (2) removing the weight variable, instead calculating ( volume + 165 ) / 166 within the last
// printf.

# include <stdio.h>

int main( void ) {

    int length, width, height;

    printf( "Enter the length of the box: " );
    scanf( "%d", &length );
    printf( "Enter the width of the box: " );
    scanf( "%d", &width );
    printf( "Enter the height of the box: " );
    scanf( "%d", &height );
    int volume = length * width * height;

    printf( "Dimension: %d*%d*%d\n", length, width, height );
    printf( "Volume: %d\n", volume );
    printf( "Dimensional weight: %d\n", ( volume + 165 ) / 166 );

    return 0;
}

