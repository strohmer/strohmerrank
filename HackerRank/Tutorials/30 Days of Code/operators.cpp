//http://www.github.com/Strohmer
//https://www.hackerrank.com/Strohmer
//Wenn du durch die Hölle gehst, geh weiter!

// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and
// tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

#include <iostream>

using namespace std;

int main() {
    double mealCost, tipPercent, taxPercent;
    int totalCost;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    tipPercent = (mealCost * (tipPercent/100));
    taxPercent = (mealCost * (taxPercent/100));

    totalCost = mealCost + tipPercent + taxPercent; 

    cout << "The total meal cost is " << totalCost << " dollars." << endl;

}
