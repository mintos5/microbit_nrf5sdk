#ifndef MICROBIT_H
#define MICROBIT_H

#ifdef __cplusplus
extern "C" {
#endif

#define LEDS_NUMBER    2

#define LED_1          13
#define LED_2          15

#define LEDS_LIST { LED_1, LED_2 }

#define LEDS_ACTIVE_STATE 1

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2

#define LEDS_INV_MASK  LEDS_MASK

#define BUTTONS_NUMBER 2

#define SW_1           17
#define SW_2           26
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_LIST { SW_1, SW_2 }

#define BUTTONS_ACTIVE_STATE 0

#define BSP_BUTTON_0   SW_1
#define BSP_BUTTON_1   SW_2

#define RX_PIN_NUMBER  25
#define TX_PIN_NUMBER  24
#define CTS_PIN_NUMBER 16
#define RTS_PIN_NUMBER 18
#define HWFC           false

#define SER_CON_RX_PIN              25
#define SER_CON_TX_PIN              24
#define SER_CON_CTS_PIN             16
#define SER_CON_RTS_PIN             18


#ifdef __cplusplus
}
#endif

#endif
