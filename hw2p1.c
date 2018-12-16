//Ryan Richmond
//09 September 2018
//Cell Bill Calculator

// Instead of doing a running if-else-if for each scenario (if mins are under 600 do this, if not then do this, next step) I grouped the
// if statements together with the logical AND then ran if-else-if statements
// this at first seemed super daunting but then after both the TRUE TRUE and FALSE FALSE came together and it was copy paste from there

#include <stdio.h>
#include <math.h>

int main(void) {

	double planCostMins;		//initialize all the vairables needed, as you can see, some are out of order... coding is fun
	float planCostGB;
	double costAddlMins;
	double taxes;
	float taxesPaid;
	double costAddlData;
	int userMins;
	float userData;
	float overMins;
	float overData;
	float overPreCost;
	float underPreCost;
	float postTotalCost;

	planCostMins = 39.99;
	planCostGB = 10;
	taxes = .0525;
	costAddlMins = 0.4;
	costAddlData = 10;

	printf("Enter the number of minutes:\n"); //get all the minutes
	scanf("%d\n", &userMins);
	printf("Enter the amount of data (in GB):\n");  //get all the data... before the FCC does.
	scanf("%f\n", &userData);

	printf("Your monthly charges are as follows.\n\n"); //just throw away the money

	if ((userMins <= 600) && (userData <= 2)) {
		printf("Monthly Plan: $%.2f\n", planCostMins);	//just print the monthly plan constant
		printf("Additional per minute charges: $0.00\n");	
		printf("Data charges: $%.2f\n\n", planCostGB);	//print the data plan constant
		printf("Additional data charges: $0.00\n");
		underPreCost = planCostMins + planCostGB;
		printf("Pretax total: $%.2f\n", underPreCost);		// add them together
		taxesPaid = underPreCost * taxes;
		printf("Tax paid: $%.2f\n", taxesPaid);		//multiply by the tax value to get taxes paid
		postTotalCost = taxesPaid + underPreCost;
		printf("Total: $%.2f\n", postTotalCost);	//add taxes paid to pretax total to get total cost
	}
	else if ((userMins <= 600) && (userData > 2)) {
		printf("Monthly Plan: $%.2f\n", planCostMins);
		printf("Additional per minute charges: $0.00\n");
		overData = ceil(userData - 2) * costAddlData;
		printf("Data charges: $%.2f\n", planCostGB);
		printf("Additional data charges: $%.2f\n", overData);		//to calculate additional data cost by the whole GB, use the ceil function.
		//ceil will round all decimal values up to the nearest integer, then just multiply that by the cost
		//found out what the ceil function was after searching the internet for 'how to round up a float number'
		underPreCost = planCostGB + overData + planCostMins;
		printf("Pretax total: $%.2f\n", underPreCost);
		taxesPaid = underPreCost * taxes;
		printf("Tax paid: $%.2f\n", taxesPaid);
		postTotalCost = taxesPaid + underPreCost;
		printf("Total: $%.2f\n", postTotalCost);
	}
	else if ((userMins > 600) && (userData <= 2)) {
		overMins = (userMins - 600) * costAddlMins;	//only want the cost of additional minutes over the plans amount. so subtract 600 from that. since it is
		//an integer it will come out as a whole number then multiply by the cost and it will be converted to float
		printf("Monthly Plan: $%.2f\n", planCostMins);
		printf("Additional per minute charges : $%.2f\n", overMins);
		printf("Data charges: $%.2f\n", planCostGB);
		printf("Additional data charges: $0.00\n");
		underPreCost = planCostGB + overMins + planCostMins;
		printf("Pretax total: $%.2f\n", underPreCost);
		taxesPaid = underPreCost * taxes;
		printf("Tax paid: $%.2f\n", taxesPaid);
		postTotalCost = taxesPaid + underPreCost;
		printf("Total: $%.2f\n", postTotalCost);
	}
	else {
		overMins = (userMins - 600) * costAddlMins;
		overData = ceil(userData - 2) * costAddlData;
		overPreCost = planCostMins + planCostGB + overMins + overData;
		taxesPaid = taxes * overPreCost;
		postTotalCost = taxesPaid + overPreCost;
		printf("Monthly Plan: $%.2f\n", planCostMins);
		printf("Additional per minute charges : $%.2f\n", overMins);
		printf("Data charges: $%.2f\n", planCostGB);
		printf("Additional data charges: $%.2f\n", overData);
		printf("Pretax total: $%.2f\n", overPreCost);
		printf("Tax paid: $%.2f\n", taxesPaid);
		printf("Total: $%.2f\n", postTotalCost);

	}
	return (0);
}