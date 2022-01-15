//
// Created by michael on 27/12/2021.
//
// Write a program that computes the volume of a sphere with a 10 - meter radius, using the formula v = 4/3pi*r^3.
// Write the fraction 4/3 as 4.0f / 3.0f. ( Try writing it as 4/3. What happens? ) Hint: C doesn't have an
// exponentiation operator, so you'll need to multiply r by itself twice to compute r^3.

# include <stdio.h>

# define CONSTANT ( 4.0f / 3.0f )
# define PI 3.142

int main( void ) {

    float radius;
    printf( "Enter the radius of the sphere: " );
    scanf( "%f", &radius );

    float volume = CONSTANT * PI * radius * radius * radius;

    printf( "The volume of the sphere is: %.3f\n", volume );

    return 0;
}

