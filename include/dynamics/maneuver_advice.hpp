#pragma once

namespace adore
{
namespace dynamics
{

enum ManeuverType
{
  FollowRoute = 0,
  SlowDown = 1,
  Stop = 2
};

struct ManeuverAdvice
{
  ManeuverType maneuver = FollowRoute;
  double target_speed_mps = 0.0;
  double distance_m = 0.0;
};

} // namespace dynamics
} // namespace adore
