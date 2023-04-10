#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // ofstream myFileOutPut;
    // // opening file
    // myFileOutPut.open("Count1to10.txt");
    // //write into the file
    // for(int num = 1; num <= 10; num++){
    //     myFileOutPut << num << endl;
    // }
    // // closing file
    // myFileOutPut.close();

    ifstream myFileInput;
    string filename = "Count1to10.txt";
    int num;
    myFileInput.open(filename);
    if(!myFileInput){
        cout << "wrong file" << endl;
    }else{
        while(myFileInput >> num)
            cout << num << endl;
        myFileInput.close();
    }
}