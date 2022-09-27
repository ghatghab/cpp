#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}
	for (int i =2; i <n; i++)
	{	
	  if (n % i == 0)
	  {
		return false;
	  }
		
	}
	return true;
}




int main(int argc, char* argv[])
{
	int n, m, r;
	std::cout << " entrer 3 entiers positifs : ";
	cin >> n >> m >> r;

	if (isPrime(n))
	{
		std::cout << n << " is a prime : " << "True" << endl;
	}
	else
	{
		std::cout << n << " is a prime : " << "False" << endl;
	}
	if (isPrime(m))
	{
		std::cout << m << " is a prime : " << "True" << endl;
	}
	else
	{
		std::cout << m << " is a prime : " << "False" << endl;
	}
	if (isPrime(r))
	{
		std::cout << r << " is a prime : " << "True" << endl;
	}
	else
	{
		std::cout << r << " is a prime : " << "False" << endl;
	}
	return 0;
}
