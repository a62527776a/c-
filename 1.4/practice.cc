#include<iostream>
int main()
{
	int num1 = 50,sum1 = 0,num2 = 10,sum2 = 0,num3,sum3;
	while(num1 <= 100){
		sum1 += num1;
		num1++;
	}
	while(num2 >= 0){
		sum2 += num2;
		num2--;
	}
	std::cin >> num3 >> sum3;
	std::cout << sum1 << std::endl;
	std::cout << sum2 << std::endl;
	while(num3 <= sum3){
		std::cout << num3 << std::endl;
		num3++;
	}
	while(sum3 <= num3){
		std::cout << sum3 << std::endl;
		sum3++;
	}
	return 0;
}
