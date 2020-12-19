#include <Novehs.h>

class Sandbox : public Novehs::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Novehs::Application* Novehs::CreateApplication()
{
	return new Sandbox();
}