//Program to create and display Linkedlist node dynamically

#include <iostream>
using namespace std;

struct snode
{
    int rollno;
    char name[20];
    float marks;
    snode *next;
};

class singley
{
    snode *head;

public:
    singley()
    {
        head = NULL;
    }

    void create()
    {
        char ch;
        snode *temp = NULL;

        do
        {
            snode *s1 = new snode;

            cout << "Enter roll number: ";
            cin >> s1->rollno;

            cout << "Enter name: ";
            cin >> s1->name;

            cout << "Enter marks: ";
            cin >> s1->marks;

            s1->next = NULL;

            if (head == NULL)
            {
                head = s1;
                temp = s1;
            }
            else
            {
                temp->next = s1;
                temp = s1;
            }

            cout << "Do you want to add one more? (y/n): ";
            cin >> ch;

        } while (ch == 'Y' || ch == 'y');
    }

    void display()
    {
        snode *temp = head;

        while (temp != NULL)
        {
            cout << "\nRoll Number: " << temp->rollno;
            cout << "\nName: " << temp->name;
            cout << "\nMarks: " << temp->marks;

            temp = temp->next;
        }
    }
};

int main()
{
    singley s1;

    s1.create();
    s1.display();

    return 0;
}