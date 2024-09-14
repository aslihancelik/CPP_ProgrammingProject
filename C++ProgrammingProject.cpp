// Programmer: Aslihan Celik
// 
// C++ProgrammingProject.cpp : This program calculates and displays the distance the car
// can travel on one tank of gas when driven in town and when driven on highway.
//

#include <iostream>
using namespace std;

// Function to calculate the distance a car can travel on one full tank of gas
// Takes two parameters: gasTank (size of the gas tank) and averageMilesPerGallon (miles the car travels per gallon)
// Returns the total distance the car can travel

double distance( const double gasTank, const double averageMilesPerGallon)
{
    return gasTank * averageMilesPerGallon;
}


int main()
{
    // Constants for the car's gas tank size and fuel efficiency (miles per gallon) in town and on the highway
    const double tankSize = 20.0, TOWN_MILES_PER_GALLON = 23.5, HIGHWAY_MILES_PER_GALLON = 28.9;

    double town_distance, highway_distance;

    //Calculating the distance that car can travel on one full tank in town
    town_distance = distance(tankSize, TOWN_MILES_PER_GALLON);

    //Calculating the distance that car can travel on one full tank on highway
    highway_distance = distance(tankSize, HIGHWAY_MILES_PER_GALLON);

    cout << "The distance that a car with a " << tankSize << " gallon gas tank can travel in town is " << town_distance << " miles. \n";
    cout << "The distance that a car with a " << tankSize << " gallon gas tank can travel on the highway is " << highway_distance << " miles. \n";
}

