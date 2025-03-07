#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
    double radius, height;
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    double volume = calculateVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}