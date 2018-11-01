#include <stdint.h>
#include <string.h>

uint32_t phy_enter_critical(void);
void phy_exit_critical(uint32_t level);

size_t strnlen(const char *s, size_t maxlen);

void abort(void);
void roundup2(void);
void ets_delay_us(void);
void gpio_output_set(void);
void gpio_output_set_high(void);
void intr_matrix_set(void);