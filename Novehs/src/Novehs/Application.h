#pragma once

#include "Core.h"

namespace Novehs
{
	class NOVEHS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();
}


