#include <string>
#include <functional>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>


struct voltageCalculator{
    double determineVoltage(int QEvac, int deltaT, double erorrBand)
    {
        // good stuff here
        std::cout << i << '\n';
    }
}

/*
 - QEvac = the amount of heat to be removed from the chamber
 - deltaT = the difference between the desired temperature and the current temperature
*/

voltageCalculator makeVoltageCalculator(double* reqdAmp, double* QIntc, double* QDIntc,   ){
    return voltageCalculator();
}

// WHAT if we precalculate some interpolated points such that
// most 

double determineVoltage(int QEvac, int deltaT, double erorrBand){
    /*
     TEC1-12706
     encode the discrete differential field graphs
     and interpolate
    
     AmpsReqd:        1.5     3.0,    4.5      6.0
     Qintercep:       17,     33,     50,      58
     QDeltaTinterc:   27,     44,     63,      67
     Q/D_slope:       -0.629  -0.750  -0.793   -0.865 (CALCULATED)
     VDeltaInterc     3.5     7.0     11.0     14.1
     VDetla@80:       5.0     8.8     12.3     15.7
     V/D_Slope:       0.0187  0.0225  0.01625  0.02 (CALCULATED)
    
     DeltaRange:      0-80   
     QRange:          0-60   
     VRange:          0-18
        
     plugin in DeltaT and ReqdAmps to VolageChart
    
     max 67 combo
     request 40Q, 20deltaT
     
    1. Determine AmpReqd
    For Q30, DT20

    MaxAmpRef(1.5)  = 17 - 0.629(20)       = DT(1.5)  = 4.42  Q
    MaxAmpRef(3)    = 33 - 0.750(20)       = DT(3)    = 18    Q
    i(3.75)         = 41.5  - 0.7715(20)   = DT(3.75) = 26.07 Q
    i(4.125)        = 45.75 - 0.78225(20)  = DT(4.125) = 30.1 Q
    MaxAmpRef(4.5)  = 50    - 0.793(20)    = DT(4.5)  = 34.14 Q
    MaxAmpRef(6)    = 58    - 0.865(20)    = DT(6)    = 40.7  Q

    interpolate the same inbetween amp series
    RefA     Vo      V/D * DT
    1.5A  => 5.0V + 0.0187(20)
    3.0A  => 8.8V + 0.0225(20)
    3.75i => 10.55V + 0.0194(20)
    4.125i=> 11.425V + .01785(20) = 11.782V
    4.5A  => 12.3V + 0.0163(20)
    6.0A  => 15.7V + 0.02(20)

    Spent 48W to move 30W {{Eff% 62%}}
    return 4.125 @ 11.782V = 48.6W


    Q[0,60]
    DT[0,70]
    DField - Winput


    24v - 29v
    6.0Vea - 7.25Vea

    */
}

void setup(){
    // put your setup code here, to run once:
    // init the temp sensor?
    // connect to wifi
    // get the forecast
    //
    // discover any sensors
    //
}

void loop(){
    // put your setup code here, to run once:
    // init the temp sensor?
    // connect to wifi
    // get the forecast

    /*
        read the current voltage level
        determine what needs to be done to maintain 
            an appropriate voltage level for the TEC modules
    */
}