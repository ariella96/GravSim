#ifndef GRAVITY_H
#define GRAVITY_H

extern const double G;

struct Vector {
  double x;
  double y;
};

typedef struct Vector Position;
typedef struct Vector Velocity;
typedef struct Vector Force;

struct Body {
  double mass;
  struct Vector Position;
};

Force gravitational_force(struct Body body1, struct Body body2);

#endif