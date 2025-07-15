#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For time function

using namespace std;

int main() {
    const short maxValue = 6;
    const short minValue = 1;
    srand(time(nullptr)); // Seed the random number generator with the current time
    int first = (rand() % (maxValue - minValue + 1)) + minValue; // Generate a random number between 1 and 6
    int second = (rand() % (maxValue - minValue + 1)) + minValue; 
    cout << first << ", " << second;
    
    return 0;
}
