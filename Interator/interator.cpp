#include "interator.h"

int main()
{
	ConcreteAggregate* pName = NULL;
	pName = new ConcreteAggregate();
	if (NULL != pName)
	{
		pName->Push("hello");
		pName->Push("word");
		pName->Push("cxue");
	}
	Iterator* iter = NULL;
	iter = pName->CreateIterator();
	if (NULL != iter)
	{
		string strItem = iter->First();
		while (!iter->IsEnd())
		{
			cout << iter->GetCur() << " is ok" << endl;
			iter->Next();
		}
	}
	//system("pause");
	return 0;
}