#include<iostream>
#include<string>

class Student
{
public:
	Student(std::string name, int id)
	{
		m_Name = name;
		m_Id = id;
	}
	void showStudent()
	{
		std::cout << "Name: " << m_Name << "Id: " << m_Id;
	}

private:
	std::string m_Name;
	int m_Id;
};

int main()
{
	Student s1("bob",23);
	s1.showStudent();
	system("pause");
	return 0;

}