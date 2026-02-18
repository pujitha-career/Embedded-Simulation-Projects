# Switch-Controlled LED Sequencer (Ascending & Descending)

## 📌 Project Overview

This project demonstrates a bidirectional LED chaser system controlled using two switches. One switch activates an ascending LED sequence, while the other activates a descending sequence. When neither switch is active, all LEDs turn off.

This project is ideal for learning digital I/O control, timing, and sequencing logic in embedded systems.

---

## 🎯 Features

* 8 LED sequential lighting pattern
* Ascending LED animation control
* Descending LED animation control
* Dual switch input handling
* Simple and beginner-friendly embedded logic

---

## 🛠 Hardware Requirements

* Arduino board
* 8 LEDs
* 2 Push switches
* Resistors (220Ω recommended)
* Breadboard & jumper wires

---

## 🔌 Pin Configuration

### LEDs

| LED  | Pin |
| ---- | --- |
| LED1 | 13  |
| LED2 | 12  |
| LED3 | 11  |
| LED4 | 10  |
| LED5 | 9   |
| LED6 | 8   |
| LED7 | 7   |
| LED8 | 6   |

### Switches

| Switch                | Pin |
| --------------------- | --- |
| Switch 1 (Ascending)  | A0  |
| Switch 2 (Descending) | A1  |

---

## ⚙ How It Works

* Press **Switch 1** → LEDs run from LED1 → LED8
* Press **Switch 2** → LEDs run from LED8 → LED1
* No switch pressed → All LEDs OFF

Each LED lights up sequentially with a 500 ms delay to create a running light effect.

---

## 🚀 Applications

* Embedded systems learning
* LED animation projects
* Basic automation experiments
* Educational lab demonstrations

---

## ▶ How to Run

1. Connect components as per pin configuration.
2. Upload the code to the Arduino board.
3. Press switches to observe LED sequences.

---

## 📚 Learning Concepts

* Digital input/output control
* Function-based program design
* Timing using delays
* Hardware interfacing

---

## 🤝 Contribution

Feel free to improve animation timing, add patterns, or optimize the logic.

---

## 📄 License

Open-source — free to use for learning and experimentation.

---

⭐ If you like this project, consider starring the repository!

