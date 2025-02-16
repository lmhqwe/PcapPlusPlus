#ifndef PACKETPP_PARSEDRESULT
#define PACKETPP_PARSEDRESULT

#include <string>

/**
 * @namespace pcpp
 * @brief The main namespace for the PcapPlusPlus lib
 */
namespace pcpp
{

// ParsedResult is used to store results
class ParsedResult
{
	bool m_tuplenameSet;
	std::string m_tuplename;

	int IpLayerCount;

  public:
	ParsedResult() : m_tuplenameSet(false), IpLayerCount(0)
	{
	}

	void SetTuplename(std::string s)
	{
		if (m_tuplenameSet)
		{
			return;
		}
		m_tuplename = s;
		m_tuplenameSet = true;
		return;
	}
	std::string GetTuplename()
	{
		return m_tuplename;
	}

	void CountIP()
	{
		IpLayerCount++;
	}

	int getIPLayerCount()
	{
		return IpLayerCount;
	}
};

} // namespace pcpp

#endif
