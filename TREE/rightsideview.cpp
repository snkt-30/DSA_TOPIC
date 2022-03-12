#include "bits/stdc++.h"
using namespace std;

vector<int> tr;

// Structure of Tree

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Level order traversal
void lota(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }

    queue<int> lot;
    lot.push(temp->data);

    while (!lot.empty())
    {
        int ele = lot.front();
        lot.pop();

        cout << ele << ' ';
        if (temp->left != NULL)
        {
            lot.push(temp->left->data);
        }
        if (temp->right != NULL)
        {
            lot.push(temp->right->data);
        }
    }
}

// Inorder traversal
void inord(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }

    inord(temp->left);
    tr.push_back(temp->data);
    inord(temp->right);
}

// Preorder traversal
void prord(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }

    tr.push_back(temp->data);
    prord(temp->left);
    prord(temp->right);
}

// Postorder traversal
void pstord(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }

    pstord(temp->left);
    pstord(temp->right);
    tr.push_back(temp->data);
}

// Right side view
void rightsideview(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;

    queue<node *> q;

    q.push(temp);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *curr = q.front();
            q.pop();
            if (i == n - 1)
            {
                cout << curr->data << ' ';
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
}

// driver function
int main()
{

    node *head = new node(10);
    head->left = new node(9);
    head->right = new node(11);
    head->left->left = new node(7);
    head->left->right = new node(12);
    head->right->left = new node(23);
    head->right->right = new node(34);

    rightsideview(head);
}