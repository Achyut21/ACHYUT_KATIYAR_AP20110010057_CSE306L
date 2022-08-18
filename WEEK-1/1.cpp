#include <bits/stdc++.h>

using namespace std;

int main() {
   int state = 0;
    char arr[10];
    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]=='a'||arr[i]=='b'){
           
        switch(state){
        case 0:
            if(arr[i]=='a') state =1;
            else if(arr[i]=='b') state =3;
            break;
        case 1:
            if(arr[i]=='a') state = 0;
            else if(arr[i]=='b') state =2;
            break;
        case 2:
            if(arr[i]=='a') state = 3;
            else if(arr[i]=='b') state =1;
            break;
        case 3:
            if(arr[i]=='a') state = 2;
            else if(arr[i]=='b') state =0;
            break;
        default:
            cout<<"Error";
    }
       
        }
        else{
            cout<<"Entered string is invalid";
        }
       
    }
   
    return 0;
}
