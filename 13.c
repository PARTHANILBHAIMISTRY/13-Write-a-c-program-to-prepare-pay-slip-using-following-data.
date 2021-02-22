//Program 13: Write a c program to prepare pay slip using following data.
//Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic, 
//Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.
#include <stdio.h>
int main()
{
    float basic;
    printf(" Enter basic salery :");
    scanf("%f",&basic);
    printf("\n==================================");
    printf("\n         SALERY SLIP");
    printf("\n basic  : %.2f",basic);
    printf("\n da     : %.2f",basic*0.10);
    printf("\n hra    : %.2f",basic*0.075);
    printf("\n ma     : %.2f",300.00);
    printf("\n==================================");
    printf("\n gross  : %.2f",basic+(basic*0.10)+(basic*0.075)+300.00);
    printf("\n==================================");
    printf("\n pf     : %.2f",basic*0.125);
    printf("\n==================================");
    printf("\n net    : %.2f",(basic+(basic*0.10)+(basic*0.075)+300.00)-(basic*0.125));
    printf("\n==================================");
    return 0;
}
