#include <iostream>
using namespace std;

class Person{
private:
    int m_age;
public:
    Person(){
        cout << "�޲ι��캯������" << endl;
    }
    Person(int a){
        m_age=a;
        //cout << a << endl;
        cout << "�вι��캯������" << endl;
    }
    Person(Person const &p){
        m_age=p.m_age;
        cout << "�������캯������" << endl;
    }
    ~Person(){
        cout << "������������" << endl;
    }
};

void test01(){
    Person p1();//�������� ���ǵ����޲ι��캯��

    Person p2(100);
    //Person p2=Person(10);
    //Person p2=10;

    Person(10);//��������ִ�����ö��������ͷ�

    Person p3(p2);//Person(p3) == Person p3;
    //Person p3_1=Person(p2);
    //Person p3_2=p2;
}

int main(){
    test01();
    int a=1;

    return 0;
}