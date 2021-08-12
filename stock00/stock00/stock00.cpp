#include<iostream>
#include"stock00.h"


Stock::Stock()
{
	std::cout << "ȱʡ����\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	set_tot();
}
Stock::Stock(const std::string &co, long n, double pri)
{
	company = co;
	if (n < 0)
	{
		std::cout << "�����Ʊ��������ڵ���0\n";
		shares = 0;
	}
	else 
		shares = n;
	share_val = pri;
	set_tot();
}

void Stock::buy(long num, double pri)
{
	if (num < 0)
	{
		std::cout << "�����Ʊ��������ڵ���0\n";
	}
	else
	{
		shares += num;
		share_val = pri;
		set_tot();
	}
}

void Stock::sell(long num, double pri)
{
	if (num < 0)
	{
		std::cout << "�����Ʊ��������ڵ���0\n";
		shares = 0;
	}
	else if (num>shares)
	{
		std::cout << "u cant sell more than you have.\n";
	}
	else
	{
		shares -= num;
		share_val = pri;
		set_tot();
	}
}

void Stock::update(double pri)
{
	share_val = pri;
	set_tot();
}

void Stock::show()
{
	std::cout << "��˾�����֣�" //<< company
		<< "����Ĺ�Ʊ����" << shares
		<< "�ܵĹ�Ʊ�" << total_val << std::endl;
}