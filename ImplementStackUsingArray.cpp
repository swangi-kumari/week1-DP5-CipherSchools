#include <iostream>
#include <stack>
#include <string>
using namespace std;
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

void MyStack :: push(int x)
{

        arr[++top]=x;
}

int MyStack :: pop()
{
              if(top == -1) return -1;
              else{
                  return arr[top--];
              }
}
int main(){}
