#include <iostream>
using namespace std;

void swappingNumbers(int *x, int *y)
{

// created c as a variable for hold temporary the value of one variable at a time, for swapping to work out
int c = *x;
*x = *y;
*y = temp;
}

int main()
{
int a, b;

cout << "Enter first number: ";
cin >> a;

cout << "Enter second number: ";
cin >> b;

cout << "Numbers before Swapping:" << endl;
cout << "value of first number" << a << endl;
cout << "value of second number:" << b << endl;

swappingNumbers(&a, &b);

cout << "Numbers after Swapping:" << endl;
cout << "value of first number:" << a<< endl;
cout << "value of second number:" << b<< endl;

return 0;
}
