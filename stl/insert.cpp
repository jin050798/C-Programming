#include<iostream>
#include <iterator>
#include<list>
#include<algorithm>
using namespace std;

template <typename C> void dump(const char* desc, C c){
    cout.width(12);
    cout<<left<<desc<<"==>";
    copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
    cout<<endl;
}

int main(){
    char src[]="1234567890";
    list<char> li;

    copy(&src[3], &src[7],back_inserter(li));
    dump("list",li);
}