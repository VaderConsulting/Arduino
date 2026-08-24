# Arduino

Combined Arduino archive: Dave Robinson's sketches (clocks, Model 3 battery SOC LEDs, thermistor, HID joystick stub, I2C scanner) plus the `libraries` working copies used to build them. Sketches target AVR and ESP8266 boards; libraries include Adafruit, SparkFun, Paul Stoffregen, Seeed, and others. Published so the whole bench tree can be browsed in one GitHub repo; individual sketches and libraries also exist as sibling repos.

**Source last updated:** 2020-09-03  
**Language:** C++ / Arduino  
**Target:** Arduino AVR / ESP8266 and related cores  
**Output:** sketches and libraries

## Solution structure

| Project | Language | Type | Purpose |
|---------|----------|------|---------|
| `HID_Joystick` | C++ / Arduino | sketch | USB HID joystick Visual Micro stub |
| `I2CScanner` | C++ / Arduino | sketch | Nick Gammon I2C bus scanner |
| `LEDClock` | C++ / Arduino | sketch | TM1637 + DS1307 clock with encoder |
| `OLEDClock` | C++ / Arduino | sketch | SSD1306 + DS1307 clock with encoder |
| `M3Battery` | C++ / Arduino | sketch | EVTV Tesla M3 SOC LED monitor |
| `M3Battery_Wifi` | C++ / Arduino | sketch | SOC monitor with ESP8266 Wi-Fi |
| `Thermistor` | C++ / Arduino | sketch | Analog thermistor to Celsius |
| `libraries/` | C++ / Arduino | library collection | Working copies of Adafruit, SparkFun, PJRC, Seeed, and other Arduino libraries |

## How to open

Open any `*.ino` in the Arduino IDE. Visual Micro users can open `HID_Joystick/HID_Joystick.vcxproj` or `OLEDClock/OLED_Clock/OLED_Clock.vcxproj` in Visual Studio.

## Attribution and provenance

Dave Robinson / VaderConsulting sketches plus third-party Arduino libraries kept as working copies. Nick Gammon wrote `I2CScanner`. Library authors are named in each `libraries/*/library.properties`. See `THIRD_PARTY_NOTICES.md`.

## License

MIT © 2026 VaderConsulting for Dave's sketches. Third-party libraries keep their original licences; see `THIRD_PARTY_NOTICES.md` and files inside `libraries/`.
