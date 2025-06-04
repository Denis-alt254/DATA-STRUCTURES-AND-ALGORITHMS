#include<iostream>
using namespace std;
int main(){
    int scores [3][2] = {{5, 1},{-7, 4},{1, 0}};

    for(int i = 0; i<3; i++){
        for (int j = 0; j<2; j++){
            cout<<"Element at index"<<i<<" "<<j<<" = "<<scores[i][j]<<endl;
        }
    }

    int score [] = {1,2,3,4,5};
    for (int s = 0;s<10; s++){
        cout<<"Is It Valid = "<<score[s]<<endl;
    }

    int elements [] ={2,4,6,8,12};
    int value, position,x;
    int size = sizeof(elements)/sizeof(elements[0]);
    for (int k = 0; k < size; k++){
        cout<<"Before insertion = "<<elements[k]<<endl;
    }
    cout<<"Enter the value you want to insert = "<<endl;
    cin>>value;
    cout<<"Enter the position = "<<endl;
    cin>>position;
    
    size = size+1;

    for(int i = size; i>position; i--){
        elements[i] = elements[i-1];
    }
    elements[position] = x;

    for (int k = 0; k < size; k++){
        cout<<"After insertion = "<<elements[k]<<endl;
    }
    return 0;
}