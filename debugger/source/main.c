// golden
// 6/12/2018
//

#include <ps4.h>
#include "server.h"

int _main(void) {
    initKernel();
    initLibc();
    initPthread();
    initNetwork();
    initSysUtil();

    sceKernelSleep(1);

    // just a little notify
    sceSysUtilSendSystemNotificationWithText(222, "webrte by golden\nUpdated By EchoStretch");
    
    // jailbreak current thread
    sys_console_cmd(SYS_CONSOLE_CMD_JAILBREAK, NULL);

    // start the server, this will block
    return start_http_server();
}