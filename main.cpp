enum RuntimeVersions {
    //%
    DAL = 0,
    //%
    CODAL = 1
};

//% weight=1 color="#333333"
//% advanced=true
namespace control {

/**
* Returnes 
*/
//% help=control/getRuntime
//% advanced=true
int getRuntimeGrove() {
#if MICROBIT_CODAL
    return RuntimeVersions.DAL;
#else
    return RuntimeVersions.CODAL;
#endif
}

}