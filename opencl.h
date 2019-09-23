/* opencl.h */

#ifndef OPENCL_H
#define OPENCL_H

#include "core/reference.h"

class OpenCL : public Reference {
    GDCLASS(OpenCL, Reference);

    int count;

protected:
    static void _bind_methods();

public:
    String get_device_type();

    OpenCL();
};

#endif // OPENCL_H

