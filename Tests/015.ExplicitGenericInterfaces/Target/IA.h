#pragma once
#include "System/System.h"

using namespace System;
namespace ExplicitGenericInterfaces {
	class IA : public virtual Object, public virtual gc_cleanup{
		public:
			virtual void f() = 0;
	};
}