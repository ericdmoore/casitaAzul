/*

>> Observables

sensor OAT OutdoorAirTemp
sensor SFT SolarFurnaceTemp
 - https://www.adafruit.com/product/381

sensor HUM Humidity(Outdoor)
sensor PIR MotionSensor(Indoor)
sensor DEW DewPoint(Outdoor) (Calculattion)

sensor LUX LuminositySensor
    https://www.wemos.cc/en/latest/d1_mini_shield/ambient_light.html
    https://www.adafruit.com/product/1980
sensor RAD RadiationSensor (Calculattion)
sensor WBT WetBulbTemp (Calculattion)

T current dry bulb temper
RH current relative humidity

vp = 6.11 * 10^(7.5T/(237.7+T)) * RH/100
WBD = 243.5 * log(vp/6.112) / (17.67-log(vp/6.112)) - T
WBT = T - WBD

or from https://www.omnicalculator.com/physics/wet-bulb
Tw​ =T * arctan(0.151977(RH%+8.313659)1/2) + arctan(T+RH%)−arctan(RH%−1.676331) +0.00391838(RH%)^3/2arctan(0.023101RH%) −4.686035

>> Sensored Stocks

sensor WST WaterStoreTemp
sensor EWT EvapWaterTemp
sensor SOC StateOfCharge

>> Target

sensor IAT IndoorAirTemp


===============
Temp Probes
    - indoor, 
    - outdoor, 
    - IDU water store, 
    - ODU water store, 
    - solar furnace output
Motion PIR
Humidity - https://www.wemos.cc/en/latest/d1_mini_shield/dht.html
Luminosity
SOC - VoltageSensor : leads over shunt and terminals +, -, Shunt+

*/


const uint8_t setPoint = 5; //5c = 41f 

void setup() {
  // put your setup code here, to run once:
  // init the temp sensor?
  // connect to wifi
  // get the forecast

}

void loop() {
  // put your main code here, to run repeatedly:
  // determine error function
  // determine what continuous activations levels means
    // drive the peltier via varrying voltage?
    // IGBT?
}
