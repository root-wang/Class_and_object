#include<iostream>
using namespace std;

class Person
{
public:
	string m_Name;
private:
	int m_Password;
protected:
	string m_Car;
public:
	void func()
	{
		m_Name = "bob";
		m_Car = "BMW";
		m_Password = 12344;
	}
};

int main()
{
	Person p1;
	p1.func();

	system("pause");
	return 0;
}