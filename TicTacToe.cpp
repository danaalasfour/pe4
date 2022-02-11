
#include <iostream>
#include <vector>

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

void DisplayBoard(std::vector<std::vector<int>> vector1){
    std::cout <<"board: "<<std::endl;
    for(int i=0;i<vector1.size();i++){
        for(int j =0;j<vector1.size();j++){
            std::cout << vector1[i][j]; 
        }
        std::cout <<std::endl;
    }
}


void PlaceMarker(std::vector<std::vector<int>> *board,std::vector<int> loc,int player1){
    int row=loc[0];
    int col=loc[1];
    board[0][row][col] =player1;
}

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
    int player1=0;
    for(int i=0;i<12;i++){
        DisplayBoard(board);
        std::vector<int> Options = GetPlayerChoice();
        PlaceMarker(&board,Options,player1);
        if(player1==0){
            player1=1;
        }
        else{
            player1 =0;
        }
       
    }
    DisplayBoard(board);
    return 0;
}