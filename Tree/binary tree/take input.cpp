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

 Node * input_Tree(){
     int val ; cin >> val;
     Node * root = new Node(val);
     queue<Node *> q ;
     if(root) q.push(root);
     while(!q.empty()) {
         // নোড বের করে আনা
     Node* f = q.front();
     q.pop();
     
     // নোড নিয়ে কাজ 
     int l,r;
     cin >> l >> r;
     Node * myleft, * myRight;
     if(l == -1) myleft = NULL;
     else myleft = new Node(l);
     
     if(r == -1) myRight = NULL;
     else myRight = new Node(r);
     
     f -> left = myleft;
     f -> right = myRight;
     
     
     
     // বাচ্ছা পুশকরা
     if (f -> left) q.push(f->left);
     if (f -> right) q.push(f->right);
     
     }
     return root;
     
 }
int main() {
	Node * root = input_Tree();
	level_order(root);
	return 0;

}
