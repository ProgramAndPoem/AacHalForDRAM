#pragma once

namespace aura {

	enum LightingDeviceType {

		MB_RGB_LIGHTING = 0x10000,
		MB_ADDRESABLE_LIGHTING = 0x11000,

		VGA_RGB_LIGHTING = 0x20000,

		DISPLAY_RGB_LIGHTING = 0x30000,

		HEADSET_RGB_LIGHTING = 0x40000,

		MICROPHONE_RGB_LIGHTING = 0x50000,

		EXTERNAL_HARD_DRIVER_RGB_LIGHTING = 0x60000,
		EXTERNAL_BLUE_RAY_RGB_LIGHTING = 0x61000,

		DRAM_RGB_LIGHTING  =   0x70000,

		KEYBOARD_RGB_LIGHTING = 0x80000,
		NB_KEYBOARD_RGB_LIGHTING = 0x81000,
		NB_KEYBOARD_RGB_LED_LIGHTING = 0x81001,

		MOUSE_RGB_LIGHTING = 0x90000,

		CHASSIS_RGB_LIGHTING = 0xB0000,

		PROJECTOR_RGB_LIGHTING = 0xC0000,

		FAN_RGB_LIGHTING = 0xD0000
	};



// Define Common Effect.
#define EFEFCT_FF_NAME L"Default"
#define EFEFCT_FF_ID   0xFF

#define EFEFCT_0_NAME L"Manual"
#define EFEFCT_0_ID   0

#define EFEFCT_1_NAME L"Static"
#define EFEFCT_1_ID   1

#define EFEFCT_2_NAME L"Breathing"
#define EFEFCT_2_ID   2

#define EFEFCT_3_NAME L"Strobing"
#define EFEFCT_3_ID   3

#define EFEFCT_4_NAME L"Color cycle"
#define EFEFCT_4_ID   4

#define EFEFCT_5_NAME L"Rainbow"
#define EFEFCT_5_ID   5

#define EFEFCT_6_NAME L"Breath_rainbow"
#define EFEFCT_6_ID   6

#define EFEFCT_7_NAME L"Rainbow_Comet"
#define EFEFCT_7_ID   7

#define EFEFCT_8_NAME L"Comet"
#define EFEFCT_8_ID   8

#define EFEFCT_9_NAME L"Moving_Flash"
#define EFEFCT_9_ID   9

#define EFEFCT_10_NAME L"Flash_and_Dash"
#define EFEFCT_10_ID   10

#define EFEFCT_11_NAME L"Wave"
#define EFEFCT_11_ID   11

#define EFEFCT_12_NAME L"Glowing_Yoyo"
#define EFEFCT_12_ID   12

#define EFEFCT_13_NAME L"Starry_Night"
#define EFEFCT_13_ID   13


#define EFEFCT_USER   0x100
}
