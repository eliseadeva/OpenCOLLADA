/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_LUMINANCE_H__
#define __MayaDM_LUMINANCE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDependNode.h"
namespace MayaDM
{
class Luminance : public DependNode
{
public:
public:
	Luminance(FILE* file,const std::string& name,const std::string& parent=""):DependNode(file, name, parent, "luminance"){}
	virtual ~Luminance(){}
	void setValue(const float3& v)
	{
		if(v == float3(0.0f,0.0f,0.0f)) return;
		fprintf(mFile,"setAttr \".v\" -type \"float3\" ");
		v.write(mFile);
		fprintf(mFile,";\n");

	}
	void setValueR(float vr)
	{
		if(vr == 0.0) return;
		fprintf(mFile,"setAttr \".v.vr\" %f;\n", vr);

	}
	void setValueG(float vg)
	{
		if(vg == 0.0) return;
		fprintf(mFile,"setAttr \".v.vg\" %f;\n", vg);

	}
	void setValueB(float vb)
	{
		if(vb == 0.0) return;
		fprintf(mFile,"setAttr \".v.vb\" %f;\n", vb);

	}
	void getValue()
	{
		fprintf(mFile,"\"%s.v\"",mName.c_str());

	}
	void getValueR()
	{
		fprintf(mFile,"\"%s.v.vr\"",mName.c_str());

	}
	void getValueG()
	{
		fprintf(mFile,"\"%s.v.vg\"",mName.c_str());

	}
	void getValueB()
	{
		fprintf(mFile,"\"%s.v.vb\"",mName.c_str());

	}
	void getOutValue()
	{
		fprintf(mFile,"\"%s.o\"",mName.c_str());

	}
protected:
	Luminance(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):DependNode(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_LUMINANCE_H__