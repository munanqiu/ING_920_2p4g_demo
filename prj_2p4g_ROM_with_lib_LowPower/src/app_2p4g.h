#ifndef APP_2P4G__H
#define APP_2P4G__H

#include "ing_2p4g_920_ROM.h"

void ing24g_test_do_switch_to_2p4g(void);
void ing24g_test_switch_mode_handler(void);
void ing24g_test_switch_mode_trigger(comm_mode_t mode);

void continus_2g4_txrx_on(void);
void continus_2g4_txrx_off(void);

void ing24g_test_init(void);
void switch_to_2p4g(void);
#endif