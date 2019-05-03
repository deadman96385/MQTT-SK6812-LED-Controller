/* Add your keys & rename this file to auth.h */

#ifndef _AUTH_DETAILS
#define _AUTH_DETAILS

#define WIFI_SSID "ssid"
#define WIFI_PASSWORD "password"
int status = WL_IDLE_STATUS;

#define MQTT_SERVER "mqtt server ip"
#define MQTT_USER ""
#define MQTT_PASSWORD ""
#define MQTT_PORT 1883
char* MQTT_STATE_TOPIC_PREFIX = "led/"; // e.g. led/<deviceName> and led/<deviceName>/set
#define MQTT_AVAIL_TOPIC "/availability"

#define DATA_PIN_LEDS   15  // D8 on ESP8266
#define DATA_PIN_RELAY  13  // D7 on ESP8266

/******************************** CONFIG SETUP *******************************/
#define LED_COUNT_MAXIMUM 800 // Memory allocation. This will reduced the refresh rate so make as small as the maximum number of LED's you have in your config below.
int ledCount = 30; // Default number of leds if no specific config has been set
char* deviceName = "led";
byte maxBrightness = 255;

#endif
