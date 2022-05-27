#pragma once
#ifndef BILLBOARD_LIST_H
#define	BILLBOARD_LIST_H

#include <string>

#include "texture_27.h"
#include "billboard_technique_27.h"
//Класс BillboardList инкапсулирует все, что вам потребуется для генерации billboards
class BillboardList
{
public:
    BillboardList();
    ~BillboardList();

    bool Init(const std::string& TexFilename); 
    void Render(const Matrix4f& VP, const Vector3f& CameraPos);//установление всех значений и рендере billboard

private:
    void CreatePositionBuffer();

    GLuint m_VB;//вершинный буфер для хранения позиции billboards
    Texture* m_pTexture;//указатель на текстуру для отображения на billboard
    BillboardTechnique m_technique;//хранение всех шейдеров
};


#endif	/* BILLBOARD_LIST_H */