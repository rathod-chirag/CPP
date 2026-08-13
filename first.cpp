#include<iostream>
using namespace std;

int main(){

    cout<<"Hello World ! I am Chirag."<< endl;
    cout<<"First: Chirag"<<endl<<"Last:  Rathod" << endl;

    // Variables & Data Types.
    // 1. Integer Variables
    int num = 10;
    int age = 20;
    cout << num << endl;
    cout << age << endl;

    // 2. Charecters
    char ch = 'A';
    char C = 'B';
    cout << ch << endl;
    cout << C << endl;

    // 3. float
    float PI = 3.14f;
    cout << PI <<endl;

    // 4. boolean
    bool f = false;
    bool t = true;
    cout << f << endl;
    cout << t << endl;

    // 5. Double
    double nm = 13.456789;
    cout << nm << endl;

    // Type casting.

    char grade = 'A';
    int value = grade;
    cout << value << endl;

    float nb = 100.99;
    int nbv = int(nb);
    cout << nbv << endl;

    // Input
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << n << endl;

    // Operators

    // 1. Arithmetic Operators. (+,-,*,/,%)
    int a = 5;
    int b = 4;
    cout << "Sum: " << a+b << endl;
    cout << "Dif: " << a-b << endl;
    cout << "Mul: " << a*b << endl;
    cout << "Div: " << a/b << endl;
    cout << "Mod: " << a%b << endl;

    // 2. Relational (<,>,==,<=,>=,!=)
    cout << (a<b) <<endl;
    cout << (a>b) <<endl;
    cout << (a>=b) <<endl;
    cout << (a<=b) <<endl;
    cout << (a==b) <<endl;
    cout << (a!=b) <<endl;

    // 3. Logical (||,&&,!)
    cout << ((a<b) && (a!=b)) <<endl;
    cout << ((a>b) || (a!=b)) <<endl;
    cout << (!(a>=b)) <<endl;


    return 0;
}