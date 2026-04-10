
// ChildView.h : interface of the CChildView class
//


#pragma once

#include "Mesh.h"
#include "Sphere.h"
#include "graphics\GrTexture.h"
#include "graphics\GrCubeTexture.h"
#include "graphics/OpenGLWnd.h"
#include "ShaderWnd\ShaderWnd.h"
// CChildView window

class CChildView : public CShaderWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();
	virtual void OnGLDraw(CDC* pDC);
	virtual void RenderGL();
	virtual void InitGL();
	virtual void CleanGL();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

private:
	CGrTexture m_bunnyTex;
	CGrTexture m_sphereTex;
	CGrTexture m_heightTex;
	CGrCubeTexture m_cubeTex;
	CMesh m_bunny;
	CSphere m_sphere;
	CSphere m_metallicSphere;
	CMesh m_skybox;
};

