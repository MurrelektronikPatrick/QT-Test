#include "Model.h"

Model::Model() {
	this->m_sliderValue = 10;
	this->m_sliderValueChanged = true;

	this->m_buttonID = "radioButton_C";
	this->m_sliderValueChanged = true;

	this->m_checkboxID = "checkBox_2";
	this->m_sliderValueChanged = true;

	this->m_list = new std::string[MAX_LIST_LENGTH];
	this->m_listlength = 0;
	this->m_isListChanged = false;

	//this->m_list[0] = "ABCDEF";
	//this->m_list[1] = "TEST";
	//this->m_list[2] = "FOOFOO";
	//this->m_listlength = 3;
	//this->m_isListChanged = true;

	this->m_table = new std::string*[MAX_TABLE_LENGTH];
	for (int i = 0; i < MAX_TABLE_LENGTH; i++)
		this->m_table[i] = new std::string[2];
	this->m_tablelength = 0;
	this->m_isTableChanged = false;

	this->m_table[0][0] = "Fritz";
	this->m_table[0][1] = "Gerald";
	this->m_tablelength = 1;
	this->m_isTableChanged = true;

}

void Model::setSliderValue(int value)
{
	if (value <= 100)
	{
		this->m_sliderValue = value;
		this->m_sliderValueChanged = true;
		return;
	}
	PLOG(plog::warning) << "Entered wrong value for Slider: " << value;
	//qDebug() << "Entered wrong value for Slider: " << value;
}

int Model::getSliderValue()
{
	return this->m_sliderValue;
}

bool Model::isSliderValueChanged()
{
	return this->m_sliderValueChanged;
}

void Model::resetSliderValueChangedFlag()
{
	this->m_sliderValueChanged = false;
}

std::string Model::radioButtonToText(std::string buttonid)
{
	if (buttonid == "radioButton_A")
		return "Button A";
	if (buttonid == "radioButton_B")
		return "Button B";
	if (buttonid == "radioButton_C")
		return "Button C";
	if (buttonid == "radioButton_D")
		return "Button D";
	PLOG(plog::warning) << "Entered non existing button id: " << buttonid;
	return "NO VALUE";

}

void Model::setButtonID(std::string value)
{
	if (value == "radioButton_A" || value == "radioButton_B" ||
		value == "radioButton_C" || value == "radioButton_D")
	{
		this->m_buttonID = value;
		this->m_buttonIDChanged = true;
	}
	else
	{
		PLOG(plog::warning) << "Entered wrong value for radio button: " << value.c_str();
		//qDebug() << "Entered wrong value for radio button: " << value.c_str();
	}
}

std::string Model::getButtonID()
{
	return this->m_buttonID;
}

bool Model::isButtonIDChanged()
{
	return this->m_buttonIDChanged;
}

void Model::resetButtonIDChangedFlag()
{
	this->m_buttonIDChanged = false;
}

std::string Model::checkBoxToText(std::string buttonid)
{
	if (buttonid == "checkBox_1")
		return "Button 1";
	if (buttonid == "checkBox_2")
		return "Button 2";
	if (buttonid == "checkBox_3")
		return "Button 3";
	if (buttonid == "checkBox_4")
		return "Button 4";
	PLOG(plog::warning) << "Enterednon existing button id: " << buttonid;
	return "NO VALUE";

}

void Model::setCheckBoxID(std::string value)
{
	if ( value == "checkBox_1" || value == "checkBox_2" ||
		 value == "checkBox_3" || value == "checkBox_4" )
	{
		this->m_checkboxID = value;
		this->m_checkboxIDChanged = true;
	}
	else
	{
		PLOG(plog::warning) << "Entered wrong value for checkbox: " << value.c_str();
		//qDebug() << "Entered wrong value for checkbox: " << value.c_str();
	}
}

std::string Model::getCheckBoxID()
{
	return this->m_checkboxID;
}

bool Model::isCheckBoxIDChanged()
{
	return this->m_checkboxIDChanged;
}

void Model::resetCheckBoxIDChangedFlag()
{
	this->m_checkboxIDChanged = false;
}

void Model::addListItem(std::string value)
{
	if (this->m_listlength <= MAX_LIST_LENGTH && value != "")
	{
		this->m_list[this->m_listlength] = value;
		this->m_isListChanged = true;
		this->m_listlength++;
	}
	else
	{
		PLOG(plog::warning) << "Either the list is full or you entered empty string, "
			<< "both is not okay";
		/*qDebug() << "Either the list is full or you entered empty string, "
			<< "both is not okay";*/
	}
}

bool Model::removeListItem(std::string value)
{
	bool foundItemFlag = false;
	for (int listIterator = 0; listIterator < this->m_listlength; listIterator++) {
		if (this->m_list[listIterator] == value)
		{
			foundItemFlag = true;
		}

		if (foundItemFlag && listIterator < this->m_listlength - 1)
		{
			this->m_list[listIterator] = this->m_list[listIterator + 1];
		}
	}

	// If the value is found in the list, the last value is two times at the end,
	// so the list has to be shifted right once to remove it.
	// For example the list is (1-2-3-4) and value 3 should be found
	// Now the list is (1-2-4-4). After shifting right once, it is (1-2-4).
	if (foundItemFlag)
	{
		if (this->m_listlength > 1)
		{
			std::string* p = new std::string[MAX_LIST_LENGTH];

			std::copy(this->m_list, this->m_list + this->m_listlength - 1, p);

			std::swap(this->m_list, p);

			delete[]p;
		}
		/*else
		{
			delete this->m_list;
			this->m_list = new std::string[MAX_LIST_LENGTH];
		}*/
		this->m_listlength--;

		if (this->m_listlength < 0)
			this->m_listlength = 0;

		this->m_isListChanged = true;
		return true;
	}
	return false;
}

std::string* Model::getList()
{
	return this->m_list;
}

int Model::getListLength()
{
	return this->m_listlength;
}

bool Model::isListChanged()
{
	return this->m_isListChanged;
}

void Model::resetListChangedFlag()
{
	this->m_isListChanged = false;
}

void Model::addTableItem(std::string value1, std::string value2)
{
	if (this->m_tablelength < MAX_LIST_LENGTH)
	{
		this->m_table[this->m_tablelength][0] = value1;
		this->m_table[this->m_tablelength][1] = value2;
		this->m_isTableChanged = true;
		this->m_tablelength++;
	}
	else
	{
		PLOG(plog::warning) << "Either the list is full or you entered empty string, "
			<< "both is not okay";
		/*qDebug() << "Either the list is full or you entered empty string, "
			<< "both is not okay";*/
	}
}

std::string** Model::getTable()
{
	return this->m_table;
}

int Model::getTableLength()
{
	return this->m_tablelength;
}

bool Model::isTableChanged()
{
	return this->m_isTableChanged;
}

void Model::resetTableChangedFlag()
{
	this->m_isTableChanged = false;
}
