#include "BMI.h"
using namespace std;

void Bmi::setHeighValue(float value_height)
{
    height=value_height;
}
float Bmi::getHeightValue()
{
    return height;
}
void Bmi::setMassValue(float value_mass)
{
    mass=value_mass;
}
float Bmi::getMassValue()
{
    return mass;
}
float Bmi::operationBmiValue()
{
    float bmi;
    bmi=mass/((height/100)*(height/100));
    return bmi;
}
string Bmi::rankBmiValue(float bmi)
{
    string bmirank;
    if(bmi<15){bmirank="Very severely underweight";}
    if(bmi>=15&&bmi<16){bmirank="Severely underweight";}
    if(bmi>=16&&bmi<18.5){bmirank="Underweight";}
    if(bmi>=18.5&&bmi<25){bmirank="Normal";}
    if(bmi>=25&&bmi<30){bmirank="Overweight";}
    if(bmi>=30&&bmi<35){bmirank="Obese Class I (Moderately obese)";}
    if(bmi>=35&&bmi<40){bmirank="Obese Class II (Severely obese)";}
    if(bmi>=40){bmirank="Obese Class III (Very severely obese)";}
    return bmirank;
}
