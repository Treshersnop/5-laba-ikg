#pragma once
#ifndef BILLBOARD_TECHNIQUE_H
#define	BILLBOARD_TECHNIQUE_H

#include "technique_27.h"
#include "math_3d_27.h"

class BillboardTechnique : public Technique //интерфейс для метода billboard
{
public:

    BillboardTechnique();

    virtual bool Init();
    
    void SetVP(const Matrix4f& VP);
    void SetCameraPosition(const Vector3f& Pos);
    void SetColorTextureUnit(unsigned int TextureUnit);

private:

    GLuint m_VPLocation;//комбинация матрицы проекции
    GLuint m_cameraPosLocation;//позиция камеры в мировом пространстве
    GLuint m_colorMapLocation;//номер модуля текстуры, к которому будет привязана текстура billboard
};

#endif	/* BILLBOARD_TECHNIQUE_H */