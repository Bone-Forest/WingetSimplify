#include  <iostream>

//若系统版本大于等于1709（Windows10）请更新应用安装程序（此应用在Windows中用于安装MSstore应用和UWP应用）
//更新链接：https://www.microsoft.com/store/productId/9NBLGGH4NNS1
//若系统版本大于等于21h2（Windows11）则可以直接运行此程序

int main()
{
	using namespace std;

	string userInput, temp0, temp1;
	while (true)
	{
		cout << R"(选项：
   ----搜索输入 s  或者 搜索
   ----安装输入 i  或者 安装
   ----卸载输入 u  或者 卸载
   ----升级输入 up 或者 升级
   ----查询输入 sh 或者 查询
   ----查看安装的所有程序输入 l 或者 所有应用:
)";

		cin >> userInput;

		if (userInput == "s" || userInput == "S" || userInput == "搜索")
		{
			cout << "请输入要查找的软件名/ID:" << endl;
			cin >> userInput;
			temp0 = "winget search " + userInput;
			system(temp0.c_str());
			cout << "是否跳转到安装程序处[y/n]";
			cin >> userInput;
			if (userInput == "Y" || userInput == "y")
			{
				userInput = "i";
			}
			else
			{
				cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
				cin >> userInput;
				if (userInput == "y" || userInput == "Y")
				{
					continue;
				}
				else
				{
					break;
				}
			}
		}


		if (userInput == "i" || userInput == "I" || userInput == "安装")
		{
			cout << "请输入要安装的软件名/ID:" << endl;
			cin >> userInput;
			cout << "请输入程序的安装路径，默认请填Default" << endl;
			cin >> temp1;
			if (temp1 == "Default" || temp1 == "default")
			{
				temp0 = "winget install " + userInput;
			}
			else
			{
				temp0 = "winget install " + userInput + " -l \"" + temp1 + "\"";
			}
			cout << temp0;
			system(temp0.c_str());
			cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
			cin >> userInput;
			if (userInput == "y" || userInput == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}


		if (userInput == "u" || userInput == "U" || userInput == "卸载")
		{
			cout << "请输入要卸载的软件名/ID:" << endl;
			cin >> userInput;
			temp0 = "winget uninstall " + userInput;
			system(temp0.c_str());
			cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
			cin >> userInput;
			if (userInput == "y" || userInput == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}


		if (userInput == "up" || userInput == "Up" || userInput == "UP" || userInput == "升级")
		{
			cout << "请输入要升级的软件名/ID(输入--all全部升级):" << endl;
			cin >> userInput;
			temp0 = "winget upgrade " + userInput;
			system(temp0.c_str());
			cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
			cin >> userInput;
			if (userInput == "y" || userInput == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}

		
		if (userInput == "sh" || userInput == "Sh" || userInput == "SH" || userInput == "查询")
		{
			cout << "请输入要查看数据的软件名/ID:" << endl;
			cin >> userInput;
			temp0 = "winget show " + userInput;
			system(temp0.c_str());
			cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
			cin >> userInput;
			if (userInput == "y" || userInput == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}


		if (userInput == "l" || userInput == "L" || userInput == "所有应用")
		{
			cout << "提示：加载时间长是正常的" << endl;
			system("winget list");
			cout << "是否重新回到选择搜索，安装，卸载，所有程序处[y/n]";
			cin >> userInput;
			if (userInput == "y" || userInput == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}


		else
		{
			cout << "输入错误,请重新输入:";
			break;
		}
	}
		system("pause");
		return 0;
}