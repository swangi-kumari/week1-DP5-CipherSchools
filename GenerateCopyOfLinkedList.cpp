#include <iostream>
#include <unordered_map>
using namespace std;
class Node{
public:
    public:
    int val;
    Node *next;
    Node *random;
    Node() : val(0),next(nullptr){}
    Node(int x): val(x),next(nullptr){}
    Node(int x,Node *next):val(x),next(next){}
};
Node* copyRandomList(Node* head) {
	Node* tmp1 = head;
	Node* head2 = NULL;
	Node* tmp2 = head2;
	unordered_map<Node*,Node*> m;
	while(tmp1){
		if(head2 == NULL){
			head2 = new Node(head->val);
			tmp2 = head2;
			tmp1 = tmp1->next;
			continue;
		}

		tmp2->next = new Node(tmp1->val);
		tmp2 = tmp2->next;
		tmp1 = tmp1->next;
	}
	tmp1 = head;
	tmp2 = head2;
	while(tmp1){
		m[tmp1] = tmp2;
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}

	tmp1 = head;
	tmp2 = head2;
	while(tmp1){
		Node* dummy = tmp1->random;
		tmp2->random = m[dummy];
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return head2;
}
int main(){}
