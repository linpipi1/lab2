#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include "BMI.h"
using namespace std;

int main()
{
    Bmi output1;
  
    float value_height,value_mass;
    
   ifstream inFile("file.in",ios::in);
   /* if(!inFile)
    {
        cerr<<"File could not be open!"<<endl;
        exit(1);
    }*/
    ofstream outFile("file.out",ios::out);
   /* if(!outFile)
    {
        cerr<<"File could not be open!"<<endl;
        exit(1);
    }*/


    while(inFile>>value_height>>value_mass)
    {	
	output1.setHeighValue(value_height);
	output1.setMassValue(value_mass);
        output1.operationBmiValue();
        output1.rankBmiValue(output1.operationBmiValue());
        outFile<<output1.operationBmiValue()<<"\t"<<output1.rankBmiValue(output1.operationBmiValue())<<endl;

    }
    
    return 0; 
}

