//
//  main.cpp
//  HW 1 CS 172
//
//  Created by Eric Klicker on 9/8/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;
void ex02()
{
    bool hasPassedTest = true;
    srand((unsigned int)time(NULL));
    int x = rand();
    int y = rand();
if (x > y)
    cout<< "x is greater than y"<< endl;
else
    cout << "y is greater than x" <<endl;
    
    int numberofshares;
    cout <<"Enter number of shares:" << endl;
    cin >> numberofshares;
    if (numberofshares < 100)
        cout << "Your output is less than 100" << endl;
    
    int boxwidth;
    int bookwidth;
    cout << "Please enter book width and box width" << endl;
    cout <<"book width:";
    cin >> bookwidth;
    cout <<"box width:";
    cin >> boxwidth;
    
    if (boxwidth % bookwidth == 0)
        cout << "The box width is evenly divisible by the book width" << endl;
    else
        cout << "The box width IS NOT evenly divisible by the book width" << endl;
    
    int boxofchocolates;
    int outsideTEMP;
    cout <<"Please enter a shelf life for a box of chocolates (in weeks):";
    cin >> boxofchocolates;
    cout << "Please enter the outside temperature";
    cin >> outsideTEMP;
    
if (outsideTEMP > 90)
    boxofchocolates -= 4;
    cout << "The shelf life of the box of chocolates is now: " << boxofchocolates << endl;
 
}

void ex03()
{
    double area;
    cout << "Please input the area of a square: ";
    cin >> area;
    double length = sqrt(area);
    double diagonal;
    diagonal = sqrt(2)*length;
    cout << "The length of the diagonal is: " << diagonal << endl;
    
    char response;
    cout << "please enter a yes(y) or no(n): ";
    cin >> response;
    if ( response == 'y')
        cout << "You chose YES" << endl;
    else
        cout << "You chose NO" << endl;
    
    char tab = '\t';
    
    string mailingaddress;
    cout << "Please etner your mailing address: ";
    cin >> mailingaddress;
    cout << "Your mailing address is: " << mailingaddress << endl;
    
    
}


int main()

{
    //ex02();
    ex03();
    
    
}
