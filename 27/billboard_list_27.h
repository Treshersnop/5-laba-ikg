#pragma once
#ifndef BILLBOARD_LIST_H
#define	BILLBOARD_LIST_H

#include <string>

#include "texture_27.h"
#include "billboard_technique_27.h"
//����� BillboardList ������������� ���, ��� ��� ����������� ��� ��������� billboards
class BillboardList
{
public:
    BillboardList();
    ~BillboardList();

    bool Init(const std::string& TexFilename); 
    void Render(const Matrix4f& VP, const Vector3f& CameraPos);//������������ ���� �������� � ������� billboard

private:
    void CreatePositionBuffer();

    GLuint m_VB;//��������� ����� ��� �������� ������� billboards
    Texture* m_pTexture;//��������� �� �������� ��� ����������� �� billboard
    BillboardTechnique m_technique;//�������� ���� ��������
};


#endif	/* BILLBOARD_LIST_H */