#include<iostream>
int main()
{
	int num = 0;
	int a;
	for(a = 50;a <= 100;++a){
		num += a;
	}
	std::cout << num << std::endl;
	int num2;
	for(int num2 = 10;num2 >= 0;--num2){
		std::cout << num2 << std::endl;
	}
	int num3,sum3;
	std::cin >> num3 >> sum3;
	for(int a = num3 ;a <= sum3;++a){
		std::cout << a << std::endl;
	}
	for(int b = sum3;b < num3;++b){
		std::cout << b << std::endl;
	}
	return 0;
}
