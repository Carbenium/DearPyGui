#pragma once
#include "mvPlot.h"

namespace Marvel {

	class mvAreaSeries : public mvSeries
	{

	public:

		mvAreaSeries(const std::string& name, const std::vector<mvVec2>& points,
			mvColor color, mvColor fill)
			: mvSeries(name, points), m_color(color), m_fill(fill)
		{
		}

		void draw() override
		{

			ImPlot::PushPlotClipRect();
			auto item = ImPlot::RegisterOrGetItem(m_name.c_str());
			if (item->Show)
				drawPolygon();
			ImPlot::PopPlotClipRect();

		}

		void drawPolygon();

	private:

		mvColor m_color = MV_DEFAULT_COLOR;
		mvColor m_fill = MV_DEFAULT_COLOR;
	};

}