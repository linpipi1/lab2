#include<string>
using namespace std;
class Bmi
{
    public:
            void setHeighValue(float value_height);
            float getHeightValue();
            void setMassValue(float value_mass);
            float getMassValue();
            float operationBmiValue();
            string rankBmiValue(float bmi);
    private:
    float height,mass;

};
