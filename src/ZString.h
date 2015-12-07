class ZString
{
public:
	ZString();
	ZString(const ZString &strOther);
	ZString(const char *cStr);

	~ZString();

	typedef unsigned int SIZE_T;
	#define npos -1

	SIZE_T length() const;

	bool isEmpty() const;

	ZString reverse() const;

	void clear();

	ZString chop(int n) const;

	ZString trimLeft() const;
	ZString trimRight() const;
	ZString trim() const;

	ZString & append(char c);
	ZString & append(const ZString &str);

	ZString & remove(int i);
	ZString & remove(char c);
	ZString & remove(const ZString &str);

	const char at(int i) const;
	const char operator[](int i) const;

	int indexOf(char c,int iFrom = 0) const;
	int indexOf(const ZString &str,int iFrom = 0) const;

	int lastIndexOf(char c,int iFrom = -1) const;
	int lastIndexOf(const ZString &str,int iFrom = -1) const;
	
	bool contains(char c) const;
	bool contains(const ZString &str) const;
	
	ZString & insert(int iPos,char c);
	ZString & insert(int iPos,const ZString &str);

	ZString & replace(int iPos,char c);
	ZString & replace(char cSrc,char cDst);
	ZString & replace(const ZString &strSrc,const ZString &strDst);

	ZString left(int iPos) const;
	ZString right(int iPos) const;
	ZString mid(int iPos,int iLen = -1) const;

	ZString & operator=(const ZString &strOther);
	ZString & operator=(const char *cStr);
	
	bool operator==(const ZString &strOther) const;
	bool operator!=(const ZString &strOther) const;
	bool operator>(const ZString &strOther) const;
	bool operator<(const ZString &strOther) const;
	bool operator<=(const ZString &strOther) const;
	bool operator>=(const ZString &strOther) const;

	ZString & operator+=(char c); 
	ZString & operator+=(const ZString &strOther);

	char *data();
	const char *data() const;

	std::string toStdString() const;
	short toShort(bool *ok = 0,int iBase = 10) const;
	int toInt(bool *ok = 0,int iBase = 10) const;
	long toLong(bool *ok = 0,int iBase = 10) const;
	long long toLongLong(bool *ok = 0,int iBase = 10) const;

	unsigned short toUShort(bool *ok = 0,int iBase = 10) const;
	unsigned int toUInt(bool *ok = 0,int iBase = 10) const;
	unsigned long toULong(bool *ok = 0,int iBase = 10) const;
	unsigned long long toULongLong(bool *ok = 0,int iBase = 10) const;
	
	float toFloat(bool *ok = 0) const;
	double toDouble(bool *ok = 0) const;
	
	static ZString fromStdString(const std::string &str);
	static ZString fromShort(short num,int iBase = 10);
	static ZString fromInt(int num,int iBase = 10);
	static ZString fromLong(long num,int iBase = 10);
	static ZString fromLongLong(long long num,int iBase = 10);
	static ZString fromUShort(unsigned short num,int iBase = 10);
	static ZString fromUInt(unsigned int num,int iBase = 10);
	static ZString fromULong(unsigned long num,int iBase = 10);
	static ZString fromULongLong(unsigned long long num,int iBase = 10);
	static ZString fromFloat(float num);
	static ZString fromDouble(double num);

	enum SplitBehavior
	{
		KeepEmptyParts = 0,
		SkipEmptyParts = 1,
	};

	std::list<ZString> split(char sp,SplitBehavior behavior = KeepEmptyParts) const;
	std::list<ZString> split(const ZString &sp,SplitBehavior behavior = KeepEmptyParts) const;

	ostream &operator<<(ostream &output) const;
	istream &operator>>(istream &input) const;

private:
	char *m_pData;

};