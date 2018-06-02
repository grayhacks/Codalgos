#include <iostream>
#include <string.h> 
#include <string>
#include <cstddef>
class string
{
	char str1[10000], str2[10000], str3[10000];//declaring the char variable;
	//Please get fed up with more knowledge about variables to understand about datatypes.
	int l, m, n, i, j, flag, ans;
	public:
	string();
	~string()
	{
		
	}
	void input()
	{
		std::cout<<"Enter first string:";
		std::cin.getline(str1, 10000);
		std::cout<<"Enter second string:";
		std::cin.getline(str2, 10000);
	}
	void process()
	{
		l=strlen(str1);//strlen is used for getting the total number of elements(characters) in a string.
		m=strlen(str2);
		flag=-1;
		if(l<m)
		{
			for(i=0;i<l;i++)//syntax for "for loop" is like "for(initial value; to final value; increment or decrement)"
			{
				for(j=0;j<m;j++)
				{
					if(str2[j]==str1[i])//"if" is used to check for truthness for executing the block according to the conditions.
					{
						flag++;//this increase the value of flag by 1, each time it is executed.
						str3[flag]=str2[j];
						break;//to save time by going outside of inner loop after it's work is done.
					}
				}
			}
		}
		else
		{
			for(i=0;i<m;i++)//syntax for "for loop" is like "for(initial value; to final value; increment or decrement)"
			{
				for(j=0;j<l;j++)
				{
					if(str1[j]==str2[i])//"if" is used to check for truthness for executing the block according to the conditions.
					{
						flag++;//this increase the value of flag by 1, each time it is executed.
						str3[flag]=str1[j];
						break;//to save time by going outside of inner loop after it's work is done.
					}
				}
			}
		}
	}
	void output()
	{
		n=strlen(str3);
		std::cout<<n<<"\n";
		std::cout<<flag<<"\n";
		flag++;
		if(flag!=-1)
		{
			ans=l+m-(2*flag);
		}
		else
		{
			ans=l+m;
		}
		std::cout<<ans<<"\n";
		std::cout<<str3<<"\n";
	}
};
string::string()
{
	l=0;
	m=0;
	n=0;
	i=0;
	j=0;
	flag=0;
	ans=0;
}
int main()
{
	string obj;
	int t, s;
	s=0;
	std::cout<<"Enter number of test cases:";
	std::cin>>t;
	std::cin.ignore(10000, '\n');
	do
	{
		obj.input();
		obj.process();
		obj.output();
		s++;
	}while(s<t);
	return 0;
}
