#pragma once

#include <qdebug.h>
#include <string.h>
#include <qtimer.h>
#include <utility>
#include <plog/Log.h>

class Model
{
public:
	Model();

	// Slider Methods
	void setSliderValue(int value);
	int getSliderValue();
	bool isSliderValueChanged();
	void resetSliderValueChangedFlag();

	// Radio Button Methods
	std::string radioButtonToText(std::string buttonid);
	void setButtonID(std::string value);
	std::string getButtonID();
	bool isButtonIDChanged();
	void resetButtonIDChangedFlag();

	// Radio Button Methods
	std::string checkBoxToText(std::string buttonid);
	void setCheckBoxID(std::string value);
	std::string getCheckBoxID();
	bool isCheckBoxIDChanged();
	void resetCheckBoxIDChangedFlag();

	// List Methods
	void addListItem(std::string value);
	bool removeListItem(std::string value);
	std::string* getList();
	int getListLength();
	bool isListChanged();
	void resetListChangedFlag();

	// Table Methods
	void addTableItem(std::string value1, std::string value2);
	std::string** getTable();
	int getTableLength();
	bool isTableChanged();
	void resetTableChangedFlag();

private:

	QTimer* m_dataTimer;

	// Slider Attributes
	int m_sliderValue;
	bool m_sliderValueChanged;
	
	// Radio Button Attributes
	std::string m_buttonID;
	bool m_buttonIDChanged;

	// check box Attributes
	std::string m_checkboxID;
	bool m_checkboxIDChanged;

	// List Container
	std::string* m_list;
	int m_listlength;
	bool m_isListChanged;
	static constexpr const int MAX_LIST_LENGTH = 256;

	// Table container
	static constexpr const int MAX_TABLE_LENGTH = 128;
	std::string** m_table;
	int m_tablelength;
	bool m_isTableChanged;
};
