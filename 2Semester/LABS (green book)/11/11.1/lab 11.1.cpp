#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void addNode(Node** head, int data)
{
    Node* newNode = new Node; 
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


void removeNode(Node** head, int position)
{
    Node* temp = *head; 
    Node* prev = nullptr; 
    if (position == 0)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != nullptr and i < position; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    prev->next = temp->next;
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
        temp->next = newNode;
        temp = temp->next;
    }
}

void removeKNodes(Node** head, int position, int K)
{
    Node* temp = *head;
    for (int i = 0; i < position and temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    for (int i = 0; i < K and temp->next != nullptr; i++)
    {
        Node* next = temp->next;
        temp->next = next->next;
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
    cout << std::endl;
}

int main()
{
    Node* temp;
    Node* head = nullptr;
    int data;
    cout << "Enter the data: " << ' ';
    cin >> data;
    addNode(&head, data);
    cout << "Again:" << ' ';
    cin >> data;
    addNode(&head, data);
    cout << "And again...:" << ' ';
    cin >> data;
    addNode(&head, data);
    cout << "Soon it's over I promise...:" << ' ';
    cin >> data;
    addNode(&head, data);
    cout << "The last time...:" << ' ';
    cin >> data;
    addNode(&head, data);
    printList(head);
    int position;
    cout << "Enter position of element to delete:" << ' ';
    cin >> position;
    removeNode(&head, position);
    printList(head);
    int K, data1, position1;
    cout << "Enter position to add element(s):" << ' ';
    cin >> position1;
    cout << "How many elements should we add?" << endl;
    cin >> K;
    cout << "Enter the element to add:" << ' ';
    cin >> data1;
    addKNodes(&head, position1, K, data1);
    printList(head);
    int position2, K2;
    cout << "Enter the position to delete element(s):" << ' ';
    cin >> position2;
    cout << "How many elements should we delete?" << endl;
    cin >> K2;
    removeKNodes(&head, position2, K2);
    printList(head); 
    cout << "Enter the element to search:" << ' ';
    cin >> data1;
    if (searchNode(head, data1) != nullptr)
    {
        cout << "Element is found" << std::endl;
    }
    else
        cout << "Element is not found" << std::endl;
}
