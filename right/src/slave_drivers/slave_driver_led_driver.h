#ifndef __SLAVE_DRIVER_LED_DRIVER_H__
#define __SLAVE_DRIVER_LED_DRIVER_H__

// Includes:

    #include "fsl_common.h"
    #include "led_driver.h"

// Macros:

    #define BUFFER_SIZE (LED_DRIVER_LED_COUNT + 1)

// Typedefs:

    typedef enum {
        LedDriverPhase_SetFunctionFrame,
        LedDriverPhase_SetShutdownModeNormal,
        LedDriverPhase_SetFrame1,
        LedDriverPhase_InitLedControlRegisters,
        LedDriverPhase_Initialized,
    } led_driver_phase_t;

    typedef struct {
        led_driver_phase_t phase;
        uint8_t frames[LED_DRIVER_LED_COUNT];
    } led_driver_state_t;

// Functions:

    extern void LedSlaveDriver_Init();
    extern void LedSlaveDriver_Update(uint8_t ledDriverId);
    extern void SetLeds(uint8_t ledBrightness);

#endif
