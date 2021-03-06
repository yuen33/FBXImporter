#pragma once

#include "FBXImporterCommon.h"
#include "FBXSDK/fbxsdk.h"

namespace FBXImporterUnmanaged
{
	class FBXIMPORTER_CORE FBXColor
	{
	public:
		static FBXColor black;

		float r;
		float g;
		float b;
		float a;

		FBXColor();
		FBXColor( const FBXColor& other );
		FBXColor( const FbxColor& other );
		FBXColor( float r, float g, float b, float a );

		FBXColor& operator=( const FBXColor& rhs );
		FBXColor& operator=( const FbxColor& rhs );

		virtual ~FBXColor();
	};
}