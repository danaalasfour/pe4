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

int main(){
  CreateBoard();
}
