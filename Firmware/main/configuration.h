#include "pins.h"


unsigned int localPort = 2390;      // local port to listen for UDP packets

IRsend irsend(IRPin);  // An IR LED is controlled by GPIO pin 4 (D2)

ESP8266WebServer server(80);
/* Set these to your desired credentials. */
const char *ssid = "FRITZ!Box 7580 FT";
const char *password = "77646358944419242515";

const char* ntpServerName = "time.nist.gov";

const int NTP_PACKET_SIZE = 48;

//Intensive cleaning
const int intensive_cleaning_frequency = 3; //
