// Fichero de configuracion

#if defined(__AVR_ATmega328P__)
  
  #define PA 1 //
  #define PB 2 //
  #define PC 3 //
  #define PD 4 //
  
  #define ROWS_T 9     //Numero de Filas de teclado 8x5
  #define COLS_T 6     //Numero de Columnas de teclado 8x5
  
  //#define xchg_del_break
  // Mapa de la matriz
  // 1x1 = '1', 1x2 = '2'
  // 2x1 = 'Q', 2x2 = 'W'
  // ...
  
  #define ROWS 9      //Numero de Filas de teclado en atmega 168/328
  #define COLS 6      //Numero de Columnas de teclado en atmega 168/328
  
  #define PS2_DAT     PC4
  #define PS2_CLK     PC5
  
  ////////Pro Mini
  #define PS2_PORT    PORTC
  #define PS2_DDR     DDRC
  #define PS2_PIN     PINC
  
  #define LED_ON  PORTB |= (1<<5)
  #define LED_OFF PORTB &= ~(1<<5)
  #define LED_CONFIG  DDRB |= (1<<5) //Led en PB5 en Pro mini y similares
  
  //{PC1, PC0, PB4, PB3, PB2, PC2};
  uint8_t pinsC[COLS] = { 1, 0, 4, 3, 2, 2 }; // Configuracion de pines en el ZXGo+
  uint8_t bcdC[COLS] = { PC, PC, PB, PB, PB, PC }; // Configuracion de pines en el ZXGo+
  
  //{PD2, PD3, PD4, PD5, PD6, PD7, PB0, PB1, PC3};
  uint8_t pinsR[ROWS] = { 2, 3, 4, 5, 6, 7, 0, 1, 3 }; // Configuracion de pines en el ZXGo+
  uint8_t bcdR[ROWS] = { PD, PD, PD, PD, PD, PD, PB, PB, PC }; // Configuracion de pines en el ZXGo+

#elif defined(__AVR_ATmega32U4__)  

  #define PA 1 //
  #define PB 2 //
  #define PC 3 //
  #define PD 4 //
  
  #define PE 5 // Pro Micro
  #define PF 6 // Pro Micro
  
  #define ROWS_T 9     //Numero de Filas de teclado 8x5
  #define COLS_T 6     //Numero de Columnas de teclado 8x5
  
  //#define xchg_del_break
  // Mapa de la matriz
  // 1x1 = '1', 1x2 = '2'
  // 2x1 = 'Q', 2x2 = 'W'
  // ...
  
  #define ROWS 9      //Numero de Filas de teclado en atmega 168/328
  #define COLS 6      //Numero de Columnas de teclado en atmega 168/328
  
  #define PS2_DAT     PD2 // Pro Micro - PD2 - 0
  #define PS2_CLK     PD3 // Pro Micro - PD3 - 1
  
  ////////Pro Mini
  #define PS2_PORT    PORTD // Pro Micro
  #define PS2_DDR     DDRD // Pro Micro
  #define PS2_PIN     PIND // Pro Micro
  
  #define LED_ON  PORTB |= (1<<5)
  #define LED_OFF PORTB &= ~(1<<5)
  #define LED_CONFIG  DDRB |= (1<<5) //Led en PB5 en Pro mini y similares
  
  //{PC1, PC0, PB4, PB3, PB2, PC2}; // m328p
  //{PF6, PF7, PB2, PB3, PB6, PF5}; // Pro Micro
  uint8_t pinsC[COLS] = { 6, 7, 2, 3, 6, 5 }; // Configuracion de pines en el ZXGo+
  uint8_t bcdC[COLS] = { PF, PF, PB, PB, PB, PF }; // Configuracion de pines en el ZXGo+
  
  //{PD2, PD3, PD4, PD5, PD6, PD7, PB0, PB1, PC3}; // m328p
  //{PD1, PD0, PD4, PC6, PD7, PE6, PB4, PB5, PF4}; // Pro Micro
  uint8_t pinsR[ROWS] = { 1, 0, 4, 6, 7, 6, 4, 5, 4 }; // Configuracion de pines en el ZXGo+
  uint8_t bcdR[ROWS] = { PD, PD, PD, PC, PD, PE, PB, PB, PF }; // Configuracion de pines en el ZXGo+

#endif
