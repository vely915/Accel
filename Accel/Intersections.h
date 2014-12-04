#ifndef INTERSECTIONS_H
#define INTERSECTIONS_H

#include "boundingBox.h"
#include "../glm/glm.hpp"


const float TEST_EPSILON = pow( 1.0f, -5 );

enum AABBDir {
	RIGHT = 0,
	LEFT = 1,
	MIDDLE = 2
};


class Intersections
{
public:
	Intersections( void );
	~Intersections( void );

	// TODO: Precompute dirfrac in AABBIntersect when possible to improve efficiency.

	static bool AABBIntersect( boundingBox bbox, glm::vec3 ray_o, glm::vec3 ray_dir );
	static bool TriIntersect( glm::vec3 ray_o, glm::vec3 ray_dir, glm::vec3 v0, glm::vec3 v1, glm::vec3 v2, float &t, glm::vec3 &normal );

	static glm::vec3 computeTriNormal( const glm::vec3&, const glm::vec3&, const glm::vec3& );
};

#endif