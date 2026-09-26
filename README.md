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

**Linux / macOS:** install Python 3.

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

Open **Tools → Serial Monitor**. Press **RESET** to see the first messages.

---

## Tools menu (defaults)

| Menu | Value |
|---|---|
| Board | Elyssa |
| Port | Elyssa on COMx |
| USB Mode | USB-OTG (TinyUSB) |
| USB CDC On Boot | Enabled |
| USB Firmware MSC On Boot | Disabled |
| USB DFU On Boot | Disabled |
| Upload Mode | USB-OTG CDC (TinyUSB) |
| CPU Frequency | 240MHz (WiFi) |
| Flash Mode | QIO 80MHz |
| Flash Size | 8MB (64Mb) |
| Partition Scheme | 8M with spiffs (3MB APP/1.5MB SPIFFS) |
| PSRAM | Disabled |
| Core Debug Level | None |
| Erase All Flash Before Sketch Upload | Disabled |
| JTAG Adapter | Disabled |

---

## USB modes

| | Mode 1 - Everyday (default) | Mode 2 - Debug (JTAG) |
|---|---|---|
| USB Mode | USB-OTG (TinyUSB) | Hardware CDC and JTAG |
| Upload Mode | USB-OTG CDC (TinyUSB) | UART0 / Hardware CDC |
| JTAG Adapter | Disabled | Integrated USB JTAG |

### Mode 1 → Mode 2

1. **USB Mode → Hardware CDC and JTAG**
2. **Upload**
3. **Upload Mode → UART0 / Hardware CDC**
4. **JTAG Adapter → Integrated USB JTAG**

### Mode 2 → Mode 1

1. **USB Mode → USB-OTG (TinyUSB)**
2. **Upload**
3. **Upload Mode → USB-OTG CDC (TinyUSB)**
4. **JTAG Adapter → Disabled**

If an upload fails: **hold BOOT, press and release RESET, release BOOT**, then **Upload** again.
