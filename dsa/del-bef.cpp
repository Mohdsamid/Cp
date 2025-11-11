#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *first, *temp, *ttemp, *p, *p1;
void init()
{
    p = first = temp = ttemp = p1 = nullptr;
}
void create_First()
{
    first = new node;
    first->next = NULL;
    cout << "Enter new data :" << endl;
    cin >> first->data;
}
void create_New()
{
    temp = first;
    while (temp->next != NULL)
        temp = temp->next;
    ttemp = new node;
    ttemp->next = NULL;
    cout << "Enter new data:";
    cin >> ttemp->data;
    temp->next = ttemp;
}
void display()
{
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Del_After(int x)
{
    temp = first;
    while (temp->data != x)
        temp = temp->next;
    ttemp = temp->next;
    p = ttemp->next;
    temp->next = p;
    ttemp->next = NULL;
    delete (ttemp);
}
void Del_Before(int x)
{
    temp = first;
    while (temp->data != x)
    {
        p = ttemp;
        ttemp = temp;
        temp = temp->next;
    }
    p->next = temp;
    delete (ttemp);
}
void Del_Before2(int x)
{
    temp = first;
    while (temp->data != x)
    {
        p1 = p;
        p = ttemp;
        ttemp = temp;
        temp = temp->next;
    }
    p1->next = ttemp;
    delete (p);
}
int main()
{
    init();
    int n, x;
        cout
        << "how many node you want to create:" << endl;
    cin >> n;
    create_First();
    for (int i = 1; i < n; i++)
    {
        create_New();
    }
    display();
    cout << "Enter which you want delete Before";
    cin >> x;
    Del_Before2(x);
    display();
    return 0;
}