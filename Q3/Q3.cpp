#include <bits/stdc++.h>
using namespace std;
int printRoman(int number)
{
  int value=number;
  int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
  string sym[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
  int i = 12;
  while (number > 0)
  {
    int div = number / num[i];
    number = number % num[i];
    while (div--)
    {
      cout << "Roman numerical for " << value << " is :" << sym[i];
    }
    i--;
  }
  return 0;
}

int main()
{
  int number;
  cout << "Enter the number :";
  cin >> number;
  printRoman(number);
  return 0;
}
