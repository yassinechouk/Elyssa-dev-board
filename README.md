# Elyssa Dev Board

ESP32-S3FN8 based development board by Moovma.

## Features

- ESP32-S3FN8
- 8 MB Flash
- USB Programming
- Dedicated Gyroscope I2C
- SD Card SPI
- Primary SPI
- PWM support
- Arduino IDE support

---

## Getting started (Arduino IDE)

### 1. Install the board package

1. Install [Arduino IDE 2](https://www.arduino.cc/en/software).
2. Open **File → Preferences** and paste this URL in **Additional boards manager URLs**:

   ```
   https://raw.githubusercontent.com/yassinechouk/Elyssa-dev-board/main/elyssa-arduino/package_moovma_elyssa_index.json
   ```

3. Open **Tools → Board → Boards Manager**, search **Elyssa**, and click **Install**.
   The compiler and tools are downloaded automatically (several hundred MB, the first time only).

### 2. Connect the board

1. Plug the board in with a USB-C **data** cable.
2. Select **Tools → Board → Moovma Elyssa → Elyssa**.
3. Select **Tools → Port →** the port labelled **Elyssa**.

Keep the other **Tools** options at their default values.

### 3. Upload your first sketch

1. Open **File → Examples → 01.Basics → Blink**.
2. Click **Upload**. The on-board LED starts blinking.

### If the upload fails

Put the board in download mode manually: **hold BOOT, press and release RESET, then release BOOT**.
Select the port that appears and click **Upload** again. This is usually needed only once.

### Serial Monitor

Open **Tools → Serial Monitor**. Messages printed at the very start of `setup()` can be missed:
press **RESET** with the monitor open to see them.

---

## USB settings (Tools menu)

| Setting | Default | What it does |
|---|---|---|
| **USB Mode** | Hardware CDC and JTAG | Uses the ESP32-S3 built-in USB: serial port + JTAG debugging. Windows shows *USB JTAG/serial debug unit*, the Arduino IDE shows **Elyssa**. |
| **USB CDC On Boot** | Enabled | `Serial` goes to the USB-C port. If **Disabled**, `Serial` goes to the UART0 header pins (TX/RX) and nothing appears over USB-C. |
| **Upload Mode** | UART0 / Hardware CDC | The IDE resets the board automatically before each upload (no button needed). |
| **JTAG Adapter** | Integrated USB JTAG | Kept for compatibility, it has no effect: debugging always uses the built-in USB JTAG. |

Keep these defaults unless you know why you change them.

> **Package 1.0.1:** the default USB Mode is **USB-OTG (TinyUSB)**. The board shows as *Elyssa* in Windows too,
> and Upload Mode must stay on **USB-OTG CDC (TinyUSB)**. JTAG debugging is not available in this mode.

### JTAG debugging

JTAG debugging (breakpoints, step by step) works only with **USB Mode = Hardware CDC and JTAG**.
Support for the IDE **Debug** button (OpenOCD and GDB tools) will come in a next package version.
On Windows, the JTAG interface may need a WinUSB driver.
