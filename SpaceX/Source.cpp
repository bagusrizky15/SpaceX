#include <sl.h>
#include spaceship.h
int main()
{
	const int wWidth = 380;
	const int wHeight = 640;

	slWindow(wWidth, wHeight, "SpaceXplorer", 0);

	int bg = slLoadTexture(".\\assets\\background.jpg");
	int sp = slLoadTexture(".\\assets\\spaceship.png);

	while (!slShouldClose())
	{
		slSprite(bg, wWidth / 2, wHeight / 2, 800, 1024);
		spaceship.update();
		spaceship.draw();
		slRender();
	}

	slClose();

	return 0;
}
