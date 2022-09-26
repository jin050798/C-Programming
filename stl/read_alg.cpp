#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int Size = 3;
    string data[] =  {"딸기", "바나나", "사과"};
    vector<string>name_list(&data[0], &data[Size]);
    vector<string>::iterator it;

    it = find(name_list.begin(), name_list.end(),"딸기");

    if(it != name_list.end()){
        cout<<"있어용"<<endl;
    }else{
        cout<<"없어용"<<endl;
    }
    return 0;
}