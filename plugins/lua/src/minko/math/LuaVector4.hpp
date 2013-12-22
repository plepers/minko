/*
Copyright (c) 2013 Aerys

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include "minko/Common.hpp"

#include "minko/math/Vector4.hpp"

#include "minko/LuaWrapper.hpp"

namespace minko
{
	namespace math
	{
		class LuaVector4
		{
		public:
			static
			void
			bind(LuaGlue& state)
			{
				state.Class<math::Vector4>("Vector4")
		            .method("create",   static_cast<math::Vector4::Ptr (*)(float, float, float, float)>(&math::Vector4::create))
		            .method("toString", &math::Vector4::toString)
		            .property("x",      static_cast<float (math::Vector4::*)(void)>(&math::Vector4::x), static_cast<void (math::Vector4::*)(float)>(&math::Vector4::x))
		            .property("y",      static_cast<float (math::Vector4::*)(void)>(&math::Vector4::y), static_cast<void (math::Vector4::*)(float)>(&math::Vector4::y))
		            .property("z",      static_cast<float (math::Vector4::*)(void)>(&math::Vector4::z), static_cast<void (math::Vector4::*)(float)>(&math::Vector4::z))
		            .property("w",      static_cast<float (math::Vector4::*)(void)>(&math::Vector4::w), static_cast<void (math::Vector4::*)(float)>(&math::Vector4::w));
			}
		};
	}
}
