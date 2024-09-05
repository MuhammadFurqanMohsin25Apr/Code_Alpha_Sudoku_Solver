#include<iostream>
using namespace std;
bool isSafe(int arr[9][9],int row,int col,int num);
bool solve(int arr[9][9]){
    int row,col;
    bool isEmpty=true;
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(arr[row][col]==0){
                isEmpty=false;
                break;
            }
        }
        if(!isEmpty){
            break;
        }
    }
    if(isEmpty){
        return true;
    }
    for(int num=1;num<=9;num++){
        if(isSafe(arr,row,col,num)){
            arr[row][col]=num;
            if(solve(arr)){
                return true;
            }
            arr[row][col]=0;
        }
    }
    return false;
}
bool isSafe(int arr[9][9],int row,int col,int num){
    for(int x=0;x<9;x++){
        if(arr[row][x]==num){
            return false;
        }
    }
    for(int x=0;x<9;x++){
        if(arr[x][col]==num){
            return false;
        }
    }
    int startRow=row-row%3;
    int startCol=col-col%3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i+startRow][j+startCol]==num){
                return false;
            }
        }
    }
    return true;
}
void printGrid(int arr[9][9]){
    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if(solve(arr)){
        cout<<" Sudoku Puzzle Solution is: "<<endl;
        printGrid(arr);
        cout<<endl;
    }
    else{
        cout<<"No solution exists";
    }
    return 0;
}



