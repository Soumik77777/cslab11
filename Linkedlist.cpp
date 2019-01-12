#include <iostream>
using namespace std;

class Node{
    public;
    // Data
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
        next = NULL;
    }
};

class Linkedlist{
    // Head + Circles inside linked with each other
    public;
    // Head -> Node type ptr
    Node * head;
    
    // Construct
    Linkedlist(){
        head = NULL;
    }
    
    // Circles inside linked with each other
    // Rules how circles will be linked
    
    // Insert
    void insert(int value){
        // If 1st Node is added
        Node * temp = new Node; //creates object of node and stores in heap because new keyword used
        // Insert value in the Node
        temp->data = value;
        // 1st Node only
        if (head == NULL){
            head = temp;
            //tail = temp;
        }
        // Any other Node
        else{
            tail->next = temp;
            //tail = temp;
        }
        tail = temp;
        
    }
        void insertAt(int pos, int value){
        //Reach the place before the position
        Node * current = head;
        int i=1;
            while(i< pos-1){
                i++;
                current = current -> next;
            
            }
        
        // create a node
        Node * temp =new Node;
        temp -> data = value;
        
        temp-> next = current->next;
        current->next = temp;
        
        }    
        
        
    // Deletion of last element
    void delete(){
        // store tail in temp
        Node * temp = tail;
        // before tail has to point to NULL
        Node * current = head;
        while(current -> next != tail){
            current = current->next;
        }
        current -> next = NULL;
        // update tail
        tail=current;
        // delete temp
        delete temp;
        
    }
    
    // Display
    void display(){
        Node * current = head;
        while(current != NULL){
            cout<< current -> data << "->";
            current = current -> next;
        }
    }

};

int main(){
    Linkedlist l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.display();
    l1.delete();
    l1.display();
    return 0;
    
}









