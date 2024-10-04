#include <ti/screen.h>
#include <ti/getcsc.h>
#include <sys/timers.h>
#include <stdlib.h>

/* Main function, called first */
int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();
    int x = 0;

    while (x < 10){
        os_PutStrLine("I need a weapon.");

        sleep(1);
        os_ClrHome();
        sleep(1);

        x++;
    }

    /* Waits for a key */
    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
