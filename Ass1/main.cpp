#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
char phrase[100], keyword[15];
int c,i=0;
int countKeyword (string keyword, string phrase);
int main(){
    cout <<"Enter a keyword: ";
    cin >> keyword;
    cout<<endl<<"Enter your phrase: ";
    cin.get(phrase, 100);
    int d = countKeyword(keyword, phrase);
    cout<<endl <<"The word "<<keyword<<" appeared "<<d<<" times."<<endl;

 }
 int countKeyword (string keyword, string phrase){
    for (i=0; i<strlen(phrase); i++){
        if (phrase == keyword)
            c++;
    }
     return c
 }
 int MazePathSum(int ** arr, int rows, int cols){

     return sum;
 }

