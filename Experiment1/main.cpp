#include <iostream>
using namespace std;

void check_numeric_constant(){
    string number;
    cout<<"Enter a number :";
    cin>>number;
    
    bool x = false;
    for(int i=0;i<number.length();i++){
        if((int)number[i]>=48 && (int)number[i]<=57 ){
            x = true;
        }else{
            x = false;
            break;
        }
    }

    if(x){
        cout<<"Numeric constant"<<endl;
    }else{
        cout<<"Not numeric"<<endl;
    }
}

void check_arithmetic_opertator(){
    string x;
    cout<<"Enter a calculation :";
    getline(cin,x);

    int count=0;
    for(int i= 0; i<x.length();i++){
        if((int)x[i]==43 || (int)x[i]==45 || (int)x[i]==42 ||(int)x[i]==47 || (int)x[i]==37 || (int)x[i]==61){
            count+=1;
            cout<<"operator "<<count<<": "<<x[i]<<endl;
        }
    }
}

void check_comment(){
    string x;
    cout<<"Enter a comment using ('//' or '/*' and '*/') :";
    getline(cin,x);
    
    bool y = false;
    for(int i = 0; i<x.length();i++){
        if((int)x[i]==47 && (int)x[i+1]==47){
            cout<<"Single Line Commnet"<<endl;
            break;
        }else if((int)x[i]==47 && (int)x[i+1]==42 && (int)x[x.length()-2]==42 && (int)x[x.length()-1]==47){
            cout<<"Multi Line Comment"<<endl;
            break;
        }else{
            y = true;
        }
    }

    if(y){
        cout<<"Not a comment"<<endl;
    }
}

void check_identifier(){
    string x;
    getline(cin,x);
    
    bool y;
    if(x.length()==0){
        cout<<"invalid identifier"<<endl;
        return;
    }
    if((((int)x[0]>=97 && (int)x[0]<=122) || ((int)x[0]>=65 && (int)x[0]<=90) || (int)x[0]==95)){
        y = true;
    }else{
        y = false;
    }
    for(int i=1; i<x.length() && y; i++){

        if((int)x[i]==32){      
            y = false;
            break;
        }

        if(!(((int)x[i]>=97 && (int)x[i]<=122) || ((int)x[i]>=65 && (int)x[i]<=90) || ((int)x[i]>=48 && (int)x[i]<=57) || (int)x[i]==95)){
            y = true;
            
        }else{
            y = false;
            break;
        }
    }

    if(y){
        cout << "Valid identifier" << endl;
    }
    else{
        cout << "Invalid identifier" << endl;
    }

}
    void check_average(){
    int x[] ={4,6,75,4,6,7,4,5,67,8,88,753};
    int n = sizeof(x)/sizeof(x[0]);
    int sum = 0;

    for(int i = 0; i<n;i++){
        sum+=x[i];
    }

    float average = (float)sum/n;
    cout<<"average :"<<average<<endl;
    
    }

    void check_min_max(){
        int x[] ={6,6,75,1,0,7,4,5,67,8,888,753};
        int n=sizeof(x)/sizeof(x[0]);
        int min = x[0];
        int max;
        for(int i=1;i<n;i++){
            if(x[i]<min){
                min = x[i];
            }else{
                max = x[i];
            }
        }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
}

void concatanate_string(){
    string firstname,lastname;
    cout<<"Enter your first name :";
    getline(cin,firstname);
    cout<<"Enter your last name :";
    getline(cin,lastname);
    cout<<endl;

    cout<<"Your full name is :"<<firstname+" "+lastname<<endl;
}
    
    



int main(){

    //check_numeric_constant();
    //check_arithmetic_opertator();
    //check_comment();
    // check_identifier();
    //check_average();
    //check_min_max();
    //concatanate_string();
    return 0;
}