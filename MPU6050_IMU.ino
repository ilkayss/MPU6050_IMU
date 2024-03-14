#include <MPU6050.h>
#include <Wire.h>

MPU6050 sensor;
int ivmeX , ivmeY , ivmeZ , GyroX , GyroY , GyroZ;



void setup() {
    Serial.begin(9600);
    Wire.begin();
    sensor.initialize();

}

void loop() {

  sensor.getAcceleration(&ivmeX , &ivmeY , &ivmeZ);
  sensor.getRotation(&GyroX , &GyroY , &GyroZ);

  Serial.print("ivme X = ");
  Serial.print(ivmeX);


  Serial.print("| ivme Y = ");
  Serial.print(ivmeY);
  

  Serial.print("| ivme Z = ");
  Serial.print(ivmeZ);

  Serial.print("| Gyro X = ");
  Serial.print(GyroX);

  Serial.print("| Gyro Y = ");
  Serial.print(GyroY);

  Serial.print("| Gyro Z = ");
  Serial.println(GyroZ);

 delay(2000);


}
