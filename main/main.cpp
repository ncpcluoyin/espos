#include "taskmanager.h"
#include "message.h"
#include "filesystem.h"
#include <iostream>
using namespace std;

void hello(void *)
{
    cout << "a" << endl;
    return;
}

extern "C" void app_main(void)
{
    taskinfo _taskinfo = {"hello",hello,Priority_doge,(short)114514};
}