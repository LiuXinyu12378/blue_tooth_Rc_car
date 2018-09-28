//This example code is in the Public Domain (or CC0 licensed, at your option.)
//By Evandro Copercini - 2018
//
//This example creates a bridge between Serial and Classical Bluetooth (SPP)
//and also demonstrate that SerialBT have the same functionalities of a normal Serial

#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
uint8_t pwm1 = 2;
uint8_t pwm2 = 4;

int speed_=100;
BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  SerialBT.begin("BLUE_TOOTH_RC_car"); //Bluetooth device name
  ledcAttachPin(pwm1, 1); // assign RGB led pins to channels
  ledcAttachPin(pwm2, 2);
  ledcSetup(1, 1200, 8); // 1.2 kHz PWM, 8-bit resolution
  ledcSetup(2, 1200, 8);
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  if (SerialBT.available()) {
    if(SerialBT.read()=='8')  //加速
    {
      ledcWrite(1, 255);
      }
        if(SerialBT.read()=='1')  //前进
    {
      ledcWrite(1, speed_);
      }
       if(SerialBT.read()=='2')  //后退
    {
      ledcWrite(2, speed_);
      }
       if(SerialBT.read()=='3')  //左转
    {digitalWrite(13, HIGH);
      ledcWrite(1, speed_);
      }
    if(SerialBT.read()=='4')  //右转
    {digitalWrite(14, HIGH);
      ledcWrite(1, speed_);
      }
             if(SerialBT.read()=='6')  //左退
    {digitalWrite(14, HIGH);
      ledcWrite(2, speed_);
      }
             if(SerialBT.read()=='7')  //右退
    {digitalWrite(13, HIGH);
      ledcWrite(2, speed_);
      }
          if(SerialBT.read()=='5')  //停止
    {
      ledcWrite(1, 0);ledcWrite(2, 0);digitalWrite(13, LOW);digitalWrite(14, LOW);
      }
  }
  delay(20);
}
