#include <iostream>
#include <unordered_map>
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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		unordered_map<ListNode*, int> m;
		while(headA != NULL){
			m[headA]++;
			headA = headA -> next;
		}
		while(headB != NULL){
			if(m[headB] > 0){
				return headB;
			}
			headB = headB -> next;
		}
		return NULL;
	}
int main(){}
