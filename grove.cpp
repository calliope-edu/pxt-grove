#include "pxt.h"

namespace grove {
    /**
     * Check if the runtime is Codal
     */
    //% block="Is Codal?"
    //% blockId="grove_is_codal"
    //% group="Ultrasonic"
    //% hidden=1
    bool isCodal() {
#if MICROBIT_CODAL
       return true;
#else
       return false;
#endif
    }

}