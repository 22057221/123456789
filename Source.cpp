#include<iostream>
#include<ctime>
void func(int a, int b)
{
	int power = 0;
	while (b <= a)
	{
		if (a==1 && b!=1)
		{
			return 0;
		}
		else
		{
			if (a%)
			{

			}
		}
	}
	return power;
}
int main()
{
	int power, a, b;
	std::cout << "enter number 1 : ";
	std::cin >> a;
	std::cout << "enter number 2 : ";
	std::cin >> b;
	power = func(a,b );
	system("pause");
	return 0;
}