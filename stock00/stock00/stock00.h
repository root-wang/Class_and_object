#ifndef STOCK00_H_
#define STOCK00_H_
#include<string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){ total_val = shares*shares;}
public:
	Stock();
	Stock(const std::string &co, long n, double pri);
	void buy(long num, double pri);
	void sell(long num, double pri);
	void update(double pri);
	void show();
};
#endif