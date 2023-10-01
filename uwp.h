#include <Windows.h>
#pragma once
//Misc
#define base 16
#define top 12
#define identity 24
//Main (DIFFERENT OFFSETS BUT SAME FUNCTION!)
#define get_scheduler = 0x7AAAA0;
#define get_state = 0x4555F0;
#define luavm_load = 0x554E90;
#define task_spawn = 0x554030;
#define print = 0xD71B20;
//Main2 (DIFFERENT OFFSETS BUT SAME FUNCTION!)
#define r_luavm_load 0x7D3660
#define r_taskdefer 0x953DF0
#define r_getscheduler 0xBAAAA0
#define r_lua_print 0x1171B20
#define get_globalstate2 0x8555F0
