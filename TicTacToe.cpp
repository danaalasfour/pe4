
#include <iostream>
#include <vector>


/*
were just creating a board 
no param
return vector and it will look like this -8-8-8
                                         -8-8-8
                                         -8-8-8
*/
std::vector<std::vector<int>> CreateBoard(){
    std::vector<std::vector<int>> vector1;
    for(int i=0;i<3;i++){
        std::vector<int> vector2;
        for(int j=0;j<3;j++){
            vector2.push_back(8);
        }
        vector1.push_back(vector2);
    }
    return vector1;
}
/*
this displays the board 
param is vector 1
prints out the board 
*/

void DisplayBoard(std::vector<std::vector<int>> vector1){
    std::cout <<"board: "<<std::endl;
    for(int i=0;i<vector1.size();i++){
        for(int j =0;j<vector1.size();j++){
            std::cout << vector1[i][j]; 
        }
        std::cout <<std::endl;
    }
}

/*
updates the marker location at the bard
param is board,loc(location, and player 1
the marker is either 1 or 0. 
*/


void PlaceMarker(std::vector<std::vector<int>> *board,std::vector<int> loc,int player1){
    int row=loc[0];
    int col=loc[1];
    board[0][row][col] =player1;
}
/*
this gives the player the choice for row and column options
param is none
returns the players options
*/

std::vector<int> GetPlayerChoice(){
    std::vector<int> Options;
    int rowOption = 1;
    int colOption = 0;
    std::cout<< "Enter option for row: ";
    std::cin >>rowOption;
    std::cout <<std::endl;
    std::cout << "Please columns options: ";
    std::cin>>colOption;
    std::cout << std::endl;
    Options.push_back(rowOption);
    Options.push_back(colOption);
    return Options;
}

int main(){
    std::vector<std::vector<int>> board=CreateBoard();
    int player1=0; //set the player 1 marker to 0
    for(int i=0;i<10;i++){ //iterates through the board about 10 movement if possible
        DisplayBoard(board);
        std::vector<int> Options = GetPlayerChoice();
        PlaceMarker(&board,Options,player1);
        if(player1==0){
            player1=1;//set it to 1
        }
        else{
            player1 =0; //set it to 0
        }
       
    }
    DisplayBoard(board); //print the board
    return 0;
}
