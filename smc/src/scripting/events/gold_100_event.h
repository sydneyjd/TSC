// -*- mode: c++; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4 -*-
#ifndef SMC_SCRIPTING_GOLD_100_EVENT_H
#define SMC_SCRIPTING_GOLD_100_EVENT_H
#include "../scripting.h"
#include "event.h"

namespace SMC {
	namespace Scripting {

		class cGold_100_Event: public cEvent
		{
		public:
			virtual std::string Event_Name(){return "gold_100";}
		};
	}
}

#endif
