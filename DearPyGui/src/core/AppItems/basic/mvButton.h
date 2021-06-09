#pragma once

#include "mvTypeBases.h"

namespace Marvel {

	MV_REGISTER_WIDGET(mvButton, MV_ITEM_DESC_DEFAULT, StorageValueTypes::None, 1);
	class mvButton : public mvAppItem
	{
	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

		MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvButton, add_button)

		MV_CREATE_RAW_CONSTANT(mvTool_About, MV_TOOL_ABOUT_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_Debug, MV_TOOL_DEBUG_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_Doc, MV_TOOL_DOC_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_ItemRegistry, MV_TOOL_ITEM_REGISTRY_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_Metrics, MV_TOOL_METRICS_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_Style, MV_TOOL_STYLE_UUID);
		MV_CREATE_RAW_CONSTANT(mvTool_Font, MV_TOOL_FONT_UUID);

		MV_CREATE_RAW_CONSTANT(mvFontAtlas, MV_ATLAS_UUID);
		MV_CREATE_RAW_CONSTANT(mvAppUUID, MV_APP_UUID);
		MV_CREATE_RAW_CONSTANT(mvInvalidUUID, MV_INVALID_UUID);

		MV_CREATE_CONSTANT(mvDir_None, ImGuiDir_None, 0L);
		MV_CREATE_CONSTANT(mvDir_Left, ImGuiDir_Left, 0L);
		MV_CREATE_CONSTANT(mvDir_Right, ImGuiDir_Right, 0L);
		MV_CREATE_CONSTANT(mvDir_Up, ImGuiDir_Up, 0L);
		MV_CREATE_CONSTANT(mvDir_Down, ImGuiDir_Down, 0L);

		MV_CREATE_CONSTANT(mvThemeCol_Button_Text, ImGuiCol_Text, 0L);
		MV_CREATE_CONSTANT(mvThemeCol_Button_Bg, ImGuiCol_Button, 0L);
		MV_CREATE_CONSTANT(mvThemeCol_Button_Hovered, ImGuiCol_ButtonHovered, 0L);
		MV_CREATE_CONSTANT(mvThemeCol_Button_Active, ImGuiCol_ButtonActive, 0L);
		MV_CREATE_CONSTANT(mvThemeCol_Button_Border, ImGuiCol_Border, 0L);
		MV_CREATE_CONSTANT(mvThemeCol_Button_BorderShadow, ImGuiCol_BorderShadow, 0L);

		MV_CREATE_CONSTANT(mvThemeStyle_Button_Rounding, ImGuiStyleVar_FrameRounding, 0L);
		MV_CREATE_CONSTANT(mvThemeStyle_Button_BorderSize, ImGuiStyleVar_FrameBorderSize, 0L);
		MV_CREATE_CONSTANT(mvThemeStyle_Button_TextAlignX, ImGuiStyleVar_ButtonTextAlign, 0L);
		MV_CREATE_CONSTANT(mvThemeStyle_Button_TextAlignY, ImGuiStyleVar_ButtonTextAlign, 1L);
		MV_CREATE_CONSTANT(mvThemeStyle_Button_PaddingX, ImGuiStyleVar_FramePadding, 0L);
		MV_CREATE_CONSTANT(mvThemeStyle_Button_PaddingY, ImGuiStyleVar_FramePadding, 1L);

		MV_START_EXTRA_COMMANDS
		MV_END_EXTRA_COMMANDS

		MV_START_GENERAL_CONSTANTS
			MV_ADD_GENERAL_CONSTANT(mvTool_About),
			MV_ADD_GENERAL_CONSTANT(mvTool_Debug),
			MV_ADD_GENERAL_CONSTANT(mvTool_Doc),
			MV_ADD_GENERAL_CONSTANT(mvTool_ItemRegistry),
			MV_ADD_GENERAL_CONSTANT(mvTool_Metrics),
			MV_ADD_GENERAL_CONSTANT(mvTool_Style),
			MV_ADD_GENERAL_CONSTANT(mvTool_Font),
			MV_ADD_GENERAL_CONSTANT(mvFontAtlas),
			MV_ADD_GENERAL_CONSTANT(mvAppUUID),
			MV_ADD_GENERAL_CONSTANT(mvInvalidUUID),
			MV_ADD_GENERAL_CONSTANT(mvDir_None),
			MV_ADD_GENERAL_CONSTANT(mvDir_Left),
			MV_ADD_GENERAL_CONSTANT(mvDir_Right),
			MV_ADD_GENERAL_CONSTANT(mvDir_Up),
			MV_ADD_GENERAL_CONSTANT(mvDir_Down),
		MV_END_GENERAL_CONSTANTS

		MV_START_COLOR_CONSTANTS
			MV_ADD_CONSTANT(mvThemeCol_Button_Text, mvImGuiCol_Text, mvColor(128, 128, 128, 63)),
			MV_ADD_CONSTANT(mvThemeCol_Button_Bg, mvImGuiCol_Button, mvColor(128, 128, 128, 63)),
			MV_ADD_CONSTANT(mvThemeCol_Button_Hovered, mvImGuiCol_ButtonHovered, mvColor(128, 128, 128, 63)),
			MV_ADD_CONSTANT(mvThemeCol_Button_Active, mvImGuiCol_ButtonActive, mvColor(128, 128, 128, 63)),
			MV_ADD_CONSTANT(mvThemeCol_Button_Border, mvImGuiCol_Border, mvColor(128, 128, 128, 63)),
			MV_ADD_CONSTANT(mvThemeCol_Button_BorderShadow, mvImGuiCol_BorderShadow, mvColor(128, 128, 128, 63)),
		MV_END_COLOR_CONSTANTS

		MV_START_STYLE_CONSTANTS
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_Rounding, 0, 12),
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_BorderSize, 0, 1),
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_TextAlignX, 0.5f, 1),
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_TextAlignY, 0.5f, 1),
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_PaddingX, 4, 20),
			MV_ADD_CONSTANT_F(mvThemeStyle_Button_PaddingY, 3, 20),
		MV_END_STYLE_CONSTANTS

	public:

		mvButton(mvUUID uuid);

		void draw(ImDrawList* drawlist, float x, float y) override;

		void handleSpecificKeywordArgs(PyObject* dict) override;
		void getSpecificConfiguration(PyObject* dict) override;

	private:

		ImGuiDir m_direction = ImGuiDir_Up;
		bool     m_small_button = false;
		bool     m_arrow = false;

	};

}
