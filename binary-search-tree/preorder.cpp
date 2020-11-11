#include<iostream>
#include<queue>


using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;
        Node(int d){
            data = d;
            left = right = NULL;
        }
};

class Solution{
    public:
        Node* insert(Node* root, int data){
            if(root == NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data <= root -> data){
                    cur = insert(root -> left, data);
                    root -> left = cur;
                }
                else {
                    cur = insert(root -> right, data);
                    root -> right = cur;
                }
            return root;
            }
        }

    void levelOrder(Node* node){
        queue<Node*> q;
        Node* c;

        if(node != NULL){
            q.push(node);
        }

        while(!q.empty()){
            c = q.front();
            q.pop();

            cout << c -> data << " ";

            if(c -> left != NULL){
                q.push(c -> left);
            }
            if(c -> right != NULL){
                q.push(c -> right);
            }
        }

        cout << endl;
	}
};

int main(){
    Solution myTree;
    Node* root=NULL;
    int T, data;
    cin >> T;

    while(T-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);

    return 0;
}
