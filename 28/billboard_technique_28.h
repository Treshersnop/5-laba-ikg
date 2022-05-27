#pragma once
#ifndef BILLBOARD_TECHNIQUE_H
#define	BILLBOARD_TECHNIQUE_H

#include "technique_28.h"
#include "math_3d_28.h"

class BillboardTechnique : public Technique
{
public:

    BillboardTechnique();

    virtual bool Init();

    void SetVP(const Matrix4f& VP);
    void SetCameraPosition(const Vector3f& Pos);
    void SetColorTextureUnit(unsigned int TextureUnit);
    void SetBillboardSize(float BillboardSize);

private:

    GLuint m_VPLocation;
    GLuint m_cameraPosLocation;
    GLuint m_colorMapLocation;
    GLuint m_billboardSizeLocation;
};

#endif	/* BILLBOARD_TECHNIQUE_H */