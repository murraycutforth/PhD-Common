/*
 *	DESCRIPTION:	All typedefs are defined here for clarity.
 * 
 * 	AUTHOR:		Murray Cutforth
 * 	DATE:		19/07/2017
 */
 
#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <vector>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <Eigen/StdVector>
class polygon;

// Used in PhD-Common:

typedef Eigen::VectorXd vectype;
typedef std::vector<vectype> rowtype;
typedef std::vector<rowtype> gridtype;


// Used in PhD-2D-Allaire-diffuse

typedef Eigen::Matrix<double, 6, 6> Matrix6d;


// Used in PhD-interface-tracking-methods:

typedef std::vector<std::vector<double>> griddoubletype;
typedef std::vector<std::vector<bool>> gridbooltype;
typedef std::vector<std::vector<polygon>> gridpolygontype;
typedef std::vector<std::vector<Eigen::Vector2d, Eigen::aligned_allocator<Eigen::Vector2d>>> gridVector2dtype;
typedef Eigen::Hyperplane<double, 2> line;

#endif
