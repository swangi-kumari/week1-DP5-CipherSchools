#include <iostream>
using namespace std;
class ListNode{
public:
    public:
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};
    ListNode *reverseList(ListNode *curr) {
        ListNode *prev = nullptr, *next = curr;
        while(curr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

int main(){}

