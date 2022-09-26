#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
    void show();
};
void Point::show(){
    cout<<x+y<<endl;
}
Point::Point() : Point(0,1){
    x = 0;
    y = 0;
}
Point::Point(int a, int b){
    x = a;
    y = b;
}

int main() {

    Point a;

    Point b(10,20);

    a.show();
    b.show();

}