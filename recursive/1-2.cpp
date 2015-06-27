#include <iostream>

int f(int x)
{
	if(x==0)
		return 0;
	else
		return 2 * f(x - 1) + x*x;
}

int bad(int n)
{
	if(n == 0)
		return 0;
	else
		return bad(n/3 + 1) + n - 1;
}

void printDigit(int n)
{
	std::cout << n;
}

void printOut(int n)
{
	if(n>=10)
		printOut(n/10);
	printDigit(n%10);
}

int main()
{
   std::cout << "Hello, world!\n";
   std::cout << "f(): " << f(5) << "\n";
   // std::cout << "bad(): " << bad(0) << "\n";
   printOut(3450);
   std::cout << "\n";
}