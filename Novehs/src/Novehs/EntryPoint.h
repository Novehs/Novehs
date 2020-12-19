#pragma once

#ifdef NVS_PLATFORM_WINDOWS

extern Novehs::Application* Novehs::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Novehs::CreateApplication();
	app->Run();
	delete app;
}

#endif