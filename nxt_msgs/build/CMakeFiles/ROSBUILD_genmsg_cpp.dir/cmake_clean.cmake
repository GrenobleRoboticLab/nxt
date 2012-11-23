FILE(REMOVE_RECURSE
  "../src/nxt_msgs/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/nxt_msgs/Contact.h"
  "../msg_gen/cpp/include/nxt_msgs/JointCommand.h"
  "../msg_gen/cpp/include/nxt_msgs/Color.h"
  "../msg_gen/cpp/include/nxt_msgs/Gyro.h"
  "../msg_gen/cpp/include/nxt_msgs/Range.h"
  "../msg_gen/cpp/include/nxt_msgs/Accelerometer.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
