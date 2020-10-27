# Smart parking system using IOT

## A smart parking system created using IR sensors,Servo motor and Arduino Uno to effectively display the filled slots and empty slots.

#### What it does ?
- As the IR sensor fixed near the Motor detects a car entry,the Servo motor opens up the barricade.
- The app displays the no.of empty slots before the car enters (via the bluetooth sensor).
- Once the car is parked in a slot, the slot is marked as filled .
- Through a series of if-else statements , the process of finding empty and filled slots is repeated for each car entry.
- Once all slots are filled , the barricade does not open up . (indicating that there are no empty slots).

#### Components used:
- Arduino Uno
- IR sensors
- Bluetooth sensor
- Servo Motor
- LED

#### To run:
- Do the required setup and connect Arduino Uno to the system.
- Download and install Arduino IDE.
- Start the arduino IDE.
- file->Open->Select the .ino file that you want to open.
