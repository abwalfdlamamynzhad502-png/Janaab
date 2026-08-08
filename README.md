# Janaab

Janaab is an ESP32-based multi-module platform for IoT, access control, and wireless gateway projects. It supports many peripherals such as PN532 NFC, SSD1306 OLED, NRF24L01, CC1101, IR modules, and battery/charger modules. The project is implemented using the Arduino framework (PlatformIO) and designed to support English and Persian (Farsi) languages.

This repository will contain:
- Project scaffold for PlatformIO (Arduino for ESP32)
- Core system engine, boot and recovery managers, watchdog and safe-mode mechanisms
- Web dashboard, REST API, MQTT, OTA updates
- Modules for NFC, display, radio, IR, sensors, battery management, and RTC
- Localization (English / فارسی)

Hardware (initial list)
- ESP32 DevKit V1 (ESP32-WROOM-32)
- PN532 NFC V3
- OLED 0.96" (SSD1306)
- NRF24L01+ PA+LNA
- CC1101 433MHz module
- IR transmitter & receiver
- LX-LCBST lithium charger + boost module

Getting started (PlatformIO + VSCode)
1. Install VSCode and PlatformIO IDE extension
2. Clone this repository
3. Open the folder in VSCode and let PlatformIO initialize
4. Build and upload using the `env:esp32dev` environment

License
- MIT (tbd)


---

# Janaab — فارسی

Janaab یک پلتفرم مبتنی بر ESP32 برای پروژه‌های IoT، در دسترسی NFC و دروازهٔ بی‌سیم است که از چندین ماژول سخت‌افزاری پشتیبانی می‌کند. این مخزن با فریم‌ورک Arduino (PlatformIO) پیاده‌سازی می‌شود و از دو زبان انگلیسی و فارسی پشتیبانی خواهد کرد.

محتوا:
- اسکلِتون پروژه برای PlatformIO
- موتور اصلی، مدیریت بوت و بازیابی، Watchdog و حالت امن
- داشبورد وب، REST API، MQTT و OTA
- ماژول‌های NFC، نمایشگر، رادیو، IR، سنسورها، باتری و RTC

شروع سریع:
1. نصب VSCode و PlatformIO
2. کلون کردن مخزن
3. باز کردن در VSCode و منتظر شدن برای آماده‌سازی PlatformIO
4. بیلد و آپلود از طریق environment تعریف‌شده

لایسنس: MIT (قابل تنظیم)
