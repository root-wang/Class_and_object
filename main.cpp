#include <iostream>
using namespace std;

class Person{
private:
    int m_age;
public:
    Person(){
        cout << "无参构造函数调用" << endl;
    }
    Person(int a){
        m_age=a;
        //cout << a << endl;
        cout << "有参构造函数调用" << endl;
    }
    Person(Person const &p){
        m_age=p.m_age;
        cout << "拷贝构造函数调用" << endl;
    }
    ~Person(){
        cout << "析构函数调用" << endl;
    }
};

void test01(){
    Person p1();//函数声明 不是调用无参构造函数

    Person p2(100);
    //Person p2=Person(10);
    //Person p2=10;

    Person(10);//匿名对象执行完后该对象被立即释放

    Person p3(p2);//Person(p3) == Person p3;
    //Person p3_1=Person(p2);
    //Person p3_2=p2;
}

int main(){
    test01();
    int a=1;

    return 0;
}