# PSoC6 DHT11 Sensor Interfacing
In this project we interface PSoC6 with the DHT11 Humidity and Temperature Sensor using PSoC Creator IDE. 

Hardware used: 
1. [PSoC62 BLE Pioneer Kit](https://www.cypress.com/documentation/development-kitsboards/psoc-6-ble-pioneer-kit-cy8ckit-062-ble)
2. [DHT11 Humidity and Temperate Sensor](https://components101.com/dht11-temperature-sensor)

Connections:
Sensor  <------>  MCU  
 VCC              3.3V  
 GND              GND  
 DATA             P5.6  

Connect a 4.7K pull up resistor between DATA pin of sensor and VDD of the MCU. 
 
Datasheet for the sensor can be found [here](https://components101.com/sites/default/files/component_datasheet/DHT11-Temperature-Sensor.pdf)

