#include<iostream>
#include<cstring>
#include"TString.h"

TString::TString()
{
    _str=0;
    _length=0;
}

TString::TString(const char* arg)
{
    if(arg && *arg){
        _length=strlen(arg);
        _str=new char[_length+1];
        strcpy(_str,arg);
    }
    else {
            _str=0;
            _length=0;
    }
}

TString::TString(char aChar)
{
    if(aChar){
        _str=new char[2];
        _str[0]=aChar;
        _str[1]='\0';
        _length=1;
    }
    else {
        _str=0;
        _length=0;
    }
}

TString::~TString(){if(_str!=0)delete [] _str;}

TString::TString(const TString& arg)
{
    if(arg._str!=0){
        this->_str =new char[strlen(arg._str)+1];
        strcpy(this->str,arg._str);
        _length =arg._length;
    }
    else {
        _str =0;
        _length =0;
    }
}

TString& TString::operator=(const TString& arg)
{
    if(this == &arg)
        return *this;
    if(this->_length >= arg._length){
        if(arg._str!=0)
            strcpy(this->_str, arg._str);
        else
            this->_str =0;
        this->_length =arg._length;
        return *this;
    }
    delete [] _str;
    this->_length = arg.Size();
    if(_length){
        _str =new char[_length+1];
        strcpy(_str,arg._str);
    }
    else _str =0;
    return *this;
}

TString& TString::operator=(const char* s)
{
    
}