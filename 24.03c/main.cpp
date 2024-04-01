#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	
	int result1 = 0;	//первое задание
	for (int i = 100; i <= 999; i++)
	{
		if ((i / 100) == (i % 100 / 10) || (i % 100 / 10) == (i & 10) || (i / 100) == (i % 10))
		{
			result1 += 1;
		}
	}
	std::cout << "»тог первого задани€: " << result1 << "\n";



	int result2 = 0;	//второе задание
	for (int i = 100; i <= 999; i++)
	{
		if ((i / 100) != (i % 100 / 10) && (i % 100 / 10) != (i & 10) && (i / 100) != (i % 10))
		{
			result2 += 1;
		}
	}
	std::cout << "»тог втрого задани€: " << result2 << "\n";



	int result3 = 0, uinp2;	//третье задание
	std::cout << "3) ¬ведите число: ";
	std::cin >> uinp2;
	
	int h_bound = 10, l_bound = 1, len = 0, cur_n = 1;
	while (uinp2 / (h_bound / 10) != 0)
	{
		len += 1;
		if ((uinp2 % h_bound / l_bound) != 3 && (uinp2 % h_bound / l_bound) != 6)
		{
			result3 += (uinp2 % h_bound / l_bound) * cur_n;
			cur_n *= 10;
		}
		h_bound *= 10;
		l_bound *= 10;
	}
	std::cout << "»тог третьего задани€: " << result3 << "\n";
	


	int uinp4;	//четвертое звдвние
	std::cout << "4) ¬ведите число: ";
	std::cin >> uinp4;

	for (int i = 1; i <= uinp4; i++)
	{
		if (uinp4 % i*i == 0 && uinp4 % i*i*i != 0)
		{
			std::cout << i << "\n";
		}
	}



	int uinp5;	//п€тое задание
	std::cout << "5) ¬ведите число: ";
	std::cin >> uinp5;
	int h_bound5 = 10, l_bound5 = 1, sum5 = 0;
	while (uinp5 / (h_bound5 / 10) != 0)
	{
		sum5 += uinp5 % h_bound5 / l_bound5;
		h_bound5 *= 10;
		l_bound5 *= 10;
	}
	if (sum5*sum5*sum5 == uinp5*uinp5)
	{
		std::cout << "5) success\n";
	}
	else
	{
		std::cout << "5) falure\n";
	}



	int uinp6;	//шестое задание
	std::cout << "6) ¬ведите число: ";
	std::cin >> uinp6;

	for (int i = 1; i <= uinp6; i++)
	{
		if (uinp6 % i == 0)
		{
			std::cout << i << "\n";
		}
	}



	int uinp7_1, uinp7_2;	//седьмое задание
	std::cout << "7) ¬ведите первое число: ";
	std::cin >> uinp7_1;
	std::cout << "7) ¬ведите второе число: ";
	std::cin >> uinp7_2;

	for (int i = 1; i <= std::min(uinp7_1, uinp7_2); i++)
	{
		if (uinp7_1 % i == 0 && uinp7_2 % i == 0)
		{
			std::cout << i << "\n";
		}
	}



	return 0;
}