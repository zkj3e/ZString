class ZString
{
public:
	ZString();
	ZString(const ZString &strOther);
	ZString(const char *cStr);

	~ZString();

	typedef unsigned int SIZE_T;
	#define npos -1

	SIZE_T length();

	bool isEmpty();

	ZString reverse();

	void clear();

	ZString &chop(int n);

	ZString trimLeft();
	ZString trimRight();
	ZString trim();

	ZString & append(char c);
	ZString & append(const ZString &str);

	ZString & remove(int i);
	ZString & remove(char c);
	ZString & remove(const ZString &str);

	const char at(int i) const;
	const char operator[](int i) const;

	int indexOf(char c,int iFrom = 0);
	int indexOf(const ZString &str,int iFrom = 0);

	int lastIndexOf(char c,int iFrom = -1);
	int lastIndexOf(const ZString &str,int iFrom = -1);
	
	bool contains(char c);
	bool contains(const ZString &str);
	
	ZString & insert(int iPos,char c);
	ZString & insert(int iPos,const ZString &str);

	ZString & replace(int iPos,char c);
	ZString & replace(char cSrc,char cDst);
	ZString & replace(const ZString &strSrc,const ZString &strDst);

	ZString left(int iPos);
	ZString right(int iPos);
	ZString mid(int iPos,int iLen = -1);

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

	


private:
	char *m_pData;

};