#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    struct node *prev;
    struct node *next;
    int data;
}snode;

void insrt(snode** hd, snode** tl, int n){
    snode* p = NULL;
    p = new snode;
    if(p != NULL){
        p -> data = n;
        p -> next = NULL;
        if(*hd == NULL){
            *hd = *tl = p;
        }
        else{
            (*tl) -> next = p;
            *tl = p;
        }
        cout << "Element Inserted!\n";
    }
    else
        cout << "Memory Not Allocated!\n";
}

void del(snode** hd, snode** tl, int k){
    int loc = 1;
    snode* temp = *hd, *prev;
    if (temp != NULL && temp -> data == k) { 
        *hd = temp->next;
        free(temp);
        return; 
    } 
    while (temp != NULL && temp -> data != k) { 
        prev = temp; 
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next; 
    free(temp); 
    cout << "Node Deleted!";
}

void disp(snode* hd, snode* tl){
    cout << "Linked List Status: ";
    while(hd != tl){
        cout << hd -> data << " ";
        hd = hd -> next;
    }
    cout << hd -> data << endl;
}

void sll(){
    snode *head = NULL, *tail = NULL;
    cout << "\n\tSINGLY LINKED LIST\n";
    int ch, n;
    do{
        cout << "\n\tMENU\n1. Insert\n2. Delete a Node with Key\n3. Display\n4. Back to Main menu\nEnter your choice: ";
        cin >> ch;
        if(ch == 1){
            cout << "Enter Value to insert: ";
            cin >> n;
            insrt(&head, &tail, n);
        }
        else if(ch == 2){
            if(head == NULL){
                cout << "Linked List Underflow\n";
                continue;
            }
            cout << "Enter Key: ";
            cin >> n;
            del(&head, &tail, n);
        }
        else if(ch == 3){
            if(head == NULL){
                cout << "Linked List Underflow\n";
                continue;
            }
            disp(head, tail);
        }
        else if(ch == 4)
            break;
        else
            cout << "Invalid Choice!";
    }while(ch != 4);
}

void insrt(snode** lst, int n){
    snode* p = NULL;
    p = new snode;
    if(p != NULL){
        p -> data = n;
        if(*lst == NULL){
            *lst = p;
            (*lst) -> next = *lst;
        }
        else{
            p -> next = (*lst) -> next;
            (*lst) -> next = p;
            *lst = p;
        }
        cout << "Node Inserted!\n";
    }
    else
        cout << "Memory not Allocated!\n";
}

void del(snode** lst, int k){
    snode* p = *lst;
    int loc = 1;
    while((p -> next != *lst) && (p -> data != k)){
        p = p -> next;
        loc ++;
    }
    if(p -> next == *lst && p -> data != k){
        cout << "Key not Found!\n";
        return;
    }
    else{
        cout << k << " Key found at Location: " << loc << endl;
        if(p == *lst){
            snode* i = *lst;
            while(i -> next != *lst)
                i = i -> next;
            i -> next = (*lst) -> next;
            *lst = i;
            free(i);
        }
        else{
            snode* i = *lst;
            while(i -> next != p)
                i = i -> next;
            i -> next = p -> next;
            free(i);
        }
    }
    cout << "Node Deleted!\n";
}

void disp(snode* lst){
    cout << "Linked List Status: ";
    snode* p = lst;
    do{
        p = p -> next;
        cout << p -> data << " ";
    }while(p != lst);
    cout << endl;
}

void cll(){
    snode* last = NULL;
    cout << "\n\tCIRCULAR LINKED LIST\n";
    int ch, n;
    do{
        cout << "\n\tMENU\n1. Insert\n2. Delete a Node with a Key\n3. Display\n4. Back to Main menu\nEnter your choice: ";
        cin >> ch;
        if(ch == 1){
            cout << "Enter value to insert: ";
            cin >> n;
            insrt(&last, n);
        }
        else if(ch == 2){
            if(last == NULL){
                cout << "Linked List Underflow!\n";
                continue;
            }
            cout << "Enter Key: ";
            cin >> n;
            del(&last, n);
        }
        else if(ch == 3){
            if(last == NULL){
                cout << "Linked List Underflow!\n";
                continue;
            }
            disp(last);
        }
        else if(ch == 4)
            break;
        else
            cout << "Invalid choice!\n";
    }while(ch != 4);
}

void ins(snode** hd, snode** tl, int n){
    snode* p = NULL;
    p = new snode;
    if(p != NULL){
        p -> data = n;
        p -> next = NULL;
        if(*hd == NULL){
            *hd = *tl = p;
            (*tl) -> prev = NULL;
        }
        else{
            (*tl) -> next = p;
            p -> prev = *tl;
            *tl = p;
        }
        cout << "Node Inserted!\n";
    }
    else
        cout << "Memory Not Allocated!\n";
}

void delt(snode** hd, snode** tl, int k){
    snode* p = *hd;
    int loc = 1;
    while((p -> next != NULL) && (p -> data != k)){
        p = p -> next;
        loc ++;
    }
    if(p -> next == NULL && p -> data != k){
        cout << "Key not Found!\n";
        return;
    }
    else{
        if(p == *hd){
            (*hd) = (*hd) -> next;
            (*hd) -> prev = NULL;
        }
        else if(p == *tl){
            *tl = (*tl) -> prev;
            (*tl) -> next = NULL;
        }
        else{
            (p -> prev) -> next = p -> next;
            (p -> next) -> prev = p -> prev;
        }
        free(p);
        cout << "Node Deleted!\n";
    }
}

void disp_l2r(snode* hd, snode* tl){
    cout << "Linked List Status: ";
    do{
        cout << hd -> data << " ";
        hd = hd -> next;
    }while(hd != tl);
    cout << hd -> data << endl;
}

void disp_r2l(snode* hd, snode* tl){
    cout << "Linked List Status: ";
    do{
        cout << tl -> data << " ";
        tl = tl -> prev;
    }while(hd != tl);
    cout << tl -> data << endl;
}

void dll(){
    snode* head = NULL, *tail = NULL;
    cout << "\n\tDOUBLY LINKED LIST\n";
    int ch, n;
    do{
        cout << "\n\tMENU\n1. Insert\n2. Delete Node with Key\n3. Display left to right\n4. Display right to left\n5. Back to Main menu\nEnter your choice: ";
        cin >> ch;
        switch(ch){
            case 1:
                cout << "Enter value to Insert: ";
                cin >> n;
                ins(&head, &tail, n);
                break;
            case 2:
                if(head == NULL){
                    cout << "Linked List Underflow\n";
                    continue;
                }
                cout << "Enter Key: ";
                cin >> n;
                delt(&head, &tail, n);
                break;
            case 3:
                if(head == NULL){
                    cout << "Linked List Underflow\n";
                    continue;
                }
                disp_l2r(head, tail);
                break;
            case 4:
                if(head == NULL){
                    cout << "Linked List Underflow\n";
                    continue;
                }
                disp_r2l(head, tail);
                break;
            case 5:
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    }while(ch != 5);
}

int main(){
    int ch;
    do{
        cout << "\n\tMAIN MENU\n1. Singly Linked List\n2. Circular Linked List\n3. Doubly Linked List\n4. Exit\nEnter your choice: ";
        cin >> ch;
        if(ch == 1)
            sll();
        else if(ch == 2)
            cll();
        else if(ch == 3)
            dll();
        else if(ch == 4)
            break;
        else
            cout << "Invalid Choice!\n";
    }while(ch != 4);
    return 0;
}
