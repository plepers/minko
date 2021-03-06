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

#include "minko/ParticlesCommon.hpp"

namespace minko
{
	namespace particle
	{
		namespace modifier
		{
			template <class T>
			class Modifier3
			{
			public:
				typedef std::shared_ptr<Modifier3>              Ptr;

            private:
				typedef std::shared_ptr<sampler::Sampler<T> >   SamplerPtr;

			protected:
				SamplerPtr  _x;
				SamplerPtr  _y;
				SamplerPtr  _z;

			public:
				inline
				SamplerPtr
				x() const
				{
					return _x;
				};

				inline
				SamplerPtr
				y() const 
				{
					return _y;
				};

				inline
				SamplerPtr 
				z() const 
				{
					return _z;
				};

				inline
				void
				x(SamplerPtr value)
				{
					_x = value;
				};

				inline
				void 
				y(SamplerPtr value) 
				{
					_y = value; 
				};

				inline
				void
				z(SamplerPtr value) 
				{
					_z = value; 
				};

			protected:
				Modifier3(SamplerPtr x,
						  SamplerPtr y,
						  SamplerPtr z): 
                    _x (x),
					_y (y),
					_z (z)
				{

                };
			};
		}
	}
}