# 🪖 SafeRide – Smart Helmet Based Alcohol Detection System

## 📌 Overview

SafeRide is a smart safety system designed to reduce road accidents caused by drunk driving and riding without a helmet.

The system integrates an alcohol (gas) sensor, helmet detection mechanism, motor control system, and an ESP32 microcontroller to create a preventive road safety solution.

It ensures:
- The vehicle does not start if the helmet is not worn.
- The vehicle speed reduces automatically if alcohol is detected.

---

## 🚨 Problem Statement

A large percentage of road accidents occur due to drunk driving and failure to wear helmets. Manual enforcement alone is not sufficient to prevent such incidents.

SafeRide introduces an automated safety mechanism that ensures compliance before the vehicle operates.

---

## 💡 Proposed Solution

SafeRide uses:

- Alcohol Sensor (Gas Sensor Simulation)
- Helmet Detection Switch
- Stepper Motor (Vehicle Engine Simulation)
- ESP32 Microcontroller (Control Unit)

### ⚙️ System Logic

| Condition | Action |
|-----------|--------|
| Helmet NOT worn | Engine does not start |
| Helmet worn + Alcohol Low | Vehicle runs normally |
| Helmet worn + Alcohol High | Vehicle speed reduces |

---

## 🛠️ Tech Stack

- ESP32 (Arduino Framework)
- C/C++ (Arduino)
- Wokwi Simulation Platform
- Gas Sensor (Analog Output)
- ULN2003 Driver + Stepper Motor

---

## 🔌 Components Used

- ESP32 DevKit v4
- Gas Sensor (MQ Simulation)
- Slide Switch (Helmet Detection)
- ULN2003 Motor Driver
- Stepper Motor

---

## 🧠 Working Principle

1. The gas sensor continuously monitors alcohol levels.
2. The helmet switch checks if the helmet is worn.
3. ESP32 processes both inputs.
4. Based on the conditions:
   - The motor is stopped,
   - Runs normally,
   - Or runs at reduced speed.

The system operates in real-time and ensures preventive safety control.

---

## 🎥 Simulation Demo

You can view the working simulation and demonstration video here:

🔗 **Google Drive Link:**  
https://drive.google.com/file/d/1oow1osmABIp8lGxsFnfmIvYPNK4blOH9/view?usp=sharing

---

## 🎯 Key Features

- Real-time alcohol detection
- Helmet compliance enforcement
- Automatic speed regulation
- Low-cost and scalable prototype
- Preventive road safety approach

---

## 🌍 Future Scope

- GPS integration for emergency tracking
- SMS alerts to emergency contacts
- Cloud-based monitoring
- Buzzer and OLED display alerts
- Data logging for traffic authorities

---

## 🏆 Conclusion

SafeRide demonstrates how embedded systems and IoT concepts can be applied to improve road safety. By combining alcohol detection and helmet verification, the system provides a proactive solution to prevent accidents before they occur.

---

## 👩‍💻 Developed By

Team SafeRide  
Hackathon Prototype Project
