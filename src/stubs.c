#include "stubs.h"


// needs to go into ram due to ISR context
uint32_t phy_enter_critical(void)
{
    //  FreeRTOS function
    //  return portENTER_CRITICAL_NESTED();
    return 0;
}

// needs to go into ram due to ISR context
void phy_exit_critical(uint32_t level)
{
    //  FreeRTOS function
    //portEXIT_CRITICAL_NESTED(level);
    return;
}

/* strnlen() is a POSIX.2008 addition. Can't rely on it being available so
 * define it ourselves.
 */
size_t strnlen(const char *s, size_t maxlen)
{
  const char *p;

  p = memchr(s, '\0', maxlen);
  if (p == NULL)
    return maxlen;

  return p - s;
}

void abort(void) {

}


void roundup2(void) {

}

void ets_delay_us(void) {

}

void gpio_output_set(void) {
  
}

void gpio_output_set_high(void) {
  
}

void intr_matrix_set(void) {
  
}
