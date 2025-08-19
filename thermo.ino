#include "max6675.h" // library by Adafruit
//#include <LiquidCrystal_I2C.h> // Uncomment if you want to use a LCD

// Pin MAX6675
int thermoDO  = 50;  // MISO
int thermoCS  = 5;   // CS
int thermoCLK = 52;  // SCK

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

// LCD
//LiquidCrystal_I2C lcd(0x27, 16, 2); // Alamat 0x27, 16x2 LCD

void setup() {
  Serial.begin(9600);
  Serial.println("MAX6675 test");
  delay(500); // tunggu sensor stabil

  // Inisialisasi LCD
  //lcd.init();
  //lcd.backlight();
  //lcd.setCursor(0, 0);
  //lcd.print("MAX6675 Ready");
  //delay(1000);
  //lcd.clear();
}

void loop() {
  // Baca suhu
  float tempC = thermocouple.readCelsius();

  // Serial Monitor
  Serial.print("C = "); 
  Serial.print(tempC, 2);
  Serial.println("°C");

  // LCD
  //lcd.setCursor(0, 0);
  //lcd.print("Temp: ");
  //lcd.print(tempC, 2);
  //lcd.print("°C   ");

  delay(500); // minimal 250ms agar MAX6675 update
}
