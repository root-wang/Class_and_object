#ifndef TSTRING_H_
#define TSTRING_H_

class TString
{
private:
    unsigned _length;
    char* _str;
public:
    TString();
    TString(const char*s);
    TString(char aChar);
    TString(const TString& arg);
    ~TString();
    TString& operator=(const TString& arg);
    TString& operator=(const char* s);
    TString& operator=(char s);

    int Size() const;
    TString operator()(unsigned posn, unsigned len) const;

    char operator()(unsigned n) const;

    const char& operator[](unsigned n) const;

    const char* c_str() const {return _str;}

    TString& operator+=(const TString& other);

    TString& ToLower();
    TString& ToLower();
};
#endif