#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if(age<100&&age>0)
			m_Age=age;
		else cout << "error" <<endl;
	}
	int getAge()
	{
		return m_Age;
	}
	void setlover(string lover)
	{
		m_Lover=lover;
	}
private:
	string m_Name;
	int m_Age;
	string m_Lover;
};

int main()
{
	Person p1;
	p1.setName("bobb");
	cout << p1.getName() << endl;
	p1.setAge(10000);
	p1.setlover("ji");
	cout << p1.getAge()<<endl;
	return 0;
}