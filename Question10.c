//
// Created by michael on 27/12/2021.
//
// Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments.
# include <stdio.h>

int main( void ) {

    float loanAmount, interestRate, monthlyPayment;

    printf( "Enter amount of loan: " );
    scanf( "%f", &loanAmount );
    printf( "Enter interest rate: " );
    scanf( "%f", &interestRate );
    printf( "Enter monthly payment: " );
    scanf( "%f", &monthlyPayment );

    loanAmount = ( loanAmount - monthlyPayment ) + ( loanAmount *  ( ( interestRate / 100 ) / 12 ) );
    printf( "Balance remaining after first payment: %.2f\n", loanAmount );
    loanAmount = ( loanAmount - monthlyPayment ) + ( loanAmount * ( ( interestRate / 100 ) / 12 ) );
    printf( "Balance remaining after second payment: %.2f\n", loanAmount );
    loanAmount = ( loanAmount - monthlyPayment ) + ( loanAmount * ( ( interestRate / 100 ) / 12 ) );
    printf( "Balance remaining after third payment: %.2f\n", loanAmount );

    return 0;

}

