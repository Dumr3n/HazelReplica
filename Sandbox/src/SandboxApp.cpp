#include <Hazel.h>
#include <iostream>
class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	std::cout << "Entry point is here!\n";
	return new Sandbox();
}