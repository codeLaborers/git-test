#include <iostream>
using namespace std;

const int maxSize = 1000;

class queue{
private:
    char data[maxSize];
    int length;
    int frontIdx;
public:
    queue(){length = 0;
           frontIdx = 0;}

    bool isEmpty(){
        return length == 0;
    }

    void push(char ch){
        if(length == maxSize){
            cout<<"��������"<<endl;
        }
        else{
            data[length++] = ch;
        }
    }

    void front_pop(){
        if(frontIdx < length){
            cout<<data[frontIdx];
            cout<<endl;
            frontIdx ++;
        }
        else{
            cout<<"ջ��û��Ԫ��"<<endl;
        }
    }

    void numberOfCh(){
        cout<<length - frontIdx<<endl;
    }

    void coutQueue(){
        for(int i = frontIdx; i < length; i++){
            cout<<data[i]<<' ';
        }
        cout<<endl;
    }

    void clearQueue(){
        length = 0;
        frontIdx = 0;
    }

};

int main(){
    queue array;
    if(array.isEmpty()){
        cout<<"����Ϊ��"<<endl;
    }
    else{
        cout<<"���зǿ�"<<endl;
    }
    array.push('a');
    array.push('b');
    array.push('c');
    array.front_pop();
    array.numberOfCh();
    array.push('d');
    array.push('e');
    array.push('f');
    array.coutQueue();
    array.clearQueue();
    return 0;
}


