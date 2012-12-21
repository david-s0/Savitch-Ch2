#include <iostream>

using namespace std;

#define GALLONS_X_CUBE 7.48;
#define INCHES_TO_FEET 0.0833333;
#define PI 3.14159265359;

int main()
{
  double radius, depth, capacity;
  
  cout << "What is the radius (in inches) of your well?" << endl;
  cin >> radius;
  radius *= INCHES_TO_FEET;
  cout << "What is the depth (in feet) of your well?" << endl;
  cin >> depth;

  capacity = radius * radius * depth * PI;
  capacity *= GALLONS_X_CUBE;

  cout << "Your well can hold " << capacity << " gallons of water." << endl;

  return 0;
}
