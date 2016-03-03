#ifndef __USB_INTERFACE_MOUSE_H__
#define __USB_INTERFACE_MOUSE_H__

// Macros:

    #define USB_MOUSE_CLASS 0x03
    #define USB_MOUSE_SUBCLASS 0x01
    #define USB_MOUSE_PROTOCOL 0x02

    #define USB_MOUSE_INTERFACE_INDEX 2
    #define USB_MOUSE_INTERFACE_COUNT 1

    #define USB_MOUSE_ENDPOINT_ID 1
    #define USB_MOUSE_ENDPOINT_COUNT 1

    #define USB_MOUSE_INTERRUPT_IN_PACKET_SIZE 8
    #define USB_MOUSE_INTERRUPT_IN_INTERVAL 4

    #define USB_MOUSE_REPORT_LENGTH 7

// Typedefs:

    typedef struct {
        uint8_t buttons;
        int16_t x;
        int16_t y;
        int8_t wheelX;
        int8_t wheelY;
    } __attribute__ ((packed)) usb_mouse_report_t;

// Variables:

    extern usb_device_class_struct_t UsbMouseClass;

// Functions:

    extern usb_status_t UsbMouseCallback(class_handle_t handle, uint32_t event, void *param);
    extern usb_status_t UsbMouseSetConfiguration(class_handle_t handle, uint8_t configuration);
    extern usb_status_t UsbMouseSetInterface(class_handle_t handle, uint8_t interface, uint8_t alternateSetting);

#endif