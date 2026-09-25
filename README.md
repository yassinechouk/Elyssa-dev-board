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
