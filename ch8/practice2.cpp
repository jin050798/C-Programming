#include<iostream>
#include<string>
using namespace std;

class Circle{
    int radius;
    public:
        Circle(int radius = 0){
            this->radius = radius;
        }
        int getRadius(){
            return radius;
        }
        void setRadius(int radius){
            this->radius = radius;
        }
        double getArea(){
            return 3.14 * radius * radius;
        }
};
class NamedCircle : public Circle{
    string s;
    public:
        NamedCircle(int radius, string name);
        void setS(string s){
            this->s = s;
        }
        string getS(){
            return s;
        }
};
NamedCircle :: NamedCircle(int radius =0, string name=""){
}

int main(){
    int radious =0;
    string name = "";
    NamedCircle pizza[5];
    cout<<"5 개의 정수 반지름과 원의 이름을 입력하세요"<<endl;
    for(int i = 0; i<5; i++){
        cout<<i+1<<">> ";
        cin >> radious;
        cin >> name;
        pizza[i].setRadius(radious);
        pizza[i].setS(name);

    }
    int max = 0;
    for(int j = 0; j<4; j++){
        if(pizza[j].getArea() > pizza[j+1].getArea()){
            max = pizza[j].getRadius();
            name = pizza[j].getS();
        }
    }
    cout<<"가장 면적이 큰 피자는 "+name+"입니다"<<endl;


}