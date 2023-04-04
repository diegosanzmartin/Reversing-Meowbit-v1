#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

// Pin definitions for TFT display
#define TFT_CS     5
#define TFT_RST    -1
#define TFT_DC     4
#define TFT_SCLK   18
#define TFT_MOSI   23

// Initialize TFT display object
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup() {
  tft.initR(INITR_BLACKTAB); // Initialize the display with black background
  tft.fillScreen(ST7735_BLACK); // Clear the screen with black color
  tft.setAddrWindow(0, 0, 127, 159); // Set the display address window to (0, 0) and (127, 159)
}

void loop() {
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
  Serial.printf("Reversing-Meowbit-v1: Display buttons");
  Serial.printf("\n----------------------------------\n");

  // Display different colors on the screen every 2 seconds
  tft.fillScreen(ST7735_RED); // Set the screen color to red
  delay(2000); // Wait for 2 seconds

  tft.fillScreen(ST7735_GREEN); // Set the screen color to green
  delay(2000); // Wait for 2 seconds

  tft.fillScreen(ST7735_BLUE); // Set the screen color to blue
  delay(2000); // Wait for 2 seconds
}
