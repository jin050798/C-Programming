#include<iostream>
#include<string>
using namespace std;

class Point{
    int x,y;
    public:
        Point(){};
        Point(int x, int y){ this->x =x; this->y=y;}
        int getX(){return x;}
        int getY(){return y;}
    protected:
        void move(int x, int y){ this->x =x; this->y =y;}
};

class ColorPoint : public Point{
    string s;
    public:
        ColorPoint(int x, int y, string s){
            setPoint(x,y);
            setColor(s);  
        }
        void setColor(string s){
            this->s = s;
        };
        string getColor(){
            return s;
        }
        void setPoint(int x, int y){
            move(x,y);
        }

        void show(){
            cout<<getColor()<<"색으로 ("<<getX()<<","<<getY()<<")에 위치한 점입니다."<<endl;
        }
};
int main(){
    ColorPoint cp(5,5,"RED");
    cp.setPoint(10,20);
    cp.setColor("BLUE");
    cp.show();
}
