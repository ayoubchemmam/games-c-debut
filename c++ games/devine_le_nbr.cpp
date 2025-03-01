#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
   srand(time(0));   //pour choise un nbr alitore //
    int number_win = rand() %9 + 1;   // la valeur de nbr entre 1 et 100//
    int x ;
do{
    cout << "nombre compris entre 1 et 100 ete selectionne"<<endl;
    cout << "choise nombre entre 1 et 100"<<endl;
    cin>>x;
    if(x == number_win){
      cout<< "bravo" << endl;
    } else if (x > number_win){
      cout << "le nbr est tres grands" <<endl ;
    } else {
      cout << "le nbr et tres petits" <<endl ;
    }
   } while (x != number_win );
   return 0 ;

}