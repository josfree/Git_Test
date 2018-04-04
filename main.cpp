/* Name: Josh Freeman
 * Date: 4/3/2018
 * File: main.cpp
 * Description: main window for 325 git assignment
 */

#include <iostream>
#include <iomanip>

using namespace std;

int sum (int userNum);
int product(int userNum);

int main()
{
  int userNum = 0;
  cout << "Hello World!" << endl;

  cout << "Please enter a number. ";
  cin >> userNum;
  cout << "The sum using your number is: " << sum(userNum) << endl;
  cout << "The product of your number multiplied by i is " <<  product(userNum) << endl;
  
  return 0;
}

int sum(int userNum)
{
  int total = 0;
  for (int i = 1; i < userNum; i++)
    {
      total += i;
    }
  return total;
};

int product(int userNum)
{
  int prod = 1;
  for (int i = 1; i < userNum; i++)
    {
      cout << prod * i << " " ;
      prod = prod * i;
    }
  cout << endl;
  return prod;
};
