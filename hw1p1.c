//Author: Ryan Richmond
//ECE 175 - Computer Programming for Engineering Applications
//Tile Calculator

#include <stdio.h>

int main(void) {

	int lengthOfRoom;
	int widthOfRoom;
	int lengthOfTile;
	float costOfTile;
	int salesTax;
	int totalArea;
	int lengthNumWholeTiles;
	int widthNumWholeTiles;
	int totalNumTiles;
	float costPreTax;
	float costPostTax;

	printf("Enter the length of the room in to the nearest Inch:\n"); //prompt user for length of room in inches
	scanf_s("%d", &lengthOfRoom); //recieve input from user and store in memory

	printf("Enter the width of the room to the nearest Inch:\n"); //prompt user for width of room in inches
	scanf_s("%d", &widthOfRoom); //recieve input from user and store in memory

	printf("Enter the length of a single tile to the nearest Inch:\n"); //prompt user for length of tile in inches
	scanf_s("%d", &lengthOfTile); //recieve input from user and store in memory

	printf("Enter the cost of a single square tile:\n"); //prompt user for the cost of a single tile
	scanf_s("%f", &costOfTile); //recieve input from user and store in memory

	printf("Enter the percent sales tax:\n"); //prompt user for the sales tax that will be used
	scanf_s("%d", &salesTax); //recieve input from user and store in memory

	totalArea = lengthOfRoom * widthOfRoom; //calculuate the area of the room
	printf("The total area to be tiled is %d square inches\n", totalArea); //print the area of the room 

	lengthNumWholeTiles = lengthOfRoom / lengthOfTile;
	printf("%d\n", lengthNumWholeTiles);
	widthNumWholeTiles = widthOfRoom / lengthOfTile;
	printf("%d\n", widthNumWholeTiles);
	totalNumTiles = lengthNumWholeTiles * widthNumWholeTiles;
	printf("The total number of tiles to be purchased is %d\n", totalNumTiles); //print the number of tiles calculated that will be needed to cover the area.

	costPreTax = totalNumTiles * costOfTile;
	printf("The cost of the purchase before tax is $%.2f\n", costPreTax);

	costPostTax = costPreTax + (costPreTax * (salesTax / 100));
	printf("The cost of the purchase including tax is $%.2f\n", costPostTax);

}