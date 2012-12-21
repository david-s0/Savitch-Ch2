#include <iostream>
using namespace std;

int main()
{
  double number, root, guess;
  
  cout << "What number would you like to calculate the square root of?" << endl;
  cin >> number;

  //set initial guess
  guess = number / 2;

  while (true)
    {
      //compute possible root
      root = number / guess;
      //set initial guess
      guess = (guess + root) / 2;
      //check result
      if ((root >= (guess - (guess / 100))) && (root <= (guess + (guess /100))))
	{
	  break;
	}
    }
  
  cout << "The square root of " << number << " is " << root << "." << endl;

  return 0;
}
