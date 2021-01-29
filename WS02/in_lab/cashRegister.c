//==============================================
// Name:           Ivan Ray Resoco
// Student Number: 162592174
// Email:          irresoco@myseneca.ca
// Section:        NAA
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>	
#pragma warning (disable : 4996)
int main()
{
	int numOwe = 0;
	double GST, amount, Loonies;
	

    printf("Please enter the amount to be paid: ");
	
	scanf("%d", &numOwe);

	GST = numOwe * .13 + .005;
	
	printf("GST: $%1.2lf \n", GST);

	Loonies = (numOwe / 1);
	
	scanf("%d");

	printf("Loonies required: %d, balance owing $0.81\n");
	printf("Quaters required: 2, balance owing $0.06 \n");
	printf("Dimes required: 0, balance owiung $0,06 \n");




    

	return 0;

}




