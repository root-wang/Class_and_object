#include <iostream>
using namespace std;

class Cube{
private:
    double m_L;//长
    double m_W;//宽
    double m_H;//高
public:
    Cube(double l,double w,double h){
        m_L=l;
        m_W=w;
        m_H=h;
    }
    double getH(){
        return m_H;
    }
    double getL(){
        return m_L;
    }
    double getW(){
        return m_W;
    }
    double calculateS(){
        return 2*(m_H*m_W+m_L*m_W+m_L*m_H);
    }
    double calculateV(){
        return m_H*m_W*m_L;
    }
    bool isSameByClass(Cube &c){
        if(m_L==c.getL()&&m_W==c.getW()&&m_H==c.getH())return 1;
        else return 0;
    }
};

bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getH()==c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getH())return 1;
    else return 0;
}
int main() {
    Cube c1(10.0,10.0,10.0);
    Cube c2(10,10,10);
    bool ret=c1.isSameByClass(c2);//isSame(c1,c2);
    if(ret)cout << "is same";
    else cout << "is not same";
    return 0;
}
