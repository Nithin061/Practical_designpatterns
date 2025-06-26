#include "MainWindow.h"
#include <iostream>

MainWindow::MainWindow()
{
	m_Text.assign(R"(The afternoon breeze carried the faint scent of jasmine through the narrow alleyways, where chipped cobblestones told stories of a thousand footprints. Sunlight danced on the rippling surface of a puddle left by last night’s rain, reflecting the spire of an ancient clocktower that stood watch over the quiet town. A lone cyclist coasted by, bell tinkling softly, leaving behind a ripple of warmth against the cool shadows. Somewhere nearby, an old violinist tuned his strings, preparing to fill the air with a melody that would linger long after the final note faded.)" );
}

void MainWindow::ExecuteFind(const std::string& pattern)
{
	size_t position{};
	size_t count{};
	while ( ( position = m_Text.find(pattern, position) ) != std::string::npos)
	{
		std::cout << "Found at index: " << position<< std::endl;
		position += pattern.size();
		count++;
	}

}
