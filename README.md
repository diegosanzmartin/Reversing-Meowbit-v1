# Reversing-Meowbit-v1
Hardware reversing of the MeowBit device developed by KittenBot for the Xueersi Coding platform.

<img src="images/meowbit-hw-top.png" width="300" /> <img src="images/meowbit-hw-down.png" width="300" />

## Leds

## Buttons

| Button    | Pin       | GPIO      | Mode         |
| --------- | --------- | --------- | ------------ |
| ↑         | 24        | 2         | INPUT_PULLUP |
| ↓         | 16        | 13        | INPUT_PULLUP |
| ←         | 12        | 27        | INPUT_PULLUP |
| →         | 7         | 35        | INPUT        |
| A         | 6         | 34        | INPUT        |
| B         | 14        | 12        | INPUT_PULLUP |


## Sensors

## Display

| Pin Display | Pin ESP32 | GPIO      | Mode       |
| ----------- | --------- | --------- | ---------- |
| 1           |           |           | NC         |
| 2           | GND       |           | GND        |
| 3           |           |           | LED-       |
| 4           |           |           | LED+       |
| 5           | GND       |           | GND        |
| 6           | 3         | EN        | RST        |
| 7           | 26        | 4         | A0         |
| 8           | 37        | 23        | SDA        |
| 9           | 30        | 18        | SCK        |
| 10          | VCC       |           | VCC        |
| 11          | VCC       |           | IOVCC      |
| 12          | 29        | 5         | CS         |
| 13          | GND       |           | GND        |
| 14          |           |           | NC         |
