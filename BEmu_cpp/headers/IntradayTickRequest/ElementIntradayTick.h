//------------------------------------------------------------------------------------------------
// <copyright project="BEmu_cpp" file="headers/IntradayTickRequest/ElementIntradayTick.h" company="Jordan Robinson">
//     Copyright (c) 2013 Jordan Robinson. All rights reserved.
//
//     The use of this software is governed by the Microsoft Public License
//     which is included with this distribution.
// </copyright>
//------------------------------------------------------------------------------------------------

#pragma once

#include "BloombergTypes/ElementPtr.h"

namespace BEmu
{
	class Name;

	namespace IntradayTickRequest
	{
		class MessageIntradayTick;

		class ElementIntradayTick : public ElementPtr
		{
			private:
				ElementPtr *_parent;

			public:
				ElementIntradayTick(const MessageIntradayTick& msg);

				virtual Name name() const;
				virtual size_t numValues() const { return 1; }
				virtual size_t numElements() const { return 1; }				
		
				virtual bool isArray() const { return false; }
				virtual bool isComplexType() const { return false; }
				virtual ElementPtr * getElement(const char* name) const;

				virtual std::ostream& print(std::ostream& stream, int level, int spacesPerLevel) const;
		};
	}
}