#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<char>>& board){
    cout<<"  ";
    for(int i=0;i<3;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<i<<" ";
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool placeAndCheck(vector<vector<char>>& board,int i,int j,char ch){
    board[i][j]=ch;
    
    bool ans=true;
    //row
    for(int col=0;col<3;col++){
        if(board[i][col] != ch){
            ans = false;
            break;
        }
    }
    if(ans) return true;
    
    ans=true;
    for(int row=0;row<3;row++){
        if(board[row][j] != ch){
            ans = false;
            break;
        }
    }
    if(ans) return true;

    if(i==j){
        ans=true;
        for(int d=0;d<3;d++){
            if(board[d][d] != ch){
                ans=false;
                break;
            }
        }
        if(ans) return true;
    }

    if(i+j==2){
        ans=true;
        for(int d=0;d<3;d++){
            if(board[d][2-d] != ch){
                ans=false;
                break;
            }
        }
        if(ans) return true;
    }
    return false;
}

bool isFull(vector<vector<char>>& board){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='.') return false;
        }
    }
    return true;
}
int main(){
    cout<<"Welcome To Tic Tac Toe Game"<<endl;
    cout<<"To place O or X give the coordinate"<<endl;
    bool turn = 1; //0->O 1->X
    vector<vector<char>> board(3,vector<char>(3,'.'));
    printBoard(board);
    while(true){
        if(isFull(board)){
            cout<<"Game is Tie."<<endl;
            break;
        }
        cout<<"Player "<<( turn ? "1(X)":"2(O)" ) <<" turn: ";
        int i,j;
        cin>>i>>j;
        while(i>=3 || i<0 || j>=3 || j<0 || board[i][j]!='.'){
            cout<<"Invalid input. Enter Again"<<endl;
            cin>>i>>j;
        }
        char ch = turn? 'X':'O';
        if(placeAndCheck(board,i,j,ch)){
            printBoard(board);
            cout<<"Player "<<( turn ? "1(X)":"2(O)" ) <<" is the winner."<<endl;
            break;
        }
        printBoard(board);
        turn = !turn;

    }
    return 0;
}