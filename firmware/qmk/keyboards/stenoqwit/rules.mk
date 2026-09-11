# If you want to include custom QMK code, you need to include `bootloader.h`.
# So, uncomment this and comment out the line below.
# BOOTLOADER = caterina

# ** This is only needed for the Pro Micro **
# TODO: Fix this
# PROTOCOL = VUSB
F_CPU = 8000000
BOOTLOADER = atmel-dfu

# Do not enable older features to prevent size bloat
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
TAP_DANCE_ENABLE = no

# Some optons we *do* want
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no

# Steno mode!
STENO_ENABLE = yes

# Bootmagic - hold top-left key while plugging in to reset
BOOTMAGIC_ENABLE = no
