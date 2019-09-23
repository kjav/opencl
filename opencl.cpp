/* opencl.cpp */

#include "opencl.h"
#include <vector>
#include <CL/cl.hpp>

String OpenCL::get_device_type() {
  //get all platforms (drivers)
  std::vector<cl::Platform> all_platforms;
  cl::Platform::get(&all_platforms);
  if(all_platforms.size()==0){
    // No platforms found. Check OpenCL installation!
    exit(1);
  }
  cl::Platform default_platform=all_platforms[0];
  std::string result = default_platform.getInfo<CL_PLATFORM_NAME>();
  return String(result.c_str());
}

void OpenCL::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_device_type"), &OpenCL::get_device_type);
}

OpenCL::OpenCL() {
    count = 0;
}
