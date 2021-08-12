#include<iostream>
#include"stock00.h"

int main()
{
	{
		Stock s1("haha", 20, 1.23);
		s1.show();
		s1.buy(3000, 1.34);
		s1.show();
	}
	system("pause");
	return 0; 
}