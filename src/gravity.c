#include "gravity.h"
#include <math.h>
#include <stdio.h>

const double G = 6.67430e-11;

Force gravitational_force(struct Body body1, struct Body body2) {
  double r_x = body2.Position.x - body1.Position.x;
  double r_y = body2.Position.y - body1.Position.y;
  double r = sqrt((r_x * r_x) + (r_y * r_y));

  double force_magnitude = (G * body1.mass * body2.mass) / (r * r);
  
  double angle = atan2(r_y, r_x);
  Force force = { force_magnitude * cos(angle), force_magnitude * sin(angle)};

  return force;
}