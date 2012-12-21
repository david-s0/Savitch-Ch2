#include <iostream>

using namespace std;

int main()
{
  double purchase, plan, monthly, interest, to_interest;
  int months = 0;

  //get the details of purchase and credit card plan from customer
  cout << "Please let us know what your yearly interest is:" << endl;
  cin >> plan;
  //go from yarly plan to monthly percentage
  plan /= 12;
  cout << "Please let us know how much you are paying monthly:" << endl;
  cin >> monthly;
  cout << "Please let us know how much you spent:" << endl;
  cin >> purchase;

  for (; purchase > 0; months++)
    {
      //check if you have reached the last $50 of the debt
      if (purchase <= monthly)
	{
	  interest += 0.75;
	  purchase -= (monthly - 0.75);
	}
      else
	{
	  //calculate the amount that will be used to pay interests
	  to_interest = (purchase / 100) * plan;
	  if (to_interest > monthly)
	    {
	      break;
	    }
	  //add the amount to the interests
	  interest += to_interest;
	  //subtract the remainder of the amount from the debt
	  purchase -= (monthly - to_interest);
	}
    }

  if (months == 0)
    {
      cout << "This transaction was invalid, you are spending too much for this plan!" << endl;
    }
  else
    {
      cout << "It will take you " << months << " months to repay your debt and you will pay a total interest of " << interest << " dollars." << endl;
    }

  return 0;
}
