#include <BlynkSimpleEsp32.h>  // Include Blynk library for ESP32

// Blynk Auth Token
char auth[] = "aLYHe75tWXhDCo9Ulon1DnrzlhjCzxpk";  // Replace with your Blynk Auth Token
#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_TEMPLATE_ID "TMPL6f8qgrz7Z"
#define BLYNK_TEMPLATE_NAME "WaterTank"

// Wi-Fi credentials
char ssid[] = "SyntaxError";        // Replace with your Wi-Fi network's name (SSID)
char pass[] = "Er2030iox!";    // Replace with your Wi-Fi network's password



// Simulated data (distance in cm)
int simulatedDistance = 100;  // Start with a fixed value

void setup() {
  Serial.begin(9600);  // Start serial communication
  Blynk.begin(auth, ssid, pass);  // Initialize Blynk with your auth token and Wi-Fi credentials
}

void loop() {
  // Simulate changing sensor data
  simulatedDistance = random(0, 200);  // Generate a random number between 0 and 200

  // Send the simulated distance value to Virtual Pin V0
  Blynk.virtualWrite(V0, simulatedDistance);  // Send the data to Blynk

  // Print the simulated data to the serial monitor for debugging
  Serial.print("Simulated Distance: ");
  Serial.println(simulatedDistance);
  
  delay(1000);  // Wait for 1 second before updating again
}
