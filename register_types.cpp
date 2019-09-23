/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "opencl.h"

void register_opencl_types() {
    ClassDB::register_class<OpenCL>();
}

void unregister_opencl_types() {
   // Nothing to do here in this example.
}
