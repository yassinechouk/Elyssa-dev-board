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

#define ELYSSA_IMU_I2C 1   // I2C controller 1 = same controller as Wire1
#define I2C_TIMEOUT_MS 10
static bool gyro_initialized = false;

static uint8_t gyro_read_reg(uint8_t reg) {
  uint8_t val = 0xFF;
  size_t count = 0;
  i2cWriteReadNonStop(ELYSSA_IMU_I2C, GYRO_ADDR, &reg, 1, &val, 1, I2C_TIMEOUT_MS, &count);
  return val;
}

static bool gyro_write_reg(uint8_t reg, uint8_t val) {
  uint8_t buf[2] = { reg, val };
  return i2cWrite(ELYSSA_IMU_I2C, GYRO_ADDR, buf, 2, I2C_TIMEOUT_MS) == ESP_OK;
}

static int16_t gyro_read_raw(uint8_t low_reg) {
  uint8_t lo = gyro_read_reg(low_reg);
  uint8_t hi = gyro_read_reg(low_reg + 1);
  return (int16_t)((hi << 8 | lo));
}
uint8_t elyssa_imu_read_reg(uint8_t reg) {
  return gyro_read_reg(reg);
}
bool elyssa_imu_begin() {
  if (!i2cIsInit(ELYSSA_IMU_I2C)) {
    if (i2cInit(ELYSSA_IMU_I2C, SDA_gyro, SCL_gyro, 400000) != ESP_OK) return false;
  }
  pinMode(INT_gyro, INPUT);
  if (gyro_read_reg(0x0F) != 0x70) return false;
  // 1. SW_RESET
  gyro_write_reg(0x12, 0x01);
  delay(10);
  // 2. CTRL3: BDU=1, IF_INC=1
  gyro_write_reg(0x12, 0x40);
  // 3. CTRL6: gyro ±250dps (set BEFORE enabling ODR)
  gyro_write_reg(0x15, 0x01);
  // 4. CTRL8: accel ±2g (set BEFORE enabling ODR)
  gyro_write_reg(0x17, 0x00);
  // 5. CTRL1: accel 120Hz high-performance
  gyro_write_reg(0x10, 0x06);
  // 6. CTRL2: gyro 120Hz high-performance
  gyro_write_reg(0x11, 0x06);
  // 7. Wait for data ready
  uint32_t t = millis();
  while (((gyro_read_reg(0x1E) & 0x03) != 0x03) && (millis() - t < 500));
  gyro_initialized = true;
  return true;
}
bool    elyssa_imu_ready()  { return (gyro_read_reg(0x1E) & 0x03) == 0x03; }
uint8_t elyssa_imu_whoami() { return gyro_read_reg(0x0F); }
float gyro_return_ax()  { return gyro_read_raw(0x22) * 0.00875f; }
float gyro_return_ay()  { return gyro_read_raw(0x24) * 0.00875f; }
float gyro_return_az()  { return gyro_read_raw(0x26) * 0.00875f; }
float accel_return_ax() { return gyro_read_raw(0x28) * 0.000061f; }
float accel_return_ay() { return gyro_read_raw(0x2A) * 0.000061f; }
float accel_return_az() { return gyro_read_raw(0x2C) * 0.000061f; }
float elyssa_imu_temperature() {
  return 25.0f + (gyro_read_raw(0x20) / 256.0f);
}