#include <iostream>
using namespace std;

//点和圆的关系判断
//点到圆心的距离 == 半径 在圆上
//点到圆心的距离 >  半径 在圆外
//点到圆心的距离 <  半径 在圆内
//点到圆心的距离？？？

//点类
class Point{
private:
    double m_X;
    double m_Y;
public:
    Point() {
        m_X=0;
        m_Y=0;
    }

    Point(double x,double y){
        m_X=x;
        m_Y=y;
    }

    double getX(){
        return m_X;
    }
    double getY(){
        return m_Y;
    }
};

class Circle{
private:
    double m_R;
    Point m_Center;//圆心
public:
    Circle(double r,Point center){
        m_R=r;
        m_Center=center;
    };
    double getR(){
        return m_R;
    }
    Point getCenter(){
        return  m_Center;
    }
    void isInCircle(Point &p){

    }
};

int main() {

    return 0;
}
