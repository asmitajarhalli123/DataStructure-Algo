#include<iostream>

using namespace std;

struct snode {
    int rollno ;
    char name[20];
    float marks ;
    snode *next ;
};

class singley{
    snode *head ;

  

    singley(){
        head = NULL;
    }
   

    void create(){
        char ch ;
        snode *temp;
        do{
            snode *s1 = new snode ;
            cout<<"enter roll number";
            cin>>s1->rollno;
            cout<<"enter name ";
            cin >>s1->name ;
            cout << "enter marks";
            cin >> s1->marks;

            s1->next=NULL;

            if(head == NULL){
                head = s1;
                temp = s1;
            }
            else{
                temp->next = s1 ;
                temp = temp->next;
            }

            cout << "do you have to add one more (y or n)";
            cout >> ch;

        }while(ch=='Y' || ch=='y');
    }

    void display(){
        
    }
};

int main (){
    singley s1 ;
    s1.create();
    return 0;
}
