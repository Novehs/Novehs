#pragma once

#ifdef NVS_PLATFORM_WINDOWS

extern Novehs::Application* Novehs::CreateApplication();

int main(int argc, char** argv)
{
	Novehs::Log::Init();
	NVS_CORE_WARN("Core Logger Initalised");
	int a = 5;
	NVS_CORE_WARN("Client Logger Initalised={0}", a);

	Novehs::Application* app = Novehs::CreateApplication();
	app->Run();
	delete app;
}

#endif