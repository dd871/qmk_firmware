#this is optimised for VIA, dont use for other keymaps

LTO_ENABLE = yes		#same as extraflags... to reduce size
OLED_ENABLE = yes
OLED_DRIVER = SSD1306   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # ENables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = no     # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)
NKRO_ENABLE = yes            # Enable N-Key Rollover
VIA_ENABLE = yes
KEY_LOCK_ENABLE = no 		#not supported from VIA
CAPS_WORD_ENABLE = yes
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = yes
GRAVE_ESCAPE_ENABLE = no
DEBOUNCE_TYPE = asym_eager_defer_pk
