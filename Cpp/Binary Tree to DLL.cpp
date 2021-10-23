class Solution
{
    public:
    //Function to convert a binary tree to doubly linked list.
    void bToDLLUtil(Node *root, Node **head_ref)
    {
        //base case for recursion.
        if(root == NULL)
            return;
    
        //calling function recursively to convert right subtrees.
        bToDLLUtil(root->right, head_ref);
    
        //inserting root into doubly linked list.
        root->right = *head_ref;
    
        //changing left pointer of previous head.
        if (*head_ref != NULL)
            (*head_ref)->left = root;
    
        //changing head of doubly linked list.
        *head_ref = root;
    
        //calling function recursively to convert left subtrees.
        bToDLLUtil(root->left, head_ref);
    }

    public:
    //Function to convert binary tree to doubly linked list and return it.
    Node* bToDLL(Node *root)
    {
        Node *head = NULL;
        //calling the function for conversion.
        bToDLLUtil(root,&head);
        return head;
        
    }
};