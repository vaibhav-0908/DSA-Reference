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

//deleting kth element from a DLL//

Node* RemoveKthElement(Node* head,int k){
    if (head==nullptr){
        return NULL;
    }
    int cnt=00;
    //selecting kth node//
    Node* knode=head;
    while(knode!=NULL){
        cnt++;
        if(cnt==k){
            break
        }
        knode=knode->next;
    }
    Node* prev=knode->back;
    Node* front = knode->next;
    
    if(prev==NULL && front==NULL) return NULL;
    else if(prev==NULL) return removehead(head);//remove head
    else if(front==NULL) return removetail(head);//remove tail
    prev->next= front;
    front->back =prev;

    knode->next= nullptr;
    knode->back=nullptr;
    delete knode;
    return head;
}

//inseting before kth element//
Node* InsertBeforeKthElement(int val,Node* head,int k){
    if(k==1){
        return insertbeforehead(head, val);
    }
    Node* temp= head;
    //selecting kth element//
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if (cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode= new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
