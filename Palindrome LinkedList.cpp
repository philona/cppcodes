#include <stack>

bool isPalindrome(Node *head)
{
    stack<Node *> visitedNodes;
    // push all nodes in the stack
    Node *cur = head;
    while (cur != NULL)
    {
        visitedNodes.push(cur);
        cur = cur->next;
    }

    cur = head;
    while (cur != NULL)
    {
        // compare node values
        Node *temp = visitedNodes.top();
        if (cur->data != temp->data)
        {
            return false;
        }
        visitedNodes.pop();
        cur = cur->next;
    }

    return true;
}
