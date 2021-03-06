#pragma once
#ifndef _VEC3D_
#define _VEC3D_
#include "vec3d.h"
#endif // !_VEC3D_

struct vec3d;

struct mat4x4 {
    float m[4][4] = { 0 };
};

mat4x4 makeIdentity();

mat4x4 makeRotX(float fAngleRad);

mat4x4 makeRotY(float fAngleRad);

mat4x4 makeRotZ(float fAngleRad);

mat4x4 makeRot(float gammaX, float betaY, float alphaZ);

mat4x4 makeTranslation(float x, float y, float z);

mat4x4 makeProj(float fFovDeg, float fAspectRatio, float fNear, float fFar);

mat4x4 operator*(mat4x4 const& m1, mat4x4 const& m2);

mat4x4 pointAt(vec3d& pos, vec3d& target, vec3d& up);

mat4x4 Matrix_QuickInverse(mat4x4& m);
