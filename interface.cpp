#include <iostream>
using namespace std;


int getPlayerCount(){
    string playerCount = "";
    int result = 0;

    cout << "Welcome to battleship! Are there one or two players?" << endl;

    while (result == 0){
        cin >> playerCount;
        cout << endl;
        if (playerCount == "1" || playerCount == "one" || playerCount == "ONE" || playerCount == "One"){
            result = 1;
        }
        else if (playerCount == "2" || playerCount == "two" || playerCount == "TWO" || playerCount == "Two"){
            result = 2;
        }
        else {
            playerCount = "";
            cout << "That is not a valid player count. Please enter either 1 or 2." << endl;
        }
    }
    
    return result;
}

void createBoards(string selectedSquare, char (*currentBoard)[10]){
    string shipToPlace = "";
    bool selectionMade = false;
    int shipsPlaced = 0;
    int shipSize = 0;
    int column = 0;
    int row = 0;

    while (shipsPlaced < 5){
        cout << "Which ship would you like to place? Please enter one of the following:" << endl;
        cout << "Carrier   Battleship   Destroyer   Submarine   Patrol Boat" << endl;

        while (!selectionMade){
            cin >> shipToPlace;
            cout << endl;
            if (shipToPlace == "Carrier" || shipToPlace == "carrier" || shipToPlace == "CARRIER"){
                shipSize = 5;
                selectionMade = true;
            }
            else if (shipToPlace == "Battleship" || shipToPlace == "battleship" || shipToPlace == "BATTLESHIP"){
                shipSize = 4;
                selectionMade = true;
            }
            else if (shipToPlace == "Destroyer" || shipToPlace == "destroyer" || shipToPlace == "DESTROYER"){
                shipSize = 3;
                selectionMade = true;
            }
            else if (shipToPlace == "Submarine" || shipToPlace == "submarine" || shipToPlace == "SUBMARINE"){
                shipSize = 3;
                selectionMade = true;
            }
            else if (shipToPlace == "Patrol Boat" || shipToPlace == "patrol boat" || shipToPlace == "PATROL BOAT"){
                shipSize = 2;
                selectionMade = true;
            }
            else {
                shipToPlace = "";
                cout << "That is not a valid ship name. Please enter one of the following:" << endl;
                cout << "Carrier   Battleship   Destroyer   Submarine   Patrol Boat" << endl;
            }
        }

        selectionMade = false;
        while (!selectionMade){
            cout << "The size of this ship is " << shipSize << " squares." << endl;
            cout << "Enter the square you would like to be the front of the ship as the letter and the number." << endl;
            cout << "Example: A1" << endl;
            cout << "    A  B  C  D  E  F  G  H  I  J" << endl;
            cout << "1  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "2  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "3  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "4  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "5  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "6  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "7  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "8  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "9  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cout << "10 [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]" << endl;
            cin >> selectedSquare;
            cout << endl;

            switch(selectedSquare[0]){
            case 'A':
            case 'a':
                column = 1;
                break;
            case 'B':
            case 'b':
                column = 2;
                break;
            case 'C':
            case 'c':
                column = 3;
                break;
            case 'D':
            case 'd':
                column = 4;
                break;
            case 'E':
            case 'e':
                column = 5;
                break;
            case 'F':
            case 'f':
                column = 6;
                break;
            case 'G':
            case 'g':
                column = 7;
                break;
            case 'H':
            case 'h':
                column = 8;
                break;
            case 'I':
            case 'i':
                column = 9;
                break;
            case 'J':
            case 'j':
                column = 10;
                break;
            default:
                column = 0;
            }

            if (column != 0) {
                if (selectedSquare.size() == 3 && selectedSquare[1] == '1' && selectedSquare[2] == '0'){

                }
            }
            
            if (column == 0 && row == 0){

            }
        }
    }
}