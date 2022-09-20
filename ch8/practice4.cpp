#include<iostream>
#include<string>
using namespace std;

class Point{
    int x,y;
    public:
        Point(){}
        Point(int x, int y){ this->x =x; this->y=y;}
        int getX(){return x;}
        int getY(){return y;}
    protected:
        void move(int x, int y){ this->x =x; this->y =y;}
};

class ColorPoint : Point {
    string s;
    public: 
        ColorPoint(int x, int y);
        void setPoint(int x, int y);
        void setColor(string s);
        void show();
};
ColorPoint::ColorPoint(int x=0, int y=0){
    s = ("BLACK");
    setPoint(x,y);
}
void ColorPoint::setColor(string s){
    this->s = s;
}
void ColorPoint::setPoint(int x, int y){
    move(x,y);
}
void ColorPoint::show(){
    cout<<s+"색으로 ("<<getX()<<","<<getY()<<") 에 위치한 점 입니다."<<endl;
}


int main(){
    ColorPoint zeroPoint;
    zeroPoint.show();

    ColorPoint cp(5,5);
    cp.setPoint(10,20);
    cp.setColor("BLUE");
    cp.show();
}