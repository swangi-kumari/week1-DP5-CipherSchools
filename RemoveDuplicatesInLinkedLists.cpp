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
ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while(head) {
            while(head->next && head -> val == head -> next -> val) head = head -> next;
            curr -> next = head;
            curr = head;
            head = head -> next;
        }
        return ans->next;
    }
    int main(){}
