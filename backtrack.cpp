#include "backtrack.h"

BackTrack::BackTrack() {}
	
BackTrack::BackTrack(const Application& thisApp)
{
	this->app = thisApp;
}//带参数的构造器

bool BackTrack::backTrack(const Position& currPos)
{
	app.progress(currPos);

	if (app.success(currPos))
		return true;

	else
	{
		Application::Iterator itr(currPos);

		Position nextPos;

		while (!itr.noNextPosition())
		{
			nextPos = itr.getNextPosition();
			if (app.isValid(nextPos) && backTrack(nextPos)) //recursive call if valid
				return true;
		}
		//cannot reach goal from currPos
		app.goBack(currPos); //backtrack
		return false; //from currPos, no solution
	}
}//提供的通用回溯框架