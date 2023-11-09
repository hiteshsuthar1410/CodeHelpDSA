#include <iostream>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();
void pattern11();
void pattern11Alt();
void pattern12();
void pattern13();
void pattern14();
void pattern14Alt();
void pattern15();
void pattern16();
void pattern17();
void pattern18();
void pattern19();
void pattern20();

int main() {
    //    pattern1();
    //    pattern2();
    //    pattern3();
    //    pattern4();
    //    pattern5();
    //    pattern6();
    //    pattern7();
    //    pattern8();
    //    pattern9();
    //    pattern10();
    //    pattern11();
    //    pattern11Alt();
    //    pattern12();
    //    pattern13();
    //    pattern14();
    //    pattern14Alt();
    //    pattern15();
    //    pattern16();
//    pattern17();
//    pattern18();
//    pattern19();
    pattern20();
    cout<<endl;
    return 0;
}

void pattern1() {
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    
    int i = 1;
    
    while (i<=num) {
        int j = 1;
        while (j<=num) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern2() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    
    while(i <= num) {
        int j = 1;
        while(j <= num) {
            cout<<(num - j + 1);
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern3() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int count = 1;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= num) {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern4() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            cout<<"*"<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern5() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern6() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            cout<<(i + j - 1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern7() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            cout<<(i - j + 1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern8() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}


void pattern9() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= num) {
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern10() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    
    int nextLetter = 0;
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= num) {
            char ch = 'A' + nextLetter;
            cout<<ch<<" ";
            j++;
            nextLetter++;
        }
        i++;
        cout<<endl;
    }
}

void pattern11() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= num) {
            char ch = 'A' + i + j - 2 ;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern11Alt() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        char start = 'A' + i - 1;
        int j = 1;
        while(j <= i) {
            cout<<start<<" ";
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern12() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            char ch = 'A' + i - 1 ;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern13() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            char ch = 'A' + i + j - 2 ;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern14() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        int j = 1;
        while(j <= i) {
            char ch = 'A' + (num - i + j - 1) ;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern14Alt() {
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int i = 1;
    while(i <= num) {
        char start = 'A' + (num - i) ;
        int j = 1;
        while(j <= i) {
            cout<<start<<" ";
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
}
void pattern15() {
    int num;
    cout<<"\nEnter number: "<<endl;
    cin>>num;
    
    int i = 1;
    
    while(i <= num) {
        
        int j = 1;
        int k = 0;
        
        while(j <= (num - i)) {
            cout<<" ";
            j++;
        }
        
        while(k < i) {
            cout<<"*";
            k++;
        }
        
        i++;
        
        cout<<endl;
    }
}

void pattern16() {
    int num;
    cout<<"\nEnter number: "<<endl;
    cin>>num;
    
    int i = 1;
    
    while(i <= num) {
        
        int j = 1;
        int k = 0;
        
        while(j <= (num - i)) {
            cout<<" ";
            j++;
        }
        
        while(k < i) {
            cout<<"*";
            k++;
        }
        
        i++;
        
        cout<<endl;
    }
}

void pattern17() {
    int num;
    cout<<"\nEnter number: "<<endl;
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int star = num - i + 1;
        int space = i - 1;
        
        // while loop mei m hum number bhi daal skte h
        // jab tk number 0 ya -ve nahi ho jata tab tk loop chlta rhega
        while(space) {
            cout<<"  ";
            space--;
        }
        
        while(star) {
            cout<<"* ";
            star--;
        }
        cout<<endl;
        
        i++;
    }
    
    cout<<endl;
}

void pattern18() {
    int num;
    cout<<"\nEnter number: "<<endl;
    cin>>num;
    
    int i = 1;
    while(i <= num) {
        int count = num - i + 1;
        int space = i - 1;
        int number = i;
        
        // while loop mei m hum number bhi daal skte h
        // jab tk number 0 ya -ve nahi ho jata tab tk loop chlta rhega
        while(space) {
            cout<<" ";
            space--;
            
        }
        
        while(count) {
            cout<<number;
            number++;
            count--;
        }
        cout<<endl;
        
        i++;
    }
    
    cout<<endl;
}

void pattern19() {
    int num;
    cout<<"\nEnter number: "<<endl;
    cin>>num;
    
    int i = 1;
    
    while(i <= num) {
        
        int space = num - i;
        while(space) {
            cout<<"_";
            space--;
        }
        
        int t2 = i;
        int series2 = 1;
        
        while(t2) {
            cout<<series2;
            series2++;
            t2--;
        }
        
        int t3 = i - 1;
        int series3 = i - 1;
        while(t3) {
            cout<<series3;
            series3--;
            t3--;
        }
        
        cout<<endl;
        
        i++;
    }
    
    
}

void pattern20() {
    cout<<"Enter number: ";
    int num;
    cin>>num;
    
    int i = 1;
    
    while(i <= num) {
        
        int j = 1;
        while(j <= num - i + 1) {
            cout<<j;
            j++;
        }
        
        int k = i - 1;
        
        while(k) {
            cout<<"*";
            k--;
        }
        
        int l = i - 1;
        
        while(l) {
            cout<<"*";
            l--;
        }
        
        int m = num - i + 1;
        while(m) {
            cout<<m;
            m--;
        }
        
        cout<<endl;
        i++;
        
        
        
    }
}
