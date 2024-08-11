## Description

PS5 Dualsense Controller component for esp-idf, tested on esp-idf version 5.2.2

Based on: https://github.com/rodneybakiskan/ps5-esp32

The library done by rodneybakiskan uses the old build system of esp-idf which is outdated as of version 5.2.2.

The library works similarly if not identical to the prior works.

Also see:

PS3 controller: https://github.com/jvpernis/esp32-ps3

PS4 controller: https://github.com/aed3/PS4-esp32

## Configuring your project ###

This snippet is taken from the [PS3 Controller Library](https://github.com/jvpernis/esp32-ps3). <br>
Make sure you have configured your project correctly in order to use your PS3 controller.
In your project folder, run `make menuconfig` and configure your project with the following steps:
- Navigate to `Component config  --->` and press <kbd>Enter</kbd> to open the component config menu.
- Navigate to `Bluetooth  --->` and press <kbd>Enter</kbd> to open the Bluetooth config menu.
- Select `[] Bluetooth` and press <kbd>Y</kbd> to enable Bluetooth
- Navigate to `Bluetooth controller  --->` and press <kbd>Enter</kbd> to open its menu.
- Navigate to `Bluetooth controller mode` and press <kbd>Enter</kbd> to show the controller mode options.
- Select `BR/EDR Only` and press <kbd>Enter</kbd> to confirm the choice.
- Press <kbd>E</kbd> to go back to the Bluetooth menu.
- If it exists, navigate to `Bluetooth Host` and press <kbd>Enter</kbd> to show the host options.
- Select `Bluedroid - Dual-mode` and press <kbd>Enter</kbd> to confirm the choice.
- Navigate to `[] Bluedroid Enable  --->` and press <kbd>Y</kbd> to enable Bluedroid if it isn't already, then press <kbd>Enter</kbd> to open its menu.
- Navigate to `Classic Bluetooth` and press <kbd>Y</kbd> to enable it
- Navigate to `SPP` and press <kbd>Y</kbd> to enable it
- Press <kbd>S</kbd> to save the configuration.



