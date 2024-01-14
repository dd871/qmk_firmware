# MCU name
MCU = kb2040
# Bootloader selection
BOOTLOADER = rp2040

BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no          # Audio output
SPLIT_KEYBOARD = no       # Split common
LTO_ENABLE = yes

VIA_ENABLE = yes
KEY_LOCK_ENABLE = no 		#not supported from VIA
CAPS_WORD_ENABLE = yes
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = yes
GRAVE_ESCAPE_ENABLE = no
DEBOUNCE_TYPE = asym_eager_defer_pk
