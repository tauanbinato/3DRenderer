#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x, y;
} vec2_t;

typedef struct {
    float x, y, z;
} vec3_t;

// Vector 2D
float vec2_length(vec2_t v);
vec2_t vec2_add(vec2_t a, vec2_t b);
vec2_t vec2_sub(vec2_t a, vec2_t b);
vec2_t vec2_mult(vec2_t v, float scalar);
vec2_t vec2_div(vec2_t v, float scalar);
float vec2_dot(vec2_t a, vec2_t b);
void vec2_normalize(vec2_t* v);

// Vector 3D
float vec3_length(vec3_t v);
vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
vec3_t vec3_mult(vec3_t v, float scalar);
vec3_t vec3_div(vec3_t v, float scalar);
vec3_t vec3_rotate_x(vec3_t v, float angle);
vec3_t vec3_rotate_y(vec3_t v, float angle);
vec3_t vec3_rotate_z(vec3_t v, float angle);
vec3_t vec3_cross(vec3_t a, vec3_t b);
void vec3_normalize(vec3_t* v);
float vec3_dot(vec3_t a, vec3_t b);
#endif