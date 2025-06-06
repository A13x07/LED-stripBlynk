/*************************************************************

  This is a simple demo of sending and receiving some data.
  Be sure to check out other examples!
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL5wN_0BeXN"
#define BLYNK_TEMPLATE_NAME "LEDstrip"
#define BLYNK_AUTH_TOKEN "QsCwazviZHGunDtYpIsjMj0qdpWHn7aq"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "TP-Link_FFB0";
char pass[] = "36829682";
BlynkTimer timer;

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V0)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
  Serial.println("Value : "+ String(value));

  if(value) digitalWrite(25, HIGH);
  else digitalWrite(25, LOW);

  // Update state
  Blynk.virtualWrite(V1, value);
}
BLYNK_WRITE(V10)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
  Serial.println("Value : "+ String(value));

  if(value) digitalWrite(26, HIGH);
  else digitalWrite(26, LOW);

  // Update state
  Blynk.virtualWrite(V100, value);
}
BLYNK_WRITE(V11)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
  Serial.println("Value : "+ String(value));

  if(value) digitalWrite(27, HIGH);
  else digitalWrite(27, LOW);

  // Update state
  Blynk.virtualWrite(V110, value);
}
BLYNK_WRITE(V12)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
  Serial.println("Value : "+ String(value));

  if(value) digitalWrite(14, HIGH);
  else digitalWrite(14, LOW);

  // Update state
  Blynk.virtualWrite(V120, value);
}

// This function is called every time the device is connected to the Blynk.Cloud
BLYNK_CONNECTED()
{
  // Change Web Link Button message to "Congratulations!"
  Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
}

// This function sends Arduino's uptime every second to Virtual Pin 2.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V2, millis() / 1000);
}

void setup()
{
  // Debug console
  Serial.begin(115200);
  pinMode(25, OUTPUT);//RED
  pinMode(26, OUTPUT);//GREEN
  pinMode(27, OUTPUT);//BLUE
  pinMode(14, OUTPUT);//WHITE
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
  timer.setInterval(1000L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
