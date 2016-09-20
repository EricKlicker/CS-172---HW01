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
void ex02();
void ex03();
void ex04();
void ex05();
int doubleValue(int);
int add(int, int);
int addOne(int & );
void ex05();
void arrayOut(int[], int);
void arraySearch(int[], int);

int doubleValue (int l)
{
int x;
x=2*1;
return x;
}

//functions used within example
void arrayOut(int array1[], int r)
{
    cout << "Array values: ";
    for (int e=1; e<6; e++)
    {
        cout << array1[e] << " ";
    }
    cout << endl;
}

void arraySearch(int array3[], int t)
{
    cout <<"Enter a Value: ";
    int test;
    bool tester =false;
    cin >> test;
    for (int h=1; h <t; h++)
    {
        if (test == array3[h])
        {
            tester = true;
        }
    }
    if (tester == false)
        cout << test << " is not in the array" << endl;
    else
        cout << test << "is in the array" <<endl;
}

int addOne(int & g)
{
    int h;
    h = g+1;
    return h;
}

int add(int m, int n)
{
    int x;
    x = m + n;
    return x;
}


void ex02()
{
    //Declare  a variable hasPassedTest , and initialize  it to true
    bool hasPassedTest = true;
    srand((unsigned int)time(NULL));
    
    //Declares two variables x and y which are initialized to random numbers, then outputs whether x is greater than or equal to y

    int x = rand();
    int y = rand();
if (x > y)
    cout<< "x is greater than y"<< endl;
else
    cout << "y is greater than x" <<endl;
    
    
    //Declares a variable numberOfShares and prompts the user for a value, and outputs whether the value is less than 100
    int numberofshares;
    cout <<"Enter number of shares:" << endl;
    cin >> numberofshares;
    if (numberofshares < 100)
        cout << "Your output is less than 100" << endl;
    
    //Prompts the user for a box width and a book width, then outputs if the box width is evenly divisible by the book width
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
    
    //Prompts the user for the shelf life of a box of chocolate and the outside temperature, then decreases the shelf life by 4 if the outside temperature is greater than 90
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
    //Prompt the user for the area of a square. Output the length of the diagonal for that square
    double area;
    cout << "Please input the area of a square: ";
    cin >> area;
    double length = sqrt(area);
    double diagonal;
    diagonal = sqrt(2)*length;
    cout << "The length of the diagonal is: " << diagonal << endl;
    
    //Prompt the user for a yes or no response (y or n) using a char variable. Output “yes” if the user gave you a ‘y’, and “no” if the user gave you ‘n’.
    char response;
    cout << "please enter a yes(y) or no(n): ";
    cin >> response;
    if ( response == 'y')
        cout << "You chose YES" << endl;
    else
        cout << "You chose NO" << endl;
    
    //Initialize a char variable tab to the tab character.
    char tab = '\t';
    
    //Declare a string variable mailingAddress, and prompt the user for their mailing address.
    string mailingaddress;
    cout << "Please etner your mailing address: ";
    cin >> mailingaddress;
    cout << "Your mailing address is: " << mailingaddress << endl;
    
    //Initialize a string variable to the empty string.
    string empty = " ";
    cout << endl;
}

void ex04()
{
    //Write code to ask the user for a number between 1 and 10. Loop until the user gives a valid inpu
    int choice;
     cout << "Please enter a number from 1-10: " << endl;
    while (choice < 1 || choice > 10)
    cin >> choice;
    
    //Use the number in part (a) to output the sum of the cubes from 1 to the number given (by cube, I mean that for a given number x, determine x3)
    int sum;
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    for (int i =1; i <= number; i++)
    {
        int temp01 = pow ( i , 3 );
        sum += temp01;
    }
    cout << sum << endl;
    
    //outputs the number of asterisks
    int j=1;
    do {
        cout << "*";
        j++;
    } while (j<=number);
    cout << endl;
    
    //outputs the even integers from 2 to 40
    int temp02;
    for (int k = 1; k <= 20; k++)
    {
        temp02 = 2 * k;
        cout << temp02 << " ";
    }
    cout << endl;
    cout << endl;
    
    //uses a function to double the number that was inputed
    doubleValue (5);
    
    //adds two random numbers with a seperate function
    srand((unsigned int)time(NULL));
    int m = rand () % (100 - 0);
    int n = rand () % (100 - 0);
    int u = add(m, n);
    cout << u << endl;
    
    //function that adds one to its parameter
    int g = number;
    int y =addOne(g);
    cout << "Value plus one is " << y << endl << endl;
}


 void ex05()
{
   //write a loop to read in 5 integers and puts them in an array
    int arraySize=5;
    int erics[arraySize];
    cout << "Enter five integers; ";
    for (int v=1; v <6; v++)
    {
        cin >> erics[v];
    }
    
    //Find the values in the array
    int sum=0;
    for (int p=1; p <6; p++)
    {
        int temp1 = erics[p];
        sum+=temp1;
    }
    cout << "Sum: " << sum << endl;
    
    //Finds the product of the values in the array
    int product =1;
    for (int i =1; i<6; i++)
    {
        int temp2 = erics[i];
        product *= temp2;
    }
    cout << "Prouct: " << product << endl;
    
    //calls a function that outputs the values in the array
    arrayOut(erics, arraySize);
    
    //calls a function that allows the user to enter a value and test
    arraySearch(erics,arraySize);
    
}

int main()

{
    ex02();
    ex03();
    ex04();
    ex05();
}
