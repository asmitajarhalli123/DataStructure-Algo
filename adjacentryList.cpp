// program of graph to create graph by using array of adjacentary list

#include<iostream>
using namespace std;

struct node {
    int data ;
    node *next;
};

class graph{
    int n = 10 ;
    node *t1 , *p , *adjlist[10];

        public:
         graph(){
            for(int i = 0 ; i<n ; i++){
                adjlist[i] = NULL;
                cout << adjlist[i] << " - ";
            }
         }

         void create(){
              int i , x ;
              char ans ;
              for(int i = 0 ;i <n ; i++){
                adjlist[i] = new node ;
                cout << "\n Enter node data :"  ;
                cin >> adjlist[i]->data;

                adjlist[i]->next = NULL;
                p = adjlist[i];


                do{
                    cout << "Enter adjacentry node data :(if not press -1)";
                    cin >> x ;
                   if(x != -1){
                    t1 = new node ;
                     t1->data = x ;
                    p->next = t1;
                    t1->next = p->next;
                   }
             cout << "is there another node adjacent to node(if yes press 'y' else 'n') ";
             cin >> ans ;

                }while(ans == 'Y' || ans == 'y');
              }
         }
};

int main(){
    graph g;
    g.create();
    return 0 ;
}