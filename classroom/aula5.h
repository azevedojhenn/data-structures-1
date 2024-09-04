#ifndef AULA5_H
#define AULA5_H

typedef struct _ponto Pto;

/**
 * Create a point
 * @param x Coordinate x
 * @param y Coordinate y
 * @return Pointer to the point
 */
Pto *pto_create(float x, float y);

/**
 * Destroy a point
 * @param p Pointer to the point
 */
void pto_destroy(Pto *p);

/**
 * Print a point
 * @param p Pointer to the point
 */
void pto_print(Pto *p);

/**
 * Get the x coordinate of a point
 * @param p Pointer to the point
 * @param x Pointer to the x coordinate
 */
void pto_getx(Pto *p, float *x);

/**
 * Get the y coordinate of a point
 * @param p Pointer to the point
 * @param y Pointer to the y coordinate
 */
void pto_gety(Pto *p, float *y);

/**
 * Set the x coordinate of a point
 * @param p Pointer to the point
 * @param x New x coordinate
 */
void pto_setx(Pto *p, float x);

/**
 * Set the y coordinate of a point
 * @param p Pointer to the point
 * @param y New y coordinate
 */
void pto_sety(Pto *p, float y);

/**
 * Calculate the distance between two points
 * @param p1 Pointer to the first point
 * @param p2 Pointer to the second point
 * @return Distance between the points
 */
float pto_dist(Pto *p1, Pto *p2);

#endif
