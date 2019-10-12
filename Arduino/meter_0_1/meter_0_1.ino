// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      300
int sizeImg = 180;

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 130; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
    pixels.setPixelColor(1, pixels.Color(20,0,0)); // Moderately bright green color.
        pixels.show(); // This sends the updated pixel color to the hardware.

    delay(1000);
    pixels.setPixelColor(1, pixels.Color(0,0,0)); // Moderately bright green color.
        pixels.show(); // This sends the updated pixel color to the hardware.

    delay(500);
    pixels.setPixelColor(1, pixels.Color(0,20,0)); // Moderately bright green color.
        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1000);
pixels.setPixelColor(1, pixels.Color(0,0,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(500);
    pixels.setPixelColor(1, pixels.Color(0,0,20)); // Moderately bright green color.
        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1000);
pixels.setPixelColor(1, pixels.Color(0,0,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(500);

  for(int i=0;i<sizeImg;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,1,0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).

  }
}
