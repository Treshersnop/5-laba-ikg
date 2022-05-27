#pragma once
#ifndef PARTICLE_SYSTEM_H
#define	PARTICLE_SYSTEM_H

#include <GL/glew.h>

#include "ps_update_technique_28.h"
#include "random_texture_28.h"
#include "billboard_technique_28.h"
#include "texture_28.h"

class ParticleSystem //Класс системы частиц инкапсулирует всю механику взаимодействия буферов transform feedback
{
public:
    ParticleSystem();

    ~ParticleSystem();

    bool InitParticleSystem(const Vector3f& Pos);

    void Render(int DeltaTimeMillis, const Matrix4f& VP, const Vector3f& CameraPos);
    //три входящих параметра: время, прошедшшее с последнего вызова, в милисикундах, произвдение матриц обзора 
    //и проекции и позиция камеры в мировом пространстве
private:

    void UpdateParticles(int DeltaTimeMillis);
    void RenderParticles(const Matrix4f& VP, const Vector3f& CameraPos);

    bool m_isFirst;
    unsigned int m_currVB;
    unsigned int m_currTFB;
    GLuint m_particleBuffer[2];
    GLuint m_transformFeedback[2];
    PSUpdateTechnique m_updateTechnique;
    BillboardTechnique m_billboardTechnique;
    RandomTexture m_randomTexture;
    Texture* m_pTexture;
    int m_time;
};

#endif	/* PARTICLE_SYSTEM_H */
