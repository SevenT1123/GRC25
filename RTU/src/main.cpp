#include "Arduino.h"
#include "FS.h"
#include "SD.h"
#include "SPI.h"

#define SD_CS 10  // Change this based on your ESP32-S3 board wiring

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("Initializing SD card...");

    if (!SD.begin(SD_CS)) {
        Serial.println("SD card initialization failed! Check wiring or SD format.");
        return;
    }

    Serial.println("SD Card initialized successfully!");

    File file = SD.open("/test.txt", FILE_WRITE);
    if (!file) {
        Serial.println("Failed to open file for writing!");
        return;
    }

    Serial.println("Writing numbers 1 to 10 to 'numbers.txt'...");
    for (int i = 1; i <= 100; i++) {
        file.print("Number: ");
        file.println(i);
    }
    file.close();
    Serial.println("Done writing!");

    Serial.println("\nReading 'numbers.txt':");
    file = SD.open("/test.txt");
    if (!file) {
        Serial.println("Failed to open file for reading!");
        return;
    }

    while (file.available()) {
        Serial.write(file.read());  
    }
    file.close();

    Serial.println("\nFile read complete!");
}

void loop() {}
