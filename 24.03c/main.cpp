#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	
	int result1 = 0;	//������ �������
	for (int i = 100; i <= 999; i++)
	{
		if ((i / 100) == (i % 100 / 10) || (i % 100 / 10) == (i & 10) || (i / 100) == (i % 10))
		{
			result1 += 1;
		}
	}
	std::cout << "���� ������� �������: " << result1 << "\n";



	int result2 = 0;	//������ �������
	for (int i = 100; i <= 999; i++)
	{
		if ((i / 100) != (i % 100 / 10) && (i % 100 / 10) != (i & 10) && (i / 100) != (i % 10))
		{
			result2 += 1;
		}
	}
	std::cout << "���� ������ �������: " << result2 << "\n";



	int result3 = 0, uinp2;	//������ �������
	std::cout << "3) ������� �����: ";
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
	std::cout << "���� �������� �������: " << result3 << "\n";
	


	int uinp4;	//��������� �������
	std::cout << "4) ������� �����: ";
	std::cin >> uinp4;

	for (int i = 1; i <= uinp4; i++)
	{
		if (uinp4 % i*i == 0 && uinp4 % i*i*i != 0)
		{
			std::cout << i << "\n";
		}
	}



	int uinp5;	//����� �������
	std::cout << "5) ������� �����: ";
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



	int uinp6;	//������ �������
	std::cout << "6) ������� �����: ";
	std::cin >> uinp6;

	for (int i = 1; i <= uinp6; i++)
	{
		if (uinp6 % i == 0)
		{
			std::cout << i << "\n";
		}
	}



	int uinp7_1, uinp7_2;	//������� �������
	std::cout << "7) ������� ������ �����: ";
	std::cin >> uinp7_1;
	std::cout << "7) ������� ������ �����: ";
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