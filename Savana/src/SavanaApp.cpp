#include <Tiger.h>

class Savana : public Tiger::Application
{
public:
	Savana()
	{

	}

	~Savana()
	{

	}
};

Tiger::Application* Tiger::CreateApplication()
{
	return new Savana();
}