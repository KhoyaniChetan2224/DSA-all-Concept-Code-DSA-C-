#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch = 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[], int n){
    int s = 0; 
    int e = n-1;

    while (s<=e){
        if (toLowerCase(a[s]) != toLowerCase (a[e]) )
        {
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while (s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength (char name[]){

    int count = 0;
    for (int i=0; name[i]!='\0'; i++){

        count++;
    }
    return count; 
}

char getMaxOccCharater(string s){

    int arr[26] = {0};

    //creat an array of count charcters

    for ( int i=0; i<s.length(); i++){
        char ch = s[i];
        //lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z'){
            number = ch -'a';
        }
        else{//Uppercase
            number = ch - 'A';
        }
        arr [number]++;
    }
    int maxi = -1, ans = 0;
    for ( int i=0; i<26; i++){
        if (maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ ans;
    return finalAns;
}

int main (){

    char name [20];

    cout << " Enter your name " << endl;
    cin >> name;
    //name[20] = '\0';
  
    cout << " Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;

    reverse (name, len);
    cout << " Your reverse name is ";
    cout << name << endl;
 
    cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout << "CHARACTER is " << toLowerCase('b') << endl;
    cout << "CHARACTER is " << toLowerCase('C') << endl;

    

    string  s;
    cin >> s;

    cout << getMaxOccCharater(s) << endl;

    return 0;
}