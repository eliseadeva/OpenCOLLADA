/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_POLYPLANE_H__
#define __MayaDM_POLYPLANE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMPolyPrimitive.h"
namespace MayaDM
{
class PolyPlane : public PolyPrimitive
{
public:
public:
	PolyPlane(FILE* file,const std::string& name,const std::string& parent=""):PolyPrimitive(file, name, parent, "polyPlane"){}
	virtual ~PolyPlane(){}
	void setWidth(double w)
	{
		if(w == 1) return;
		fprintf(mFile,"setAttr \".w\" %f;\n", w);

	}
	void setHeight(double h)
	{
		if(h == 1) return;
		fprintf(mFile,"setAttr \".h\" %f;\n", h);

	}
	void setSubdivisionsWidth(int sw)
	{
		if(sw == 10) return;
		fprintf(mFile,"setAttr \".sw\" %i;\n", sw);

	}
	void setSubdivisionsHeight(int sh)
	{
		if(sh == 10) return;
		fprintf(mFile,"setAttr \".sh\" %i;\n", sh);

	}
	void setTexture(unsigned int tx)
	{
		if(tx == 1) return;
		fprintf(mFile,"setAttr \".tx\" %i;\n", tx);

	}
	void setCreateUVs(unsigned int cuv)
	{
		if(cuv == 1) return;
		fprintf(mFile,"setAttr \".cuv\" %i;\n", cuv);

	}
	void getWidth()
	{
		fprintf(mFile,"\"%s.w\"",mName.c_str());

	}
	void getHeight()
	{
		fprintf(mFile,"\"%s.h\"",mName.c_str());

	}
	void getSubdivisionsWidth()
	{
		fprintf(mFile,"\"%s.sw\"",mName.c_str());

	}
	void getSubdivisionsHeight()
	{
		fprintf(mFile,"\"%s.sh\"",mName.c_str());

	}
	void getTexture()
	{
		fprintf(mFile,"\"%s.tx\"",mName.c_str());

	}
	void getCreateUVs()
	{
		fprintf(mFile,"\"%s.cuv\"",mName.c_str());

	}
protected:
	PolyPlane(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):PolyPrimitive(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_POLYPLANE_H__