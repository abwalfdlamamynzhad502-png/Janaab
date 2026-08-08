#ifndef CONFIG_H
#define CONFIG_H

// ============================================================================
// JANAAB - Configuration Header
// Professional ESP32 IoT Control System
// ============================================================================

#include <Arduino.h>

// ============================================================================
// SYSTEM CONFIGURATION | تنظیمات سیستم
// ============================================================================

#define SYSTEM_NAME "Janaab"
#define FIRMWARE_VERSION "1.0.0"
#define BUILD_DATE __DATE__
#define BUILD_TIME __TIME__

// Language Selection | انتخاب زبان
// 0 = English, 1 = Farsi
#define DEFAULT_LANGUAGE 1  // فارسی

// ============================================================================
// CORE SYSTEM SETTINGS | تنظیمات هسته سیستم
// ============================================================================

#define ENABLE_DEBUG_MODE true
#define DEBUG_BAUD_RATE 115200

#define ENABLE_BOOT_RECOVERY true
#define ENABLE_SAFE_MODE true
#define ENABLE_WATCHDOG true
#define WATCHDOG_TIMEOUT_MS 30000

#define ENABLE_HEALTH_MONITOR true
#define HEALTH_CHECK_INTERVAL_MS 5000

#define ENABLE_EVENT_LOGGING true
#define MAX_EVENT_LOG_SIZE 1000

// ============================================================================
// STORAGE CONFIGURATION | تنظیمات ذخیره‌سازی
// ============================================================================

#define ENABLE_EEPROM_STORAGE true
#define EEPROM_SIZE 4096

#define ENABLE_SD_CARD false  // فعال کنید اگر SD کارت دارید
#define SD_CS_PIN 5

#define ENABLE_NVRAM_STORAGE true

// ============================================================================
// NETWORK CONFIGURATION | تنظیمات شبکه
// ============================================================================

#define ENABLE_WIFI true
#define WIFI_SSID ""
#define WIFI_PASSWORD ""
#define WIFI_TIMEOUT_MS 20000

#define ENABLE_WEB_DASHBOARD true
#define WEB_DASHBOARD_PORT 80

#define ENABLE_REST_API true
#define REST_API_PORT 8080

#define ENABLE_MQTT false
#define MQTT_BROKER ""
#define MQTT_PORT 1883
#define MQTT_USER ""
#define MQTT_PASSWORD ""

#define ENABLE_BLUETOOTH_CLASSIC false
#define ENABLE_BLE true
#define BLE_DEVICE_NAME "Janaab-Device"

// ============================================================================
// POWER MANAGEMENT | مدیریت قدرت
// ============================================================================

#define ENABLE_BATTERY_MONITOR true
#define BATTERY_PIN 34  // ADC Pin
#define BATTERY_VOLTAGE_MULTIPLIER 2.0

#define ENABLE_POWER_MANAGEMENT true
#define ENABLE_POWER_SAVING_MODE true
#define POWER_SAVING_THRESHOLD_PERCENT 20  // فعال کن زمانی که باتری کمتر از 20% است

#define ENABLE_POWER_FAILURE_DETECTION true

// ============================================================================
// SENSOR CONFIGURATION | تنظیمات سنسورها
// ============================================================================

#define ENABLE_SENSOR_MANAGEMENT true

// Temperature & Humidity
#define ENABLE_DHT_SENSOR false
#define DHT_PIN 32
#define DHT_TYPE DHT22

// Motion Sensor
#define ENABLE_MOTION_SENSOR false
#define MOTION_PIN 33

// Light Sensor
#define ENABLE_LIGHT_SENSOR false
#define LIGHT_PIN 35

// Gas Sensor
#define ENABLE_GAS_SENSOR false
#define GAS_PIN 36

// ============================================================================
// OUTPUT CONFIGURATION | تنظیمات خروجی
// ============================================================================

#define ENABLE_RELAY_CONTROL true
#define RELAY_PINS {13, 14, 15, 16}  // GPIO pins for relays
#define NUM_RELAYS 4

#define ENABLE_LED_CONTROL true
#define LED_STATUS_PIN 2
#define LED_WIFI_PIN 4
#define LED_ERROR_PIN 5

#define ENABLE_BUZZER_ALARM true
#define BUZZER_PIN 12

// ============================================================================
// COMMUNICATION PROTOCOL | تنظیمات پروتکل ارتباطی
// ============================================================================

// I2C Configuration
#define I2C_SDA_PIN 21
#define I2C_SCL_PIN 22
#define I2C_FREQUENCY 400000

// SPI Configuration
#define SPI_MOSI_PIN 23
#define SPI_MISO_PIN 19
#define SPI_CLK_PIN 18

// UART Configuration
#define SERIAL0_RX_PIN 3
#define SERIAL0_TX_PIN 1

// ============================================================================
// MODULE CONFIGURATION | تنظیمات ماژول‌ها
// ============================================================================

// PN532 NFC Module
#define ENABLE_PN532_NFC true
#define PN532_I2C_ADDRESS 0x24
#define NFC_TIMEOUT_MS 2000

// SSD1306 OLED Display
#define ENABLE_SSD1306_DISPLAY true
#define SSD1306_I2C_ADDRESS 0x3C
#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64

// NRF24L01+ Module
#define ENABLE_NRF24L01 true
#define NRF24_CE_PIN 5
#define NRF24_CSN_PIN 4
#define NRF24_CHANNEL 76
#define NRF24_POWER_LEVEL RF24_PA_MIN

// CC1101 Module
#define ENABLE_CC1101 false
#define CC1101_CS_PIN 15
#define CC1101_GDO0_PIN 14
#define CC1101_FREQUENCY 433

// IR Module
#define ENABLE_IR_MODULE true
#define IR_RX_PIN 26
#define IR_TX_PIN 25

// RTC Module
#define ENABLE_RTC false
#define RTC_I2C_ADDRESS 0x68

// ============================================================================
// FIRMWARE UPDATE | تنظیمات به‌روزرسانی Firmware
// ============================================================================

#define ENABLE_OTA_UPDATE true
#define OTA_UPDATE_PORT 3232
#define OTA_HOSTNAME "janaab-esp32"

// ============================================================================
// SECURITY | تنظیمات امنیتی
// ============================================================================

#define ENABLE_ACCESS_CONTROL true
#define ENABLE_CONFIG_PROTECTION true
#define ENABLE_FIRMWARE_LOCK false

// Default Admin Password (برای توسعه - تغییر دهید!)
#define ADMIN_PASSWORD "admin123"

// ============================================================================
// TASK SCHEDULER | تنظیمات برنامه‌ریزی وظائف
// ============================================================================

#define ENABLE_TASK_SCHEDULER true
#define MAX_SCHEDULED_TASKS 10

// ============================================================================
// TIME MANAGEMENT | مدیریت زمان
// ============================================================================

#define TIMEZONE_OFFSET 3.5  // Iran Standard Time (IRST)

// ============================================================================
// MEMORY MANAGEMENT | مدیریت حافظه
// ============================================================================

#define ENABLE_MEMORY_MONITOR true
#define LOW_MEMORY_THRESHOLD 50000  // Bytes

// ============================================================================
// ADVANCED SETTINGS | تنظیمات پیشرفته
// ============================================================================

#define FREERTOS_CORE_AFFINITY 0  // CPU Core 0
#define FREERTOS_STACK_SIZE 2048
#define FREERTOS_PRIORITY 5

#define MAX_RETRY_ATTEMPTS 3
#define RETRY_DELAY_MS 1000

#endif // CONFIG_H
