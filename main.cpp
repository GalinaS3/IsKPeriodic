#include "functions.h"

int main()
{
    setlocale(LC_ALL, "");
    
    string str1 = "foobarfoobafoobar";

    int K1 = 6;
    IsKPeriodic(str1, K1);
        
    int K2 = -5;
    IsKPeriodic(str1,  K2);

    string str2 = "abcabcabcabcabc";

    int K3 = 3;
    IsKPeriodic(str2, K3);

    int K4 = 5;    
    IsKPeriodic(str2, K4);

    int K5 = 100;
    IsKPeriodic(str2,  K5);

    int K6 = 4;
    IsKPeriodic(str2, K6);

    return 0;
}