
#ifndef MY_SLAM_MAP_H
#define MY_SLAM_MAP_H

#include "my_slam/common_include.h"
#include "my_slam/vo/frame.h"
#include "my_slam/vo/mappoint.h"

namespace my_slam
{
namespace vo
{

class Map
{
public:
    typedef std::shared_ptr<Map> Ptr;
    std::unordered_map<int, Frame::Ptr> keyframes_;
    std::unordered_map<int, MapPoint::Ptr> map_points_;

    Map() {}

    void insertKeyFrame(Frame::Ptr frame);
    void insertMapPoint(MapPoint::Ptr map_point);
    Frame::Ptr findKeyFrame(int frame_id);
    bool hasKeyFrame(int frame_id);
};

} // namespace vo
} // namespace my_slam
#endif // MAP_H
