#include "rlm3-flash.h"
#include "Mock.hpp"


extern void RLM3_Flash_Init()
{
	MOCK_CALL();
}

extern void RLM3_Flash_Deinit()
{
	MOCK_CALL();
}

extern bool RLM3_Flash_IsInit()
{
	MOCK_CALL();
	MOCK_RETURN(bool);
}

extern bool RLM3_Flash_Write(uint32_t address, const uint8_t* data, size_t size)
{
	MOCK_CALL(address, MockData(data, size));
	MOCK_RETURN(bool);
}

extern bool RLM3_Flash_Read(uint32_t address, uint8_t* data, size_t size)
{
	MOCK_CALL(address);
	MockData data_object(data, size);
	MOCK_OUTPUT(data_object);
	MOCK_RETURN(bool);
}
