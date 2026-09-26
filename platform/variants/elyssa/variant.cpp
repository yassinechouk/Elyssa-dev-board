#include "Arduino.h"

// Welcome banner printed by hello_elyssa()
static const char ELYSSA_BANNER[] = R"ELYSSA(



                                              -+
                                           ...++...                                                     .+-.                 --..--
           . ..                            ...+#...                                                     .-.                   .##.                 ...
           .##.                               -+           ..                                                                +-..-+                .#-
           --++.                                          ###.                                                                                    ..#-..
                                                          .-.                                                                                      ...
                                                                          .
                                           .-+.                          .#-...
                                           .-+.                          .-...-+.     .-#.
                                                                         .#-..+#.   .##--.
                       ..                                                  -+-..#. -++..#.   ......                                  +##+
                     ..-+..                                 .-+.            .-+#+- #+ -+- .+#+--+-.                                   ..
                     ..-+..                                 +..#-      +--+++-. .+.++.+-.-+.. .+#.   ++
                       ..                        .--..      #+ -#    .. +#....+#..#.-.  .#+.-+#-   .#..+.
                                               .++...+#-    #. .#.  ---- .###-..#-.#-   ++#+..    -#- .#.                        -#
                                                 -#..  +#. .#+.#+...#--#.   .....++#-..-#...###-. -#. .#.                     ..+###..
                                                  .#+...#-. .#.#. -#. .#.         -#+.#+  -######.-#..#+                      ..+###..
                                                    .-+-.--+-.-.  -#. +#.         .##+-.  -####+-..-#-.  ......                  -#
                                                .....     ..###   .#.-#. .++++-.-..###. .++.#+..   -.. -++-...--++.
                             .               .-#----+#.. .. .-##.  .#- .+#  ..-+...###.  #++   ...+####-..   --+.
                            .#.             .#-..   .-+--++---.#+...#-.#-.---+- ..-#-  .++ .---##+-..   .-+++..
                           -+#+-.             .-+###+..   ..-+####-.### .-..... .+##+ .--.-###-.. ..-##..
                            .-.                          ...   ######-.   .-#.  .+##+.######.     .-####-  ..+##.+.
                                                       -####++  .-###-   ++..#-..+#####+-. .+-+.  +#####-.+--..+-.
                                                       -#####+    .-### .#...#..####+...   ++..+. .+###..#-..+#-
                                                       .-###.-#.   .###..# +#- .####- .#. .#. .#.  .#. .-#+++. .---.
    -..                                       ..-#####..   .+++-.  .+##...#-  .+###  .+.#-.#..+#. .+..-#-....+#-...-#-..
   .+.                                      .-++.-   ..-#+---- .+.   +##-.-   +###+ .#..-#..#-+.  ++-##--++++++-...--+-.                      ..  ...
.#######+                                    .+########- .. .-####-  ..###  .####-  .#..#+. #+  .###...        -###-.                         .+-.#.
   .+..                                          ....        ..######-.###  .####-  .-+-#. .#+.#####-..######.                                 .##-
    -.                                             ..####.+#####.  .#######-.###.     -+ ..####-    .+#....  -#-.                             --...+.
                                                  .+-   .-+. .+.      .+########.    .##-#####----.   ..+#+++#+-.
                                                 .#-..-+#-  +#+.        .-######.   -+#####---#+--+-+++..
                   .+.                           .-+++-.  -#####+.       .######. .+#####..   .+. -#. .+#+.
                  .+#-       ..                           -#####+.         +####..-###+     .-###+..#-.  ++.                                              .+-.
                           .###.                            ###.           +####-+####.     ######- .##...#-.                       .+                    .+-.
                             ..                                             .#######-       -+###-.   .-----.                      .-#-.
                                                                            .######          .....                                  ..
                                                                              +####
                                         .-####..                             +####
             .#.                        -##-..-#+.                            +####
           .#####                      -#-.###+.##.                           +####                                 .-------.
             .#.                       -#+.+-.#.++.                           +####                                  .+####..
                                       .-######.+#.                           +####                                   -#+-
                                         ...+#-.-##.                          +#####-                                .+#-
                                            +#.#--##.                       .#######-.                              .-##+.
                                            +#.##-.##+..                   .-########+.                          ..-##+.#-
                                            +#.##+-.++###++++.           .+############++.               .-+++#######+..#+                ..+..
                                           .#..+####-...----###############################################+----....-##.#+                ..+..
                                           ##.##############-..............................................+#######--+#.#-
                                          .#+.+#######..######################################################..###-.-#.+#+                                ..
                                           .+-.---++++--###-.+##+ -###..#### .#### .###+ -###-.+###..###- +###--#######+ +#-.                            ..++..
                                           .## .-+##++----++###################################################----...-++.-#+.                           ..++..
                                            -## -+...-######-..................................... ..........++########-....##-                            ..
                                             -##. -###......+#################################################+-......-####  .##.
                                              .###-. .--####+---.....................     ............. .. ..+#####+---..--+###+.
                                    .+#+.       .+#--.     ....++######++.--++++++----###+--++++++++---+#####-..  --+++---.... .--.
                                     .+##-    -###+++###+   -##+--.  .--###+.   .+++##---+##+-    .++###-...++###. . -+###+...+##+.
                                       .-######--.  .--.#####...        ..++######++.     .-+#######++.      .-+######+...-####-..
                                            ...             .                                                  . .....
                                            ...   ...####...     ...+###-.          ..+++-.           ...####+...      ....
                                            +##-++###-..-###-....###+...##---.   ---##---+#++-    .---###-...+###.....###..                                .+-..-+
  .-.+                                        .+++-        .#####+       .+-+#####-+.     .-+#######++-        .+#####+ .                                   .-##.
  .++-                                                                      ......           .......                                                       .-+.-+-
                                                                                                                                                           ..   ..




                .                    -##-+##+. .-###..    ..######.     .+#####..   +##     +##. +##.+##-. .+##+.   .########...
               .#.                   -###+-+##+##--##++ .-+#-----+#+. .+#+-----##+. +##     +##. +###+-+##+#+-+##+- .-------+##-
             -#####.                 -##-   .##+   .### .###     .##- -##-    .###. +##.    +##. +##.   -##-.  .##-  ........##-
               .#-                   -##-   .##+   .### .###     .##- -##-    .###.  +##.  ###   +##.   -##-   .##- .##########+
                .                    -##-   .##+   .### .###     .##- .##-    .###.  .-##-##+.   +##.   -##-   .##- .##+.....##-
                                     -##-   .##+   .###   -########.   .########+     -#####+    +##.   -##-   .##- .##+    .##-             .-+
                                     .--.   .--.   .---    .------       .-----.       .---.     ---.   .--.   .--. .--.    .--.             .-+.





                                 ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
                                 ║                                       --- ELYSSA  ---                                        ║
                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣
                                 ║                                           Ahla!                                              ║
                                 ║                                                                                              ║
                                 ║      Thabet mli7 felli bin idik. Hedhi mch juste pcb, hadhi awel dev board tounsia,          ║
                                 ║                         hadhi awel 5atwa sad9a f thneya jdida.                               ║
                                 ║                                                                                              ║
                                 ║           Kima Elyssa el malika eli harbet mel dholm bech tiktib teri5 Carthage              ║
                                 ║                bmo5ha w dhkeha w 3azimetha, a7na lyoum fi Moovma harbin                      ║
                                 ║              mel dholm mta3 ettaba3iya ettechnologiya eli n3ichou feha lyoum.                ║
                                 ║               w ma rdhinech bech no93dou te7et ra7met ghirna, nasta3mlou felli               ║
                                 ║                         yetefradh 3lina w nconsomiouw feli yeta3talna,                       ║
                                 ║                                                                                              ║
                                 ║          Moovma mch juste startup, hiya el 'movement' eli bech t5ali el9ayd yankasser,       ║
                                 ║                 Moovma Hiya el mo5 etounsi ki y9arrer yfok blastou fel 3alam.                ║
                                 ║                                                                                              ║
                                 ║           Kima el Zitouna etounseya m3ar9a fi trabna, thabta w 9weya w ma y9ala3ha           ║
                                 ║           7atta ri7, l'innovation mechi 7eker 3la cha3eb men cha3eb matansech eli            ║
                                 ║                        rak tounsi tari5ek kbir w majdek sebe9.                               ║
                                 ║                                                                                              ║
                                 ║            Moovma jetbech t9oul elli el hardware mte3na nasn3ouh bidina, bech nkounou        ║
                                 ║             a7rar w na7na barka eli nemlkou mfeta7 mosta9belena, wel 7a9 yetfak              ║
                                 ║                                       mayeta3tach.                                           ║
                                 ║                                                                                              ║
                                 ║          w Heka 3leh 2027 mch bech tkoun kima 2027. Bech nbadlou mab3adhna el mosta9bel.     ║
                                 ║           2027 bech ykoun el 3am elli Tounis twalli hiya elli t5alla9 el technologie,        ║
                                 ║          mch elli techriha. Thabet mli7, 5ater fel dev board hadhi, maktoub el mosta9bel     ║
                                 ║                                  elli bech nasn3ouh mab3adhna.                               ║
                                 ║                                                                                              ║
                                 ║            Tafaker dima: 'Tijri el rya7 kima tijri sfinetna'.. 5ater a7na el ry7,            ║
                                 ║            a7na el b7ar, w a7na sfinet Carthage el jdida elli mcheya lel mosta9bel.          ║
                                 ║                                                                                              ║
                                 ║            El khedma badet.. w el legacy mte3ek yabda lyoum, el moovma bdet bech             ║
                                 ║                      nraj3ou glory carthage: na3mlou Moovma sa7bi                            ║
                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣
                                 ║                                   Copyright © 2026 Moovma                                    ║
                                 ║                                      All Rights Reserved                                     ║
                                 ╚══════════════════════════════════════════════════════════════════════════════════════════════╝
)ELYSSA";

bool hello_elyssa(uint32_t wait_ms) {
  static bool serial_started = false;
  if (!serial_started) {
    Serial.begin(115200);
    serial_started = true;
  }

  unsigned long start = millis();
  while (!Serial && (millis() - start < wait_ms)) {
    delay(10);
  }
  if (!Serial) {
    return false;          // no monitor: skip the banner
  }
  delay(500);

  Serial.println(ELYSSA_BANNER);
  return true;
}

//
// IMU: LSM6DSV on its dedicated I2C bus (registers: ST datasheet DS13476)
//
#define ELYSSA_IMU_I2C 1             // I2C controller 1 = same controller as Wire1
#define I2C_TIMEOUT_MS 10

#define IMU_WHO_AM_I   0x0F          // fixed value 0x70
#define IMU_CTRL1      0x10          // accel: operating mode + ODR
#define IMU_CTRL2      0x11          // gyro:  operating mode + ODR
#define IMU_CTRL3      0x12          // BOOT | BDU | IF_INC | SW_RESET
#define IMU_CTRL6      0x15          // gyro full scale
#define IMU_CTRL8      0x17          // accel full scale
#define IMU_STATUS     0x1E          // bit0 XLDA, bit1 GDA, bit2 TDA
#define IMU_OUT_TEMP_L 0x20          // 20-21 temp, 22-27 gyro X/Y/Z, 28-2D accel X/Y/Z
#define IMU_OUTX_L_G   0x22
#define IMU_OUTX_L_A   0x28

#define IMU_ID         0x70
#define GYRO_DPS_LSB   0.00875f      // +-250 dps: 8.75 mdps/LSB
#define ACCEL_G_LSB    0.000061f     // +-2 g: 0.061 mg/LSB
#define TEMP_LSB_PER_C 256.0f        // 0 LSB = 25 C

static bool gyro_initialized = false;

// Reads len consecutive registers in one I2C transaction (needs IF_INC = 1)
static bool imu_read(uint8_t reg, uint8_t *buf, size_t len) {
  size_t count = 0;
  return i2cWriteReadNonStop(ELYSSA_IMU_I2C, GYRO_ADDR, &reg, 1, buf, len,
                             I2C_TIMEOUT_MS, &count) == ESP_OK && count == len;
}

static bool imu_write(uint8_t reg, uint8_t val) {
  uint8_t buf[2] = { reg, val };
  return i2cWrite(ELYSSA_IMU_I2C, GYRO_ADDR, buf, 2, I2C_TIMEOUT_MS) == ESP_OK;
}

// One 16-bit output (LSB first), scaled. NAN if the IMU is not started or on I2C error.
static float imu_read_scaled(uint8_t reg_l, float scale) {
  uint8_t b[2];
  if (!gyro_initialized || !imu_read(reg_l, b, 2)) return NAN;
  return (int16_t)(b[0] | (b[1] << 8)) * scale;
}

uint8_t elyssa_imu_read_reg(uint8_t reg) {
  uint8_t v = 0xFF;
  imu_read(reg, &v, 1);
  return v;
}

// Starts the IMU on its dedicated I2C bus (controller 1 = Wire1, pins SDA1/SCL1).
// If the sketch also uses Wire1, call Wire1.begin(SDA1, SCL1, 400000) BEFORE
// elyssa_imu_begin() (see TIPS_AND_KNOWN_ISSUES.md).
bool elyssa_imu_begin() {
  gyro_initialized = false;
  if (!i2cIsInit(ELYSSA_IMU_I2C) &&
      i2cInit(ELYSSA_IMU_I2C, SDA_gyro, SCL_gyro, 400000) != ESP_OK) return false;
  pinMode(INT_gyro, INPUT);

  uint8_t v;
  if (!imu_read(IMU_WHO_AM_I, &v, 1) || v != IMU_ID) return false;

  // Software reset, then wait until the IMU clears SW_RESET
  if (!imu_write(IMU_CTRL3, 0x01)) return false;
  uint32_t t = millis();
  do {
    delay(1);
    if (millis() - t > 50) return false;
  } while (!imu_read(IMU_CTRL3, &v, 1) || (v & 0x01));

  if (!imu_write(IMU_CTRL3, 0x44) ||   // BDU = 1, IF_INC = 1
      !imu_write(IMU_CTRL6, 0x01) ||   // gyro  +-250 dps (set before ODR)
      !imu_write(IMU_CTRL8, 0x00) ||   // accel +-2 g     (set before ODR)
      !imu_write(IMU_CTRL1, 0x06) ||   // accel 120 Hz, high-performance
      !imu_write(IMU_CTRL2, 0x06))     // gyro  120 Hz, high-performance
    return false;

  // Discard the first 3 samples: right after power-on they are not settled
  // (measured on Elyssa: the first 2 are wrong, about 20 ms)
  uint8_t skip = 3;
  t = millis();
  while (skip) {
    if (millis() - t > 500) return false;
    if (imu_read(IMU_STATUS, &v, 1) && (v & 0x03) == 0x03) {
      uint8_t b[14];
      if (imu_read(IMU_OUT_TEMP_L, b, sizeof(b))) skip--;   // reading clears the data-ready flags
    } else {
      delay(1);
    }
  }
  gyro_initialized = true;
  return true;
}

bool elyssa_imu_ready() {
  uint8_t s;
  return gyro_initialized && imu_read(IMU_STATUS, &s, 1) && (s & 0x03) == 0x03;
}

uint8_t elyssa_imu_whoami() { return elyssa_imu_read_reg(IMU_WHO_AM_I); }

float gyro_return_ax()  { return imu_read_scaled(IMU_OUTX_L_G,     GYRO_DPS_LSB); }
float gyro_return_ay()  { return imu_read_scaled(IMU_OUTX_L_G + 2, GYRO_DPS_LSB); }
float gyro_return_az()  { return imu_read_scaled(IMU_OUTX_L_G + 4, GYRO_DPS_LSB); }
float accel_return_ax() { return imu_read_scaled(IMU_OUTX_L_A,     ACCEL_G_LSB); }
float accel_return_ay() { return imu_read_scaled(IMU_OUTX_L_A + 2, ACCEL_G_LSB); }
float accel_return_az() { return imu_read_scaled(IMU_OUTX_L_A + 4, ACCEL_G_LSB); }

float elyssa_imu_temperature() {
  return 25.0f + imu_read_scaled(IMU_OUT_TEMP_L, 1.0f / TEMP_LSB_PER_C);
}

// Reads temperature, gyro and accel in ONE transaction: all values from the same sample.
// Any pointer can be NULL. Returns false if the IMU is not started or on I2C error.
bool elyssa_imu_read(float gyro[3], float accel[3], float *temp_c) {
  uint8_t b[14];
  if (!gyro_initialized || !imu_read(IMU_OUT_TEMP_L, b, sizeof(b))) return false;
  int16_t raw[7];
  for (int i = 0; i < 7; i++) raw[i] = (int16_t)(b[2 * i] | (b[2 * i + 1] << 8));
  if (temp_c) *temp_c = 25.0f + raw[0] / TEMP_LSB_PER_C;
  for (int i = 0; i < 3; i++) {
    if (gyro)  gyro[i]  = raw[1 + i] * GYRO_DPS_LSB;
    if (accel) accel[i] = raw[4 + i] * ACCEL_G_LSB;
  }
  return true;
}
