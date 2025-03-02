// Chapter 4 Exercise 15 - Shipping Charges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
//Date: March 1st,2025
//Requirements: Shipping Charges
//The Fast Freight Shipping Company charges the following rates : Weight of Package(in Kilograms) Rate per 500 Miles Shipped
//2 kg or less
//$1.10
//Over 2 kg but not more than 6 kg
//$2.20
//Over 6 kg but not more than 10 kg
//$3.70
//Over 10 kg but not more than 20 kg
//$4.80
//Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges.
//Input Validation : Do not accept values of 0 or less for the weight of the package.
// Do not accept weights of more than 20 kg(this is the maximum weight the company will ship).
// Do not accept distances of less than 10 miles or more than 3, 000 miles.
// These are the company’s minimum and maximum shipping distances.



#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
   
	const int min_weight = 0,
		max_weight = 20,
		min_distance = 10,
		max_distance = 3000;

	float package_weight,
		distance,
		total_charges;

	cout << "What is the weight of the package?";
	cin >> package_weight;

	if (package_weight <= min_weight && package_weight > max_weight)
	{
		cout << "The package must be more than 0kg and less than 20kg.\n"
			<< "Please rerun the program to try again." << endl;
	}
	else
	{
		cout << "Distance?";
		cin >> distance;

		if (distance < min_distance && distance > max_distance)
		{
			cout << "The distance must be between 10 and 3000 miles\n"
				<< "Please rerun and try again." << endl;
		}
		else
		{
			if (package_weight <= 2)
				total_charges = (distance / 500) * 1.10;

			else if (package_weight > 2 && package_weight <= 6)
				total_charges = (distance / 500) * 2.20;

			else if (package_weight > 6 && package_weight <= 10)
				total_charges = (distance / 500) * 3.70;

			else if (package_weight > 10 && package_weight <= 20)
				total_charges = (distance / 500) * 4.80;

			cout << setprecision(2) << fixed
				<< "Total charges are $"
				<< total_charges
				<< "\nFor a distance of"
				<< distance
				<< "miles\n and a total weight of"
				<< package_weight
				<< "kg."
				<< endl;

		}
	}

	return 0;
}


