
#include "dmcpplinq.h"

int main( int argc, char* argv[] ) {

    Idmcpplinq* module = dmcpplinqGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
