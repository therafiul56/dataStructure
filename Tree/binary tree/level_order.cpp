#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node * left;
        Node * right;
    Node (int val) {
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
    
    
};


void level_order (Node * root ) {
    queue <Node* > q;
    q.push(root);
    while(!q.empty()) {
        // বের করে আনি
        Node * f = q.front();
        q.pop();
        // অই  নোড নিয়ে কাজ
        cout << f->val << " ";
        // বাচ্চা পুস করব;
        if(f->left) {
            q.push(f->left);
        }
        if(f->right) {
            q.push(f->right);
        }
    }       
}

int main() {
	Node  * root = new Node(10);
	Node * a = new Node(20);
	Node * b = new Node(30);
	Node * c = new Node(50);
	Node * d = new Node(60);
	Node * e = new Node(40);
	
	
	root -> left = a;
	root -> right = b;
	a -> left = c;
	a -> right = d;
	b -> left = e;
	
	level_order(root);
	return 0;
	

}
