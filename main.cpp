//
//  main.cpp
//  Plagiarism_Project
//
//  Created by Angeline Alex on 11/5/16.
//  Copyright © 2016 Angeline Alex. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <cmath>
#include "KMPheader.h"
#include "LCSSheader.h"
#include "RabinKarp.h"
using namespace std;

int main () {
   
    string files[]={"Computers_Tomorrow.txt","Computers_Today.txt","Computers_backthen.txt", "Big Data.txt",
    "Clock.txt","Cryptography.txt","Global Warming.txt","Mountains.txt","Oak Tree.txt","Pluto.txt","Business.txt","Language.txt","Laptop.txt","Threads.txt","Networks.txt","Biology.txt","Physics.txt","Weather.txt","Document.txt","Hierarchy.txt"};
    //========================KMP============================
    
    KMPheader k;
    clock_t k1,k2;
    k1=clock();
    k.KmpFunction(files);
    k2=clock();
    cout<<"====================================================================="<<endl;
    cout<<"Total time taken by KMP: "<<(double)(k2-k1)/CLOCKS_PER_SEC<<" milliseconds"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<endl<<endl;
    
     //========================KMP---LCSS============================
  
    LCSSheader l;
    clock_t l1,l2;
    l1=clock();
    l.LCSSFunction(files);
    l2=clock();
    cout<<"====================================================================="<<endl;
    cout<<"Total time taken by LCSS: "<<(double)(l2-l1)/CLOCKS_PER_SEC<<" milliseconds"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<endl<<endl;
    //========================LCSS---RABIN KARP============================
   
    clock_t r1,r2;
    RabinKarp r;
    r1=clock();
    r.Rabin_Karp_Function(files);
    r2=clock();
    cout<<"====================================================================="<<endl;
    cout<<"Total time taken by RABIN-KARP: "<<(double)(r2-r1)/CLOCKS_PER_SEC<<" milliseconds"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<endl<<endl;
    
   
  
  cout<<"##############################################################Rabin Karp###################################"<<endl;
    
  
    cout<<"TIME COMPARISON:"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"KMP       : "<<(double)(k2-k1)/(CLOCKS_PER_SEC*1000)<<" seconds"<<endl;
    cout<<"LCSS      : "<<(double)(l2-l1)/(CLOCKS_PER_SEC*1000)<<" seconds"<<endl;
    cout<<"RABIN-KARP: "<<(double)(r2-r1)/(CLOCKS_PER_SEC*1000)<<" seconds"<<endl;
    
   
    //========================RABIN KARP============================
    
    return 0;
}

