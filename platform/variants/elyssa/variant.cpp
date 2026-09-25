#include "Arduino.h"
#include "driver/i2c.h"
void hello_elyssa() {
  static bool initialized = false;
  if (!initialized) {
    Serial.begin(115200);
    unsigned long start = millis();
    while (!Serial && (millis() - start < 3000));
    delay(500);
    initialized = true;
  }
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                              -+                                                                                                                     "));
  Serial.println(F("                                           ...++...                                                     .+-.                 --..--                                  "));
  Serial.println(F("           . ..                            ...+#...                                                     .-.                   .##.                 ...               "));
  Serial.println(F("           .##.                               -+           ..                                                                +-..-+                .#-               "));
  Serial.println(F("           --++.                                          ###.                                                                                    ..#-..             "));
  Serial.println(F("                                                          .-.                                                                                      ...               "));
  Serial.println(F("                                                                          .                                                                                          "));
  Serial.println(F("                                           .-+.                          .#-...                                                                                      "));
  Serial.println(F("                                           .-+.                          .-...-+.     .-#.                                                                           "));
  Serial.println(F("                                                                         .#-..+#.   .##--.                                                                           "));
  Serial.println(F("                       ..                                                  -+-..#. -++..#.   ......                                  +##+                            "));
  Serial.println(F("                     ..-+..                                 .-+.            .-+#+- #+ -+- .+#+--+-.                                   ..                             "));
  Serial.println(F("                     ..-+..                                 +..#-      +--+++-. .+.++.+-.-+.. .+#.   ++                                                              "));
  Serial.println(F("                       ..                        .--..      #+ -#    .. +#....+#..#.-.  .#+.-+#-   .#..+.                                                            "));
  Serial.println(F("                                               .++...+#-    #. .#.  ---- .###-..#-.#-   ++#+..    -#- .#.                        -#                                  "));
  Serial.println(F("                                                 -#..  +#. .#+.#+...#--#.   .....++#-..-#...###-. -#. .#.                     ..+###..                               "));
  Serial.println(F("                                                  .#+...#-. .#.#. -#. .#.         -#+.#+  -######.-#..#+                      ..+###..                               "));
  Serial.println(F("                                                    .-+-.--+-.-.  -#. +#.         .##+-.  -####+-..-#-.  ......                  -#                                  "));
  Serial.println(F("                                                .....     ..###   .#.-#. .++++-.-..###. .++.#+..   -.. -++-...--++.                                                  "));
  Serial.println(F("                             .               .-#----+#.. .. .-##.  .#- .+#  ..-+...###.  #++   ...+####-..   --+.                                                    "));
  Serial.println(F("                            .#.             .#-..   .-+--++---.#+...#-.#-.---+- ..-#-  .++ .---##+-..   .-+++..                                                      "));
  Serial.println(F("                           -+#+-.             .-+###+..   ..-+####-.### .-..... .+##+ .--.-###-.. ..-##..                                                            "));
  Serial.println(F("                            .-.                          ...   ######-.   .-#.  .+##+.######.     .-####-  ..+##.+.                                                  "));
  Serial.println(F("                                                       -####++  .-###-   ++..#-..+#####+-. .+-+.  +#####-.+--..+-.                                                   "));
  Serial.println(F("                                                       -#####+    .-### .#...#..####+...   ++..+. .+###..#-..+#-                                                     "));
  Serial.println(F("                                                       .-###.-#.   .###..# +#- .####- .#. .#. .#.  .#. .-#+++. .---.                                                 "));
  Serial.println(F("    -..                                       ..-#####..   .+++-.  .+##...#-  .+###  .+.#-.#..+#. .+..-#-....+#-...-#-..                                             "));
  Serial.println(F("   .+.                                      .-++.-   ..-#+---- .+.   +##-.-   +###+ .#..-#..#-+.  ++-##--++++++-...--+-.                      ..  ...                "));
  Serial.println(F(".#######+                                    .+########- .. .-####-  ..###  .####-  .#..#+. #+  .###...        -###-.                         .+-.#.                 "));
  Serial.println(F("   .+..                                          ....        ..######-.###  .####-  .-+-#. .#+.#####-..######.                                 .##-                  "));
  Serial.println(F("    -.                                             ..####.+#####.  .#######-.###.     -+ ..####-    .+#....  -#-.                             --...+.                "));
  Serial.println(F("                                                  .+-   .-+. .+.      .+########.    .##-#####----.   ..+#+++#+-.                                                    "));
  Serial.println(F("                                                 .#-..-+#-  +#+.        .-######.   -+#####---#+--+-+++..                                                            "));
  Serial.println(F("                   .+.                           .-+++-.  -#####+.       .######. .+#####..   .+. -#. .+#+.                                                          "));
  Serial.println(F("                  .+#-       ..                           -#####+.         +####..-###+     .-###+..#-.  ++.                                              .+-.       "));
  Serial.println(F("                           .###.                            ###.           +####-+####.     ######- .##...#-.                       .+                    .+-.       "));
  Serial.println(F("                             ..                                             .#######-       -+###-.   .-----.                      .-#-.                             "));
  Serial.println(F("                                                                            .######          .....                                  ..                               "));
  Serial.println(F("                                                                              +####                                                                                  "));
  Serial.println(F("                                         .-####..                             +####                                                                                  "));
  Serial.println(F("             .#.                        -##-..-#+.                            +####                                                                                  "));
  Serial.println(F("           .#####                      -#-.###+.##.                           +####                                 .-------.                                        "));
  Serial.println(F("             .#.                       -#+.+-.#.++.                           +####                                  .+####..                                        "));
  Serial.println(F("                                       .-######.+#.                           +####                                   -#+-                                           "));
  Serial.println(F("                                         ...+#-.-##.                          +#####-                                .+#-                                            "));
  Serial.println(F("                                            +#.#--##.                       .#######-.                              .-##+.                                           "));
  Serial.println(F("                                            +#.##-.##+..                   .-########+.                          ..-##+.#-                                           "));
  Serial.println(F("                                            +#.##+-.++###++++.           .+############++.               .-+++#######+..#+                ..+..                      "));
  Serial.println(F("                                           .#..+####-...----###############################################+----....-##.#+                ..+..                      "));
  Serial.println(F("                                           ##.##############-..............................................+#######--+#.#-                                           "));
  Serial.println(F("                                          .#+.+#######..######################################################..###-.-#.+#+                                ..        "));
  Serial.println(F("                                           .+-.---++++--###-.+##+ -###..#### .#### .###+ -###-.+###..###- +###--#######+ +#-.                            ..++..      "));
  Serial.println(F("                                           .## .-+##++----++###################################################----...-++.-#+.                           ..++..      "));
  Serial.println(F("                                            -## -+...-######-..................................... ..........++########-....##-                            ..        "));
  Serial.println(F("                                             -##. -###......+#################################################+-......-####  .##.                                    "));
  Serial.println(F("                                              .###-. .--####+---.....................     ............. .. ..+#####+---..--+###+.                                    "));
  Serial.println(F("                                    .+#+.       .+#--.     ....++######++.--++++++----###+--++++++++---+#####-..  --+++---.... .--.                                  "));
  Serial.println(F("                                     .+##-    -###+++###+   -##+--.  .--###+.   .+++##---+##+-    .++###-...++###. . -+###+...+##+.                                  "));
  Serial.println(F("                                       .-######--.  .--.#####...        ..++######++.     .-+#######++.      .-+######+...-####-..                                   "));
  Serial.println(F("                                            ...             .                                                  . .....                                               "));
  Serial.println(F("                                            ...   ...####...     ...+###-.          ..+++-.           ...####+...      ....                                          "));
  Serial.println(F("                                            +##-++###-..-###-....###+...##---.   ---##---+#++-    .---###-...+###.....###..                                .+-..-+   "));
  Serial.println(F("  .-.+                                        .+++-        .#####+       .+-+#####-+.     .-+#######++-        .+#####+ .                                   .-##.    "));
  Serial.println(F("  .++-                                                                      ......           .......                                                       .-+.-+-   "));
  Serial.println(F("                                                                                                                                                           ..   ..   "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                .                    -##-+##+. .-###..    ..######.     .+#####..   +##     +##. +##.+##-. .+##+.   .########...                                     "));
  Serial.println(F("               .#.                   -###+-+##+##--##++ .-+#-----+#+. .+#+-----##+. +##     +##. +###+-+##+#+-+##+- .-------+##-                                     "));
  Serial.println(F("             -#####.                 -##-   .##+   .### .###     .##- -##-    .###. +##.    +##. +##.   -##-.  .##-  ........##-                                     "));
  Serial.println(F("               .#-                   -##-   .##+   .### .###     .##- -##-    .###.  +##.  ###   +##.   -##-   .##- .##########+                                     "));
  Serial.println(F("                .                    -##-   .##+   .### .###     .##- .##-    .###.  .-##-##+.   +##.   -##-   .##- .##+.....##-                                     "));
  Serial.println(F("                                     -##-   .##+   .###   -########.   .########+     -#####+    +##.   -##-   .##- .##+    .##-             .-+                     "));
  Serial.println(F("                                     .--.   .--.   .---    .------       .-----.       .---.     ---.   .--.   .--. .--.    .--.             .-+.                    "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println(F("                                 ╔══════════════════════════════════════════════════════════════════════════════════════════════╗"));
  Serial.println(F("                                 ║                                       --- ELYSSA  ---                                        ║"));
  Serial.println(F("                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣"));
  Serial.println(F("                                 ║                                           Ahla!                                              ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║      Thabet mli7 felli bin idik. Hedhi mch juste pcb, hadhi awel dev board tounsia,          ║"));
  Serial.println(F("                                 ║                         hadhi awel 5atwa sad9a f thneya jdida.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║           Kima Elyssa el malika eli harbet mel dholm bech tiktib teri5 Carthage              ║"));
  Serial.println(F("                                 ║                bmo5ha w dhkeha w 3azimetha, a7na lyoum fi Moovma harbin                      ║"));
  Serial.println(F("                                 ║              mel dholm mta3 ettaba3iya ettechnologiya eli n3ichou feha lyoum.                ║"));
  Serial.println(F("                                 ║               w ma rdhinech bech no93dou te7et ra7met ghirna, nasta3mlou felli               ║"));
  Serial.println(F("                                 ║                         yetefradh 3lina w nconsomiouw feli yeta3talna,                       ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║          Moovma mch juste startup, hiya el 'movement' eli bech t5ali el9ayd yankasser,       ║"));
  Serial.println(F("                                 ║                 Moovma Hiya el mo5 etounsi ki y9arrer yfok blastou fel 3alam.                ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║           Kima el Zitouna etounseya m3ar9a fi trabna, thabta w 9weya w ma y9ala3ha           ║"));
  Serial.println(F("                                 ║           7atta ri7, l'innovation mechi 7eker 3la cha3eb men cha3eb matansech eli            ║"));
  Serial.println(F("                                 ║                        rak tounsi tari5ek kbir w majdek sebe9.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            Moovma jetbech t9oul elli el hardware mte3na nasn3ouh bidina, bech nkounou        ║"));
  Serial.println(F("                                 ║             a7rar w na7na barka eli nemlkou mfeta7 mosta9belena, wel 7a9 yetfak              ║"));
  Serial.println(F("                                 ║                                       mayeta3tach.                                           ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║          w Heka 3leh 2027 mch bech tkoun kima 2027. Bech nbadlou mab3adhna el mosta9bel.     ║"));
  Serial.println(F("                                 ║           2027 bech ykoun el 3am elli Tounis twalli hiya elli t5alla9 el technologie,        ║"));
  Serial.println(F("                                 ║          mch elli techriha. Thabet mli7, 5ater fel dev board hadhi, maktoub el mosta9bel     ║"));
  Serial.println(F("                                 ║                                  elli bech nasn3ouh mab3adhna.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            Tafaker dima: 'Tijri el rya7 kima tijri sfinetna'.. 5ater a7na el ry7,            ║"));
  Serial.println(F("                                 ║            a7na el b7ar, w a7na sfinet Carthage el jdida elli mcheya lel mosta9bel.          ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            El khedma badet.. w el legacy mte3ek yabda lyoum, el moovma bdet bech             ║"));
  Serial.println(F("                                 ║                      nraj3ou glory carthage: na3mlou Moovma sa7bi                            ║"));
  Serial.println(F("                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣"));
  Serial.println(F("                                 ║                                   Copyright © 2026 Moovma                                    ║"));
  Serial.println(F("                                 ║                                      All Rights Reserved                                     ║"));
  Serial.println(F("                                 ╚══════════════════════════════════════════════════════════════════════════════════════════════╝"));
  Serial.println("");
}

#define I2C_PORT_NUM   I2C_NUM_0
#define I2C_TIMEOUT_MS 10
static bool gyro_initialized = false;
static uint8_t gyro_read_reg(uint8_t reg) {
  uint8_t val = 0xFF;
  i2c_cmd_handle_t cmd = i2c_cmd_link_create();
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_WRITE, true);
  i2c_master_write_byte(cmd, reg, true);
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_READ, true);
  i2c_master_read_byte(cmd, &val, I2C_MASTER_NACK);
  i2c_master_stop(cmd);
  i2c_master_cmd_begin(I2C_PORT_NUM, cmd, pdMS_TO_TICKS(I2C_TIMEOUT_MS));
  i2c_cmd_link_delete(cmd);
  return val;
}
static bool gyro_write_reg(uint8_t reg, uint8_t val) {
  i2c_cmd_handle_t cmd = i2c_cmd_link_create();
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_WRITE, true);
  i2c_master_write_byte(cmd, reg, true);
  i2c_master_write_byte(cmd, val, true);
  i2c_master_stop(cmd);
  esp_err_t ret = i2c_master_cmd_begin(I2C_PORT_NUM, cmd, pdMS_TO_TICKS(I2C_TIMEOUT_MS));
  i2c_cmd_link_delete(cmd);
  return ret == ESP_OK;
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
  i2c_config_t conf = {};
  conf.mode             = I2C_MODE_MASTER;
  conf.sda_io_num       = SDA_gyro;
  conf.scl_io_num       = SCL_gyro;
  conf.sda_pullup_en    = GPIO_PULLUP_ENABLE;
  conf.scl_pullup_en    = GPIO_PULLUP_ENABLE;
  conf.master.clk_speed = 400000;
  i2c_param_config(I2C_PORT_NUM, &conf);
  i2c_driver_install(I2C_PORT_NUM, I2C_MODE_MASTER, 0, 0, 0);
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
