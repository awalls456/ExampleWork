#include <iostream>
#include "interface.cpp"
using namespace std;

int main(){
    char Board1[10][10];
    char Board2[10][10];
    int playerCount = 0;
    string shipToPlace = "";
    string selectedSquare = "";
    string humanPlayer = "";
    bool playerSelected = false;

    playerCount = getPlayerCount();
    cout << endl;

    if (playerCount == 1){
        //create AI
        cout << "As the only player, you will be playing against the AI." << endl;
        
        while (!playerSelected){
            cout << "Would you like to be Player One or Player Two?" << endl;
            cin >> humanPlayer;
            cout << endl;
            if (humanPlayer == "1" || humanPlayer == "one" || humanPlayer == "One" || humanPlayer == "ONE"){
                createBoards(selectedSquare, Board1);
                //set the AI board
            }
            else if (humanPlayer == "2" || humanPlayer == "two" || humanPlayer == "Two" || humanPlayer == "TWO"){
                createBoards(selectedSquare, Board2);
                //set the AI board
            }
            else {
                humanPlayer = "";
                cout << "That is not a valid player. Please enter either 1 or 2." << endl;
            }
        }
    }
    else if (playerCount == 2){
        cout << "Welcome, Player One." << endl;
        createBoards(selectedSquare, Board1);
        cout << "Welcome, Player Two." << endl;
        createBoards(selectedSquare, Board2);
    }
}