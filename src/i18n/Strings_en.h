// ============================================================================
// JANAAB - English Language Strings
// Professional ESP32 IoT Control System
// ============================================================================

#ifndef STRINGS_EN_H
#define STRINGS_EN_H

// ============================================================================
// SYSTEM MESSAGES | سیستم پیام‌ها
// ============================================================================

namespace StringsEN {

// Boot & Startup
const char* BOOT_START = "System booting...";
const char* BOOT_COMPLETE = "System boot complete";
const char* BOOT_RECOVERY = "Starting recovery mode...";
const char* BOOT_SAFE_MODE = "Starting in Safe Mode";
const char* BOOT_FAILED = "Boot failed!";

// System Status
const char* SYSTEM_READY = "System ready";
const char* SYSTEM_RUNNING = "System running";
const char* SYSTEM_ERROR = "System error";
const char* SYSTEM_WARNING = "System warning";
const char* SYSTEM_INITIALIZING = "Initializing...";
const char* SYSTEM_SHUTDOWN = "System shutting down...";

// Health & Diagnostics
const char* HEALTH_OK = "System health: OK";
const char* HEALTH_WARNING = "System health: WARNING";
const char* HEALTH_CRITICAL = "System health: CRITICAL";
const char* SELF_TEST_START = "Starting self-test...";
const char* SELF_TEST_COMPLETE = "Self-test complete";
const char* SELF_TEST_FAILED = "Self-test failed";
const char* WATCHDOG_TRIGGERED = "Watchdog triggered - Restarting";

// Memory
const char* MEMORY_LOW = "Low memory warning";
const char* MEMORY_OK = "Memory: OK";
const char* MEMORY_USAGE = "Memory usage";

// Storage
const char* STORAGE_INIT = "Initializing storage...";
const char* STORAGE_READY = "Storage ready";
const char* STORAGE_ERROR = "Storage error";
const char* STORAGE_FULL = "Storage full";
const char* BACKUP_START = "Backup starting...";
const char* BACKUP_COMPLETE = "Backup complete";
const char* RESTORE_START = "Restore starting...";
const char* RESTORE_COMPLETE = "Restore complete";

// Network & WiFi
const char* WIFI_SCANNING = "Scanning WiFi networks...";
const char* WIFI_CONNECTING = "Connecting to WiFi...";
const char* WIFI_CONNECTED = "WiFi connected";
const char* WIFI_DISCONNECTED = "WiFi disconnected";
const char* WIFI_CONNECTION_FAILED = "WiFi connection failed";
const char* WIFI_TIMEOUT = "WiFi connection timeout";
const char* IP_ADDRESS = "IP Address";
const char* SIGNAL_STRENGTH = "Signal Strength";

// Web Dashboard
const char* WEB_SERVER_START = "Web server starting...";
const char* WEB_SERVER_RUNNING = "Web server running on port";
const char* WEB_SERVER_ERROR = "Web server error";
const char* API_REQUEST_RECEIVED = "API request received";
const char* API_REQUEST_FAILED = "API request failed";

// MQTT
const char* MQTT_CONNECTING = "Connecting to MQTT broker...";
const char* MQTT_CONNECTED = "MQTT connected";
const char* MQTT_DISCONNECTED = "MQTT disconnected";
const char* MQTT_CONNECTION_FAILED = "MQTT connection failed";

// Bluetooth
const char* BLE_ADVERTISING = "BLE advertising...";
const char* BLE_CONNECTED = "BLE device connected";
const char* BLE_DISCONNECTED = "BLE device disconnected";

// Power & Battery
const char* BATTERY_CHARGING = "Battery charging";
const char* BATTERY_DISCHARGING = "Battery discharging";
const char* BATTERY_LEVEL = "Battery level";
const char* BATTERY_CRITICAL = "Battery critical";
const char* POWER_SAVING_MODE = "Power saving mode activated";
const char* POWER_FAILURE_DETECTED = "Power failure detected";
const char* LOW_POWER_WARNING = "Low power warning";

// Sensors
const char* SENSOR_INIT = "Initializing sensors...";
const char* SENSOR_READY = "Sensors ready";
const char* SENSOR_ERROR = "Sensor error";
const char* SENSOR_NOT_FOUND = "Sensor not found";
const char* TEMPERATURE = "Temperature";
const char* HUMIDITY = "Humidity";
const char* MOTION_DETECTED = "Motion detected";
const char* LIGHT_LEVEL = "Light level";
const char* GAS_LEVEL = "Gas level";

// NFC & RFID
const char* NFC_READER_INIT = "Initializing NFC reader...";
const char* NFC_READER_READY = "NFC reader ready";
const char* NFC_TAG_DETECTED = "NFC tag detected";
const char* NFC_TAG_READ = "NFC tag read";
const char* NFC_READ_ERROR = "NFC read error";
const char* NFC_WRITE_ERROR = "NFC write error";
const char* NFC_TIMEOUT = "NFC timeout";

// Display
const char* DISPLAY_INIT = "Initializing display...";
const char* DISPLAY_READY = "Display ready";
const char* DISPLAY_ERROR = "Display error";
const char* DISPLAY_OFF = "Display off";
const char* DISPLAY_ON = "Display on";

// Outputs
const char* RELAY_ON = "Relay ON";
const char* RELAY_OFF = "Relay OFF";
const char* LED_ON = "LED ON";
const char* LED_OFF = "LED OFF";
const char* BUZZER_ON = "Buzzer ON";
const char* BUZZER_OFF = "Buzzer OFF";

// Security & Access
const char* ACCESS_ALLOWED = "Access allowed";
const char* ACCESS_DENIED = "Access denied";
const char* INVALID_PIN = "Invalid PIN";
const char* INVALID_CARD = "Invalid card";
const char* AUTHENTICATION_FAILED = "Authentication failed";
const char* AUTHENTICATION_SUCCESS = "Authentication success";
const char* AUTHORIZATION_FAILED = "Authorization failed";

// Firmware & Updates
const char* FIRMWARE_VERSION = "Firmware version";
const char* FIRMWARE_UPDATE_AVAILABLE = "Firmware update available";
const char* FIRMWARE_UPDATING = "Updating firmware...";
const char* FIRMWARE_UPDATE_COMPLETE = "Firmware update complete";
const char* FIRMWARE_UPDATE_FAILED = "Firmware update failed";
const char* FIRMWARE_CHECK_FAILED = "Firmware check failed";
const char* ROLLBACK_COMPLETE = "Rollback complete";

// Time & Schedule
const char* TIME_SYNC = "Time synchronizing...";
const char* TIME_SYNC_COMPLETE = "Time synchronized";
const char* TASK_SCHEDULED = "Task scheduled";
const char* TASK_EXECUTED = "Task executed";
const char* TASK_FAILED = "Task failed";

// Error Messages
const char* ERROR_I2C = "I2C Error";
const char* ERROR_SPI = "SPI Error";
const char* ERROR_UART = "UART Error";
const char* ERROR_GPIO = "GPIO Error";
const char* ERROR_ADC = "ADC Error";
const char* ERROR_TIMEOUT = "Operation timeout";
const char* ERROR_INVALID_PARAM = "Invalid parameter";
const char* ERROR_NOT_INITIALIZED = "Not initialized";
const char* ERROR_ALREADY_RUNNING = "Already running";
const char* ERROR_INSUFFICIENT_MEMORY = "Insufficient memory";
const char* ERROR_FILE_NOT_FOUND = "File not found";
const char* ERROR_FILE_WRITE = "File write error";
const char* ERROR_FILE_READ = "File read error";

// Success Messages
const char* SUCCESS = "Success";
const char* OPERATION_COMPLETE = "Operation complete";
const char* OPERATION_CANCELLED = "Operation cancelled";
const char* SAVED = "Saved successfully";
const char* LOADED = "Loaded successfully";
const char* RESET_COMPLETE = "Reset complete";

// Prompts & Questions
const char* CONFIRM_ACTION = "Confirm action?";
const char* ENTER_PASSWORD = "Enter password:";
const char* SELECT_OPTION = "Select option:";
const char* RETRY = "Retry?";

// Status Display
const char* STATUS_ACTIVE = "Active";
const char* STATUS_INACTIVE = "Inactive";
const char* STATUS_STANDBY = "Standby";
const char* STATUS_ERROR = "Error";
const char* STATUS_WARNING = "Warning";
const char* STATUS_INFO = "Info";

// Units & Measurements
const char* UNIT_CELSIUS = "°C";
const char* UNIT_FAHRENHEIT = "°F";
const char* UNIT_PERCENT = "%";
const char* UNIT_VOLT = "V";
const char* UNIT_AMPERE = "A";
const char* UNIT_WATT = "W";
const char* UNIT_METER = "m";
const char* UNIT_LUX = "lux";
const char* UNIT_PPM = "ppm";
const char* UNIT_SECOND = "s";
const char* UNIT_MINUTE = "min";
const char* UNIT_HOUR = "h";

} // namespace StringsEN

#endif // STRINGS_EN_H
