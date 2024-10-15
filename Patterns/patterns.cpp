#include <iostream>
#include <string>
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
        for (j=0; j<n;  j++){
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

void Inverted_Pyramid(){
    int i,j,n;
    cout<<"Enter N:\n";
    cin >> n;
    for(i=0; i<n; i++){
        for (j=0; j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}

void Zero_One_Pattern(){
    int i,j,n;
    cout<<"Enter N:\n";
    cin >> n;
    for(i=0; i<n; i++){
        for (j=0; j<=i;j++){
            if((i+j) % 2 == 0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

}

void Rhombus_Pattern(){
    int i,j,n;
    cout<<"Enter N:\n";
    cin >> n;
    for(i=0; i<n; i++){
        for (j=0; j<=n-i-1;j++){
            cout<<" ";
        }
        int count=1;
        while(count<=5){
            cout<<"* ";
            count+=1;
        } 
        cout<<endl;
    }

}

void Numbers_pattern(){
    int i,j,n;
    cout<<"Enter N:\n";
    // cin >> n;
    n=7;
    for(i=0; i<n; i++){
        int k=1;
        for (j=0; j<2*n-1;j++){
            int sum = i+j;
            if(sum<n-1)
                cout<<" ";
            if(sum%2==1)
                cout<<" ";
            else if(sum >= n-1 && sum%2 ==0) {
                if(k<=i+1)
                    cout<<k++<<" ";
            }}
        cout<<endl;
        }  
}

// void Numbers_pattern(){
//     int i,j,n;
//     cout<<"Enter N:\n";
//     // cin >> n;
//     n=7;
//     for(i=0; i<n; i++){
//         for(j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(j=0; j<=i; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){
    int choice;
    cout <<"Choose a pattern from the below"<<endl;
    string patterns[] = {"half_pyramid_numbers", "half_inverted_pyramid_stars,", "half_rotated_inverted_pyramid_stars", "Floyds_triagle", "butterfly_pattern", "Inverted_Pyramid", "Zero_One_Pattern", "Rhombus_Pattern", "numbers_pattern"};

    int number_of_patterns = sizeof(patterns)/sizeof(patterns[0]);

    for (int i=0; i<number_of_patterns; i++){
        cout<<i+1<<". "<<patterns[i]<<endl;
    }
     
    // cin>>choice;
    choice = 9;

    if(choice ==1)
        half_pyramid_numbers();
        
    if(choice == 2)
        half_inverted_pyramid_stars();
        
    if(choice == 3)
        half_rotated_inverted_pyramid_stars();
        
    if(choice ==4)
        Floyds_triagle();
        
    if(choice == 5)
        butterfly_pattern();

    if(choice == 6)
        Inverted_Pyramid();

    if(choice == 7)
        Zero_One_Pattern();

    if(choice == 8)
        Rhombus_Pattern();

    if(choice == 9)
        Numbers_pattern();
}
