#include "bootloader.h"
#include "i2c_addresses.h"

__attribute__((used, section(".BootloaderConfig"))) const bootloader_config_t BootloaderConfig = {
    .tag = BOOTLOADER_TAG,
    .enabledPeripherals = EnabledBootloaderPeripherial_I2c,
    .i2cSlaveAddress = I2C_ADDRESS_LEFT_KEYBOARD_HALF_BOOTLOADER,
    .peripheralDetectionTimeoutMs = BOOTLOADER_TIMEOUT_MS,
    .clockFlags = CLOCK_FLAG_HIGH_SPEED_MODE,
    .clockDivider = ~0
};