//
// Created by wang on 2021/7/18.
//

#include "List.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
Student::Student(string key, string name, int age) {
    m_Key=key;
    m_Name=name;
    m_Age=age;
}

void Student::getKey() {
    cout << m_Key <<endl;
}

void Student::getName() {
    cout << m_Name << endl;
}

void Student::getAge() {
    cout << m_Age << endl;
}