#include <iostream>

using namespace std;

int main()
{
  const double sweet_in_soda = 0.001;
  double mouse_weight, person_weight, deadly_to_mouse, max_soda;
  char more = 'y';
  
  while (more == 'y')
    {
      cout << "Please tell us how much did the mouse weight:" << endl;
      cin >> mouse_weight;
      cout << "Please tell us how much sweetener was necessary to kill the mouse:" << endl;
      cin >> deadly_to_mouse;
      cout << "Please tell us how much you weight:" << endl;
      cin >> person_weight;
      max_soda = ((deadly_to_mouse / mouse_weight) * person_weight) / sweet_in_soda;
      cout << "You should not drink more than " << max_soda << " litres of diet soda per day." << endl;

      cout << "Would you like to repeat the calculation? (y/n)" << endl;
      cin >> more;
    }
  
  return 0;
}
