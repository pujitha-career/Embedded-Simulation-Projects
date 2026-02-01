# Arduino-Based 8 LED Control System Using Push Button Switch

## 📌 Project Overview
This project demonstrates a simple embedded control system where eight LEDs are controlled using a single push button switch interfaced with an Arduino Uno. When the switch is pressed, all LEDs turn ON, and when the switch is released, all LEDs turn OFF. The project is designed and simulated using Proteus (ISIS Professional).

---

## 🎯 Objective
To design and implement a basic digital I/O control system using Arduino Uno that operates multiple output devices (LEDs) through a single input switch.

---

## 🛠 Hardware Components

| S.No | Component        | Specification        | Quantity |
|----|-----------------|----------------------|----------|
| 1  | Arduino Uno     | ATmega328P           | 1        |
| 2  | LED             | Red                  | 8        |
| 3  | Resistor        | 330Ω                 | 8        |
| 4  | Push Button     | Momentary Switch     | 1        |
| 5  | Pull-down Resistor | 10kΩ              | 1        |
| 6  | Connecting Wires| Jumper Wires         | As required |

---

## 💻 Software Used
- Arduino IDE  
- Proteus ISIS Professional  

---

## 🔌 Pin Configuration

| Arduino Pin | Connected Component |
|-----------|---------------------|
| D13–D6    | LEDs (LED1–LED8)    |
| A0        | Push Button Switch  |
| GND       | Common Ground       |

---

## ⚙️ Working Principle
The push button is connected to the Arduino’s analog pin A0 and configured as a digital input. When the button is pressed, the Arduino reads a HIGH signal and turns ON all eight LEDs. When the button is released, a LOW signal is detected, and all LEDs are turned OFF. This demonstrates digital input reading and digital output control.

---

## 🌍 Real-Time Applications
- Industrial panel indication systems  
- Emergency alert lighting systems  
- Home automation lighting control  
- Testing and debugging digital I/O pins  
- Educational embedded systems training  

---

## ✅ Advantages
- Simple and easy to understand  
- Low-cost hardware components  
- Real-time digital input-output control  
- Ideal for beginners in embedded systems  

---

## 🔮 Future Enhancements
- Wireless control using Bluetooth or Wi-Fi  
- Individual LED control using multiple switches  
- Mobile app-based control  
- Power optimization using sleep modes  

---

## 🧾 Conclusion
This project provides hands-on experience with Arduino digital I/O operations and serves as a foundation for more advanced embedded and automation projects.

---

## 👤 Author
Created by "Kurakula Pujitha"

Electronics and Simulation Skills

