#pragma once
#include "transport.h"

class groundtransport : public transport
{
public:
	groundtransport() :groundtransport(ground) {}
	groundtransport(transport_type tr):transport("GroundTransport", ground)
	{
		//this->transportType = tr;
	}
};
