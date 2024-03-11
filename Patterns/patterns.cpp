#include <iostream>
using namespace std;

int half_inverted_pyramid_stars()
{
    
    cout<<"Enter N:\n";
    int n, i, j;
    cin >> n;
    for (i=0; i<n; i++){
        for (j=0 ; j<=n-1-i ;j++ ){
            cout << "*"; 
        }
        cout<< "\n";
    }
    return 0;
}

void half_rotated_inverted_pyramid_stars(){
    cout<<"Enter N:\n";
    int n, i, j;
    cin >> n;
    // n=5;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}

void half_pyramid_numbers(){
    int n, i, j;
    cout<<"Enter N:\n";
    cin >> n;
    for (i=0; i<n;i++){
        for(j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void Floyds_triagle(){
    int n, i, j;
    cout<<"Enter N:\n";
    cin >> n;
    int k=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
}

void butterfly_pattern(){
    int n, i, j;
    cout<<"Enter N:\n";
    cin >> n;
    for(i=0; i<n; i++){
        for(j=0; j<2*n; j++){
            if(j<=i){
                cout<<"*"; //Prints stars in left upper part of butterfly
            }
            if(j>=2*n-1-i){
                cout<<"*"; //Prints stars in right upper part of butterfly
            }
            if(j>i and j<2*n-1-i){
                cout<<" "; // Print spaces in locations other than the above 2 
            }
        }
        cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<2*n; j++){
            if(j<=n-i-1){
                cout<<"*"; //Prints stars in left lower part of butterfly
            }
            if(j>=n+i){
                cout<<"*"; //Prints stars in right lower part of butterfly
            }
            if(j>n-i-1 and j<n+i){
                cout<<" "; // Print spaces in locations other than the above 2
            }
        }
        cout<<endl;
    }
    
}


int main(){
    int choice;
    cout <<"Choose a pattern from the below"<<endl;
    cout<<"1. half_pyramid_numbers \n2. half_inverted_pyramid_stars\n3. half_rotated_inverted_pyramid_stars"<<endl;
    cout <<"4. Floyds_triagle\n5. butterfly_pattern"<<endl;
    cin>>choice;
    // choice = 3;
    if(choice ==1)
        half_pyramid_numbers();
        
    if(choice == 2)
        half_inverted_pyramid_stars();
        
    if(choice == 3)
        half_rotated_inverted_pyramid_stars();
        
    if(choice ==4)
        Floyds_triagle();
        
    if(choice ==5)
        butterfly_pattern();
}
