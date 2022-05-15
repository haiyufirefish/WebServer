#include <unistd.h>
#include "./code/server/webserver.h"

int main() {
    /* Daemon running in the background */
    // daemon(1, 0); 

    WebServer server(
        1316, 3, 60000, false,             /* port ET mode timeoutMs exit  */
        3306, "root", "171732bcd", "webserver", /* Mysql setting */
        12, 6, true, 1, 1024);             /* Number of connection pools 
                                                Number of thread pools
                                                Log switch 
                                                Log level 
                                            Log asynchronous queue capacity */
    server.Start();
} 