#include<iostream>

using namespace std;

class Stack{
    private: int arr[10];
    private: int top;

    public:
        Stack(){
            top = -1;
            for (int i = 0; i < 10; i++){
                arr[i] = 0;
            }
        }

    bool isEmpty(){
        if (top == -1)
            return true;
        else 
            return false;
        
    }
    bool isFull(){
        if (top == 9)
            return true;
        else 
            return false;
        
    }
    void push(int val){
        if (isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else {
            top++;
            arr[top] = val;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<< "Stack Underflow"<<endl;
            return 0;
        }
        else{
            int popvalue = arr[top] ;
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }

    int count(){
        return top +1;
    }

    int peek(int pos){
        if (isEmpty()){
            cout<< "Stack Underflow"<<endl;
            return 0;
        }
        else 
            return arr[pos];
    }

    void change(int pos , int val){
        arr[pos] = val;
        cout<< "value changed Successfuly at loc "<<pos<<endl;

    }
    void display(){
        cout<< "All values in stack are " <<endl;
        for (int i=0;i<10;i++){
            cout<<arr[i]<<endl;
        }
    }

};
int main()
{
   Stack obj1;
}