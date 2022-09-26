#include<iostream>
#include<string>
using namespace std;

class BaseArray{
    private:
        int capacity; // 배열의 크기
        int *mem; //정수 배열을 만들기 위한 메모리의 포인터
    protected:
        BaseArray(int capacity=100){
            this->capacity = capacity;
            mem = new int [capacity];
        }
        ~BaseArray(){ delete [] mem;}
        void put(int index, int val){ mem[index] = val;}
        int get(int index){ return mem[index]; }
        int getCapacity(){ return capacity;}

};
class MyQueue : public BaseArray{
    int index = 0;
    public:
        MyQueue(int capacity); 
        void enqueue(int n);
        int length();
        int capacity();
        void setCapacity(int c);
        int dequeue();
};

MyQueue::MyQueue(int capacity) :  BaseArray(capacity){
}
void MyQueue::enqueue(int n){  
    
    put(index,n);
    index++;

}
int MyQueue::capacity(){
    return getCapacity();
}
int MyQueue::length(){
    return index;
}
int MyQueue::dequeue(){
    return get(index);
    index--;
    

}


int main(){
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i = 0; i<5; i++){
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "큐의 용량:"<< mQ.capacity() <<", 큐의 크기:"<< mQ.length() <<endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> " ;
    cout << mQ.dequeue() << ' ';
    // while(mQ.length() != 0){
    //     cout << mQ.dequeue() << ' ';
    // }
    // cout << endl << "큐의 현재 크기 : "<<mQ.length() << endl;

}