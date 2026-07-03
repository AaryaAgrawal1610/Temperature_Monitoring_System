# Temperature Monitoring System using Arduino & LM35

A simple and efficient **Temperature Monitoring System** built using an **Arduino Uno** and an **LM35 temperature sensor**. The system continuously measures the ambient temperature, converts the analog sensor output into degrees Celsius, and displays the readings on the Serial Monitor.

## Features

* Real-time temperature monitoring
* Displays temperature in degrees Celsius
* Uses the LM35 precision temperature sensor
* Easy-to-build Arduino project
* Continuous sensor data acquisition
* Suitable for learning sensor interfacing and embedded systems

## Hardware Requirements

* Arduino Uno/Nano
* LM35 Temperature Sensor
* Breadboard
* Jumper Wires
* USB Cable

##  Circuit Connections

| LM35 Pin | Arduino Pin |
| -------- | ----------- |
| VCC      | 5V          |
| VOUT     | A0          |
| GND      | GND         |

##  How It Works

1. The LM35 senses the surrounding temperature.
2. The sensor outputs an analog voltage proportional to the temperature.
3. Arduino reads the analog value from pin **A0**.
4. The analog reading is converted into voltage.
5. Since the LM35 outputs **10 mV per °C**, the voltage is converted into temperature in degrees Celsius.
6. The temperature value is displayed on the Serial Monitor every second.

##  Temperature Calculation

Voltage = (Analog Reading × 5.0) / 1023
Temperature (°C) = Voltage × 100

Since the LM35 produces **10 mV (0.01 V) per °C**, multiplying the voltage by **100** gives the temperature in Celsius.

##  Applications

* Weather monitoring
* Room temperature measurement
* Industrial temperature monitoring
* Laboratory experiments
* HVAC systems
* Educational embedded systems projects
* IoT sensor nodes

##  Future Enhancements

* Display temperature on a 16×2 LCD or OLED
* Data logging to an SD card
* Wireless monitoring using Bluetooth or Wi-Fi
* Mobile application integration
* Cloud-based temperature monitoring
* High-temperature alarm using a buzzer
* Real-time graph visualization
