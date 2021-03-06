//
//  main.cpp
//  Lesson4-368-2
//
//  Created by Yushen Chang on 2/20/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//


#include <iostream>

#include <fstream>

#include <cstdlib>

#include <cmath>


using namespace std;

//Start of main body
int main()
{
    //Variables of declaration
    ifstream instream;
    char filename[12]; //When entering txt file only 12 char or less
    double num,sum=0,average;
    int n=0;
    cout << "enter file name" << endl;
    cin >> filename; //(example: homework.txt)
    
    //Open file
    instream.open(filename,ios::in);
    //Start of if statement to test if this program works at all
    if (! instream) {
        cout << "error" << endl;
        return 0;
    } //End
    
    //Start of while loop: Info from page 335 of class text book.
    while (instream>>num)
    {
        sum = sum + num;
        n++;
    } //End of While loop.
    
    //Calculate Average from txt file
    average=sum/n;
    instream.close();
    cout << "average is: " <<average<<endl;
    cout << "Goodbye" << endl;
    
    
    return 0;
    }