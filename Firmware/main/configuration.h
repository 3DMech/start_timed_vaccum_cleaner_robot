#include "pins.h"


unsigned int localPort = 2390;      // local port to listen for UDP packets

IRsend irsend(IRPin);  // An IR LED is controlled by GPIO pin 4 (D2)

ESP8266WebServer server(80);
/* Set these to your desired credentials. */
const char *ssid = "ADDYOURSSID";
const char *password = "ADDYOURPW";

const char* ntpServerName = "time.nist.gov";

const int NTP_PACKET_SIZE = 48;

//Intensive cleaning
const int intensive_cleaning_frequency = 3; //

//MQTT
#define MQTT_SERVER "YOURMQTT"  //you MQTT IP Address
#define mqtt_username "mqtt_username" 
#define mqtt_password "mqtt_password"
#define mqtt_clientname "mqtt_clientname"

//OTA
#define otahostname "RoboVac"
#define otapassword "123"

char const* actionTopic11 = "storage/Vacuumcleaner/start_auto";
char const* actionTopic12 = "storage/Vacuumcleaner/start_corner";
char const* actionTopic13 = "storage/Vacuumcleaner/start_max";
char const* actionTopic14 = "storage/Vacuumcleaner/end";

char const* confirmTopic11 = "storage/Vacuumcleaner/confirm_start_auto";
char const* confirmTopic12 = "storage/Vacuumcleaner/confirm_start_corner";
char const* confirmTopic13 = "storage/Vacuumcleaner/confirm_start_max";
char const* confirmTopic14 = "storage/Vacuumcleaner/confirm_end";
