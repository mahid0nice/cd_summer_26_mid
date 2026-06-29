# cd_summer_26_mid
experiment1.cpp should be the name of the file 
experiment2.cpp (the code in this read me file is from my lab )


#include <iostream>

using namespace std;

void check_string( string input){
    string arr1[] = {"cout","cin","endl"};
    string arr2[] = {"<<",">>",";"};
    string arr3[] = {"+","-","*","/","%"};

    int i,x=0;
    bool a=false,b=false,c = false;
    string w;
    for(i = x;i<input.length();i++){
        if(input[i]==' '){
            w = input.substr(x,i-x);
            //cout<<w;
                for(int j=0;j<3;j++){
                    if(w == arr1[j]){
                        cout<<w<< " keyword"<<endl;

                    }
                }
                for(int k=0; k<3; k++){
                    if(w == arr2[k]){
                        cout<<w<< " punctuation"<<endl;


                    }
                }
                for(int k=0; k<3; k++){
                    if(w == arr3[k]){
                        cout<<w<< " operatoro"<<endl;


                    }
                }




                for(int j=0;j<3;j++){
                    if(w != arr1[j]){
                        a=true;
                    }
                }
                for(int k=0; k<3; k++){
                    if(w != arr2[k]){
                        b=true;

                    }
                }
                for(int k=0; k<3; k++){
                    if(w != arr3[k]){
                        c=true;
                    }
                }
                if(a==true && b == true && c==true){
                    cout<<w<<" constant";
                }





            x=i+1;
        }
    }
}
int main(){
    string x;
    cout<<"Enter the code: ";
    getline(cin,x);

    check_string(x);
    return 0;
}
