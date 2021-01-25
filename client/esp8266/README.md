# Esp8266 for fan

**Directory Structure**

```
.
├── README.md
├── inc (include lib for arduino ide)
│   ├── arduinoWebSockets (for tcp socket)
│   └── nlohmann (for json parser)
├── main
│   ├── LedManager.h (define class to process timeline and config FASTLED)
│   ├── json.hpp (for json parsing)
│   ├── main.ino (main code for fan)
│   └── test.json (sample timeline foramt for fan)
└── old_codes (old testing files)
    ├── fan (testing for LedManager)
    └── main_1 (testing for ntp)
```
