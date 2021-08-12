#include <iostream>
#include <string>
#include "List.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string key,name;
    int age;
    cin >> key >> name >> age;
    Student s1(key,name,age);
    cout<< "age is : ";
    s1.getAge();
    cout<< "name is : ";
    s1.getName();
    cout<< "key is : ";
    s1.getKey();
    return 0;
}
