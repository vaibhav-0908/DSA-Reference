//declaration of doubly LL//
class Node{
public:
    int data;
    Node* next;
    Node* back;
    Node(int val1,Node* next1,Node* back1){
        data=val1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

//array to DLL//
vector<int> arr={1,2,3,4};
Node* head= new Node(arr[0]);
Node* prev=head;
for(int i=0;i<arr.size()-1;i++){
    Node* temp=new Node(arr[i],nullptr,prev);
    prev->next=temp;
    prev=temp;
}
return head;