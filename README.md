# 2-wheeler-Crash-Detection-System
IoT Based Accident and Rash Driving Alert System
This project uses an ESP8266 microcontroller, MPU6050 accelerometer, and GPS module to detect accidents and rash driving. Upon detecting a significant disturbance, the system sends an alert to a server with the GPS location of the incident.

Components Used:
ESP8266 WiFi Module
MPU6050 Accelerometer and Gyroscope
GPS Module
LiquidCrystal Display (LCD)
Blynk App for notification

Libraries Required:
#include <LiquidCrystal.h>
#include <TinyGPS++.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <Adafruit_MPU6050.h>
#include <BlynkSimpleEsp8266.h>

Configuration Constants:
Blynk template and authentication details
WiFi SSID and password
MPU6050 I2C addresses and register configurations
Sensitivity scale factor for the accelerometer
Threshold values for detecting disturbances

Connections
MPU6050:
SDA to D2
SCL to D1
LCD:
RS to D0
EN to D3
D4 to D4
D5 to D5
D6 to D6
D7 to D7

Setup Function:
Initializes Blynk, Serial, LCD, and MPU6050.
Prints "Mini Project" on the LCD as a startup message.

Loop Function
Runs the Blynk process.
Reads accelerometer values from MPU6050.
Calculates the change in acceleration.
Displays the current driving status on the LCD.
Checks for significant disturbances and sends an alert if detected.

Additional Functions
I2C_Write(): Writes data to a specified register of the MPU6050.
Read_RawValue(): Reads accelerometer and gyroscope data from MPU6050.
MPU6050_Init(): Configures the MPU6050 with the required settings.
wifi_123(): Connects the ESP8266 to the WiFi network.
gps_123(): Reads GPS data and prints location and time.

Alerts
If a significant disturbance is detected, an alert is sent to the Blynk server with the location.
The GPS location and timestamp are displayed on the LCD.

Note
Make sure to replace the Blynk authentication token, WiFi SSID, and password with your actual credentials.

Sample Code
The complete code for this project is provided above. Ensure you have all the required libraries installed and configured in your development environment.

How to Use
Upload the code to your ESP8266 microcontroller.
Connect the hardware as per the connections specified.
Open the serial monitor to observe the output.
Use the Blynk app to receive alerts.
For any issues or further customization, refer to the respective library documentation and the datasheet for the MPU6050 sensor.
