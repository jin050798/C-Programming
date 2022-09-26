#include<iostream>
using namespace std;

template <typename T , int VAL> T AddValue(T const& CurValue){
    return CurValue + VAL;
}

const int EVENT_HP = 50;
const int EVENT_EXP = 30;
const int EVENT_MONEY= 1000;

int main(){
    int Char_HP = 250;
    cout<< Char_HP <<"에서 이벤트에 의해 << " << AddValue<int,EVENT_HP>(Char_HP)<<"로 변경"<<endl;
    float Char_EXP = 378.89f;
    cout<< Char_EXP <<"에서 이벤트에 의해 << " << AddValue<float,EVENT_EXP>(Char_EXP)<<"로 변경"<<endl;
    __int64_t Char_MONEY = 34567890;
    cout<< Char_MONEY <<"에서 이벤트에 의해 << " << AddValue<__int64_t,EVENT_MONEY>(Char_MONEY)<<"로 변경"<<endl;
    
}