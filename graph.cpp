//program of graph by using array of adjacentary matrix
#include<iostream>
using namespace std;
class graph{
    int adm[7][7];
    int i , j , n ;
        public:
           // create function for creating nodes
            void create(){
                cout << "\n enter How many nodes in graph ";
                cin >> n ;

                for (i=1 ; i<=n ; i++){
                    for(j=1 ; j<=n ; j++){
                        cout << "\n Is there edge between" << i << "&" << j << "if yes enter time if no press 0";
                        cin >> adm[i][j];
                    }
                }
            }

            //displaying node in the form of matrix
            void display(){
                cout << "\nAdjacency Matrix:\n\n";

                    cout << "    ";
                    for(i = 1; i <= n; i++)
                    {
                        cout << i << "   ";
                    }

                    cout << "\n";

                    for(i = 1; i <= n; i++)
                    {
                        cout << i << " | ";

                        for(j = 1; j <= n; j++)
                        {
                            cout << adm[i][j] << "   ";
                        }

                        cout << "\n";
                    }
            }
};

int main(){
    graph g ;
    g.create();
    g.display();
    return 0;
}

// g++ -Wall -Wextra -g3 main.cpp -o output\main.exe -lws2_32