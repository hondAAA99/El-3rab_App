#include <iostream>
#include <string>
using namespace std ;

struct vars {
char op ;
string name[1000];
float start[1000];
float end[1000];
int prices[1000];
int total ;
string find;
string D_S ;
int price1 = 9 , price2 = 17 , price3 = 24 , price4 = 30 , price5 = 35 ;

};

void operA (vars &myVars , int i);
void operF (vars &myVars );
void operFcalc(vars &myVars , int i);
void operE (vars &myVars);
void operD (vars &myVars);
void operX (vars &myVars);

    int main (){
        vars myVars ;
        int i = 0 ;
        while ( myVars.op != 'X' ){

        cout << endl <<"enter the operation you want:- " << endl ;

        cout << "('A' for adding new customer , 'F' for find the customer , 'E' for edit prices , 'D' for calculate the day , 'X' for close the progame: " ;

        cin >> myVars.op ;

        if (myVars.op == 'A'){
             operA ( myVars ,  i);
        }
        else if (myVars.op == 'F'){
             operF ( myVars);
             operFcalc( myVars, i);
        }
        else if (myVars.op == 'E'){
             operE (myVars);
        }
        else if (myVars.op == 'D'){
            operD (myVars);
        }
        else if (myVars.op == 'X'){
             operX (myVars);
        } else {
        cout << "=> Be sure to follow the directions " << endl ;
        }
        }
}

    void operA (vars &myVars , int i){
         cout << "enter the name: ";
         cin >> myVars.name[i] ;
         cout << "enter the time include (24 hour): ";
         cin >> myVars.start[i] ;
    }

    void operF (vars &myVars ){
            cout << "enter the customer name: ";
            cin >> myVars.find ;
              for ( int a  = 0; a < 1000 ; a++ ){
                if (myVars.find == myVars.name[a]){
                 cout << "the starting time: " << myVars.start[a] << endl;
            }
        }
    }

    void operFcalc(vars &myVars , int i){
                 cout << "enter the time of finish (in 24 hours): ";
                 cin >> myVars.end[i];

                if ( myVars.end[i] - myVars.start[i] >= 1 && myVars.end[i] - myVars.start[i] <= 1.45 ){
                 cout << "the price is: "<< myVars.price1;
                 myVars.prices[i] = myVars.price1 ;

              } else if ( myVars.end[i] - myVars.start[i] >= 1.45 && myVars.end[i] - myVars.start[i] <= 2.45 ){
                  cout << "the price is: "<<myVars.price2 ;
                  myVars.prices[i] = myVars.price2 ;

              } else if ( myVars.end[i] - myVars.start[i] >= 2.45 && myVars.end[i] - myVars.start[i] <= 3.45 ){
                  cout << "the price is: "<<myVars.price3 ;
                  myVars.prices[i] = myVars.price3 ;

              } else if ( myVars.end[i] - myVars.start[i] >= 3.45 && myVars.end[i] - myVars.start[i] <= 4.45 ){
                  cout << "the price is: "<< myVars.price4 ;
                  myVars.prices[i] = myVars.price4 ;

              }  else if ( myVars.end[i] - myVars.start[i] >= 4.45 && myVars.end[i] - myVars.start[i] <= 5 ){
                    cout <<"the price is: "<< myVars.price5 ;
                    myVars.prices[i] = myVars.price5 ;
            }

    }

    void operE (vars &myVars){
            cout << "edit the time prices: " << endl << "the 1st hour price: " ;
            cin >> myVars.price1 ;
            cout << endl << "the 2nd hour price: " ;
            cin >> myVars.price2 ;
            cout << endl << "the 3rd hour price: " ;
            cin >> myVars.price3 ;
            cout << endl << "the 4th hour price: " ;
            cin >> myVars.price4 ;
            cout << endl << "the 5th hour price: " ;
            cin >> myVars.price5 ;
    }

    void operD (vars &myVars){
                myVars.total = 0 ;
            for (int x = 0 ; x < 1000 ; x++){
                myVars.total += myVars.prices[x] ;
    }
            cout << myVars.total ;

}

    void operX (vars &myVars){
            cout << endl << " => this is the end of the day" << endl ;
            exit(0);
    }
