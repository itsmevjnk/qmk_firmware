MCU = STM32F103

BOOTLOADER = stm32duino
MCU_LDSCRIPT = STM32F103x8_stm32duino_bootloader
OPT_DEFS += -DBOOTLOADER_STM32DUINO
BOARD = STM32_F103_STM32DUINO
BOOTLOADER_TYPE = stm32duino
DFU_ARGS = -d 1EAF:0003 -a 2 -R
DFU_SUFFIX_ARGS = -v 1EAF -p 0003

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB backlit keys
AUDIO_ENABLE = no           # Audio output

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

LTO_ENABLE = yes
