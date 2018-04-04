/* Name: Josh Freeman
 * Date: 4/3/2018
 * File: main.cpp
 * Description: main window for 325 git assignment
 */

#include <iostream>
#include <iomanip>

using namespace std;

int sum (int userNum);

int main()
{
  int userNum = 0;
  cout << "Hello World!" << endl;

  cout << "Please enter a number. ";
  cin >> userNum;
  cout << "The sum using your number is: " << sum(userNum) << endl;
  
  return 0;
}

int sum(int userNum)
{
  int total = 0;
  for (int i = 0; i < userNum; i++)
    {
      total += i;
    }
  return total;
};
