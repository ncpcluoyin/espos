#pragma once

typedef short Priority;
typedef void (*_Function_t)(void *);

#define Priority_god 0
#define Priority_system 1
#define Priority_doge 2

typedef struct
{
    const char * const task_name;
    _Function_t _func_name;
    Priority _priority;
    short _complexity;
} taskinfo;