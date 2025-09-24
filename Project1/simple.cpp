//Mohab Yousef
//AUG, 31, 2023
//COMP 3500
//Instructor Xuechao Li
//I have watched some youtube videos to remind my self of what we learend last semster
#include <iostream>
#include <cmath>
using namespace std;

float computeStandardDeviation(float dataset[]);

float computeStandardDeviation(float dataset[]) {
    float total = 0.0, mean, standardDeviation = 0.0;

    int i;

    for (i = 0; i < 10; ++i) {
        total += dataset[i];
    }

    mean = total / 10;

    for (i = 0; i < 10; ++i) {
        standardDeviation += pow(dataset[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);
}

int main() {
    int i;
    float dataset[10];
    int numElements;
    int factorial = 1;

    cout << "Enter the count of positive numbers (must be less than 10) to calculate: ";
    cin >> numElements;

    cout << "Please input " << numElements << " elements: ";

    for (i = 0; i < numElements; ++i) {
        cin >> dataset[i];
    }

    for (i = 1; i <= numElements; ++i) {
        factorial *= i;
    }

    cout << "\nCalculated Standard Deviation = " << computeStandardDeviation(dataset);
    cout << "\nFactorial of " << numElements << " = " << factorial << "\n\n";

    return 0;
}

