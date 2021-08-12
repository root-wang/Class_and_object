#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "1" << endl;
    }
    ~Person(){
        cout << "2" << endl;
    }
};

void test01(){
    Person p1;
}

int main(){
    test01();
    //Person p2;
    //system("pause");
    return 0;
}