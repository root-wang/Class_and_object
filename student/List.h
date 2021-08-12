//
// Created by wang on 2021/7/18.
//

#ifndef STRUCT_LIST_H
#define STRUCT_LIST_H
#include <string>
using std::string;
class Student
{
private:
    string m_Key;
    string m_Name;
    int m_Age=0;
public:
    Student(string key,string name,int age);
    void getKey();
    void getName();
    void getAge();

};
#endif //STRUCT_LIST_H
