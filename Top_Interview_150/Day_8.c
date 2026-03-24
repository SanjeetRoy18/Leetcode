/*
    Matrix:
    -> Valid Sudoku
      #36 | Array | Hash Table | Matrix
*/


bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    
    //row check
    for(int i = 0; i<boardSize; i++){
        bool seen[10] = {false};
        for(int j = 0; j<boardSize; j++){
            if(board[i][j] != '.'){
                int num = board[i][j] - '0';     //converts the char into int
                if(seen[num] == true){
                    return false;
                }
                seen[num] = true;
            }
        }
    }
    
    //column check
    for(int i = 0; i<boardSize; i++){
        bool seen[10] = {false};
        for(int j = 0; j<boardSize; j++){
            if(board[j][i] != '.'){
                int num = board[j][i] - '0';     //converts the char into int
                if(seen[num] == true){
                    return false;
                }
                seen[num] = true;
            }
        }
    }

    //3*3 sub-matrix check
    for(int box = 0; box<boardSize; box++){  // number of boxes
        bool seen[10] = {false};
        for(int j = 0; j<3; j++){
            for(int k = 0; k<3; k++){
                int row = (box / 3) * 3 + j;
                int col = (box % 3) * 3 + k;

                if(board[row][col] != '.'){
                    int num = board[row][col] - '0';

                    if(seen[num] == true){
                        return false;
                    }
                    seen[num] = true;
                }
            }
        }
    }

    return true;
}