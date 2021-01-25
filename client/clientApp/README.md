# clientApp
This directory is for RPI.
## How it works
1. On the startup of RPI, pm2 will execute pm2_startup.sh.
2. pm2_startup.sh will first turn off all light on the dancer. Then execute our main program client.js
3. client.js is responsible for communication with laptop
4. Once the server sends the play message, client.js spawns a child process to execute clientApp.
5. The same mechanisim : client.js spawn git_force_pull.sh to make rpi pull from github
6. the timeline json file path is defined in inc/definition.h

**Directory Structure and Description**
```
.
├── Makefile (make the binary file for controlling light and led)
├── README.md
├── client.js (main file for rpi to execute)
├── clientApp -> bin/clientApp (a link to binary file)
├── clientApp.md
├── clientApp_sim.cpp (file for testing time sync)
├── core (what the f**k)
├── git_force_pull.sh (script for client.js to call)
├── inc
│   ├── Data.h
│   ├── EL.h
│   ├── LED_strip.h
│   ├── definition.h
│   ├── nlohmann
│   └── pca9685.h
├── json -> ../../data/json/
├── lib
│   └── libpca9685.a
├── make_clientApp.sh (script for client.js to call)
├── pm2_startup.sh (script for pm2 to start on startup)
├── scan.sh (for scanning devices in same local network)
├── setup_pm2.sh (for setting up pm2 configuration)
├── src (source files for clientApp)
│   ├── Data.cpp
│   ├── LED_strip.cpp
│   ├── clientApp.cpp
│   └── control.hpp
└── testLED.md
```
clientApp readme [here](./clientApp.md)

