#include "util.h"
#include <vector>


int main() 
{
    int num_of_pegs;
    int num_of_colors;
    int peg_one;
    int peg_two;
    int peg_three;
    vector<int>pegs;
    vector<int>password{5 , 3 , 5};
    int turn = 0;
    
    
    while(pegs != password){  
    pegs.clear();// i did had to search this line up beacuse i was stuck but finaly its done and i now khow what it does it just erases the elements from the vectors 
    cout << "Please enter the number of pegs (1-8): ";
    cin >> num_of_pegs;
    while(num_of_pegs > 8){
        cout << "Please enter the number of pegs (1-8): ";
        cin >> num_of_pegs;
        if(num_of_pegs <= 8){
            break;
        }
    }
    
    cout << "Please select the number of colors (1-8): ";
    cin >> num_of_colors;
    while(num_of_colors > 8){
         cout << "Please select the number of colors (1-8): ";
         cin >> num_of_colors;
         if(num_of_colors <= 8){
             break;
         }
    }
    
    
    
    cout << "Please enter the color for peg 1: ";
    cin >> peg_one;
    pegs.push_back(peg_one);
turn += 1;
    cout << "Please enter the color for peg2: ";
    cin >> peg_two;
    pegs.push_back(peg_two);
turn += 1;
    
    cout << "Please enter the color for peg3: ";
    cin >> peg_three;
    pegs.push_back(peg_three);
turn += 1;
    
   
    
    if(pegs == password){//YES!!!!! WORKS AND STUFF AND DOES THINGS!
        cout << "Great job! You solved the puzzle in " << turn <<   " Turns. \n";
        break;
    }
    
    
    }
    
    return 0;
}
