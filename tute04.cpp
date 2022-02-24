#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long nCr(int n, int r)//to find factorial of value r
{

	return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

long Factorial(int no)//to find factorial of value n
{
	long fac_n=1;
	for(int i=1;i<=no;i++)
	{
		fac_n=fac_n*i;
	}

	return fac_n;
}
