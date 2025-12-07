The LED strip is controlled using an ESP 32 over the internet using the platform Blynk - either the website, or the app.
Its colours of red, green, blue and white can all be set to on or off simultaneously or individually.

Description:
 This project demonstrates how to control an RGBW LED strip using an ESP32 and the Blynk platform (mobile app + web dashboard). Each channel of the strip (Red, Green, Blue, White) is turned on and off through a 4-channel relay.

The project is created as an educational IoT example — to demonstrate remote device control.

Technologies
 • ESP32 DevKit v1
 • Blynk IoT Platform (App + Web Dashboard)
 • Arduino IDE
 • Wokwi Simulator

Simulation:

Project in the simulator Wokwi can be found below:
https://wokwi.com/projects/424801262978532353

IMAGES:

1. Diagram


![LED-Strip](https://github.com/A13x07/LED-stripBlynk/raw/main/schematic.png)

2. Project photo

   
![LED-Strip](https://github.com/A13x07/LED-stripBlynk/raw/main/LED-StripBlynkpic1.jpg)

The links to the products that make up the project can be found below:

LED-Strip --> https://www.amazon.co.uk/dp/B07WWX63XW?ref=cm_sw_r_cso_wa_apan_dp_5QYDJGM8SVP2CV2QYRP6&ref_=cm_sw_r_cso_wa_apan_dp_5QYDJGM8SVP2CV2QYRP6&social_share=cm_sw_r_cso_wa_apan_dp_5QYDJGM8SVP2CV2QYRP6&starsLeft=1&skipTwisterOG=1

Power Supply --> https://www.amazon.co.uk/dp/B08ZSNVX3P?ref=cm_sw_r_cso_wa_apan_dp_C1F2B22K3CYZ5F9C79SR&ref_=cm_sw_r_cso_wa_apan_dp_C1F2B22K3CYZ5F9C79SR&social_share=cm_sw_r_cso_wa_apan_dp_C1F2B22K3CYZ5F9C79SR&starsLeft=1&skipTwisterOG=1

Module Relay --> https://www.amazon.co.uk/ELEGOO-Optocoupler-Compatible-Official-Raspberry/dp/B06XK6HCQC/ref=sr_1_5?crid=2LXC1FY4RTJJ6&dib=eyJ2IjoiMSJ9.cy6a3kHCbtqTGUX4E_mI0-hld17a339H8EuuAZqDD1Y3-4YD_pg_X0lkb9BTvv3wR5yktMrpJEh9A36trdAOWHJKCH45zdAizhxrGNl2RUs0g0YefVVP62U2_gTRI8J5cv8h9H94l7IOsGv0ffqFZdBgPvMSt2-_Gnhc6XgFoHT4CzMneE7wwTDCv1MeYi0pkIHNlr9Wzn4jt8WdIuTbwqE4EXd6m3cTCpQFxNK1IMF1-5OMjeBSCzwvmtzmJx03PhbLEhkZ3iWv4yuzkltuvCk-2PntCcHn8G5EVLpdqik.Zz-8GLL_Igo9zIQJ9aOw5FVSYW_58J40eycZG9cjwPk&dib_tag=se&keywords=esp32%2Brelay%2Bmodule%2B4%2Bchannel&qid=1746819172&sprefix=esp32%2Brelay%2Bmodule%2B4%2Bchannel%2Caps%2C80&sr=8-5&th=1

ESP-32 --> https://www.ebay.co.uk/itm/204154021433?_skw=esp+32&itmmeta=01JHK90B26WDKJKXT4HASY067N&hash=item2f88872639:g:jEYAAOSwE~xjc87W

The project uses the following Blynk virtual pins:
- V0 – Red channel
- V1 – Green channel
- V2 – Blue channel
- V3 – White channel

ESP32 Pin → Relay Channel
GPIO12 → Red
GPIO13 → Green
GPIO14 → Blue
GPIO27 → White

IMPORTANT:
ESP32 GND, relay GND, and LED strip GND must be connected together.
Otherwise the relays will not switch correctly.

This project requires:
- Blynk library v1.2.0 or later
- ESP32 Arduino core v2.0.17 or later

Description step by step how we implement it:
 1. Blynk → Create Template
 2. Add Datastreams → V0–V3
 3. Add Buttons (Switch mode)
 4. Bind buttons to V0–V3
 5. Copy Auth Token
 6. Paste Auth Token in sketch

Installation & Run
1. Open the file LEDstripBlynk.ino in the Arduino IDE
2. Select the board: Tools → Board → ESP32 Dev Module
3. Install the Blynk library (v1.2.0+)
4. Enter:
  • your Wi-Fi SSID
  • password
  • Blynk Auth Token
5. Connect the ESP32 via USB
6. Open the Serial Monitor and make sure

License
MIT License


Author
Created by A13x07
