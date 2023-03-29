#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};


void addNode(Node** head, int data)
{
    Node* newNode = new Node;  
    newNode->data = data;  
    newNode->next = *head;  
    newNode->prev = nullptr; 
    if (*head != nullptr)  
        (*head)->prev = newNode;
    *head = newNode;
}


void removeNode(Node** head, int position)
{
    Node* temp = *head; 
    if (position == 0) 
    {
        *head = temp->next; 
        if (*head != nullptr) 
            (*head)->prev = nullptr;
        delete temp; 
        return;
    }
    for (int i = 0; temp != nullptr && i < position; i++) 
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != nullptr) 
        temp->next->prev = temp->prev;
    delete temp;
}


void addKNodes(Node** head, int position, int K, int data)
{
    Node* temp = *head;
    for (int i = 0; i < position && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    for (int i = 0; i < K; i++)
    {
        Node* newNode = new Node; 
        newNode->data = data; 
        newNode->next = temp->next; 
        newNode->prev = temp; 
        temp->next = newNode; 
        if (newNode->next != nullptr) 
            newNode->next->prev = newNode;
        temp = temp->next; 
    }
}


void removeKNodes(Node** head, int position, int K)
{
    Node* temp = *head; 
    for (int i = 0; i < position && temp != nullptr; i++)  
    {
        temp = temp->next;  
    }
    if (temp == nullptr) 
        return;
    for (int i = 0; i < K && temp->next != nullptr; i++) 
    {
        Node* next = temp->next;  
        temp->next = next->next; 
        if (temp->next != nullptr)  
            temp->next->prev = temp;
        delete next;  
    }
}


Node* searchNode(Node* head, int data)
{
    Node* temp = head;  
    while (temp != nullptr)  
    {
        if (temp->data == data) 
            return temp;
        temp = temp->next; 
    }
    return nullptr; 
}


void printList(Node* head)
{
    Node* temp = head; 
    while (temp != nullptr) 
    {
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    cout << endl; 
}

int main()
{
    Node* temp;
    Node* head = nullptr;
    int data;
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    cout << "Again: ";
    cin >> data;
    addNode(&head, data);
    cout << "And again...: ";
    cin >> data;
    addNode(&head, data);
    cout << "One more time: ";
    cin >> data;
    addNode(&head, data);
    cout << "It's the last time I swear: ";
    cin >> data;
    addNode(&head, data);
    printList(head);
    int position;
    cout << "Enter position of element to delete: ";
    cin >> position;
    removeNode(&head, position);
    printList(head);
    int K, data1, position1;
    cout << "Enter position to add element(s): ";
    cin >> position1;
    cout << "How many elements should we add? ";
    cin >> K;
    cout << "Enter the element to add: ";
    cin >> data1;
    addKNodes(&head, position1, K, data1);
    printList(head);
    int position2, K2;
    cout << "Enter position to delete element(s): ";
    cin >> position2;
    cout << "How many elements should we delete? ";
    cin >> K2;
    removeKNodes(&head, position2, K2);
    printList(head);
    cout << "Enter the element to search: ";
    cin >> data1;
    Node* searchNodeResult = searchNode(head, data1);
    if (searchNodeResult != nullptr)
    {
        cout << "Element is found" << endl;
    }
    else
        cout << "Element is not found" << endl;
}
