#include <iostream>
using namespace std;

void check_identifier(string x){

    if(x.length() == 0){
        cout << "Invalid identifier" << endl;
        return;
    }

    bool y;

    if(((x[0] >= 'a' && x[0] <= 'z') || (x[0] >= 'A' && x[0] <= 'Z') || x[0] == '_')){
        y = true;
    }
    else{
        y = false;
    }

    for(int i = 1; i < x.length() && y; i++){

        if(x[i] == ' '){
            y = false;
            break;
        }

        if(!((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= '0' && x[i] <= '9') || x[i] == '_')){
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

void check_string(string input){

    

    string arr1[] = {"cout","cin","endl"};
    string arr2[] = {"<<",">>",";"};
    string arr3[] = {"+","-","*","/","%"};

    int x = 0;
    string w;

    for(int i = 0; i < input.length(); i++){

        if(input[i] == ' '){

            bool a = false;
            bool b = false;
            bool c = false;

            w = input.substr(x, i - x);

            for(int j = 0; j < 3; j++){
                if(w == arr1[j]){
                    cout << w << " keyword" << endl;
                    a = true;
                    break;
                }
            }

            for(int j = 0; j < 3; j++){
                if(w == arr2[j]){
                    cout << w << " punctuation" << endl;
                    b = true;
                    break;
                }
            }

            
            for(int j = 0; j < 5; j++){
                if(w == arr3[j]){
                    cout << w << " operator" << endl;
                    c = true;
                    break;
                }
            }

            
            if(a==false && b==false && c==false){
                cout << w << " constant" << endl;
                check_identifier(w);
            }

            x = i + 1;
        }
    }
}

int main(){

    string x;

    cout << "Enter the code: ";
    getline(cin, x);

    check_string(x);

    return 0;
}