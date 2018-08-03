class Account
{
public:
	Account(double m, const char *pNumber);
	~Account();
	static double GetRate();
	static void SetRate(double r);
private:
	static double m_rate;
	double m_amount;
	char *m_number;
};