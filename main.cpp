#include  <iostream>

//��ϵͳ�汾���ڵ���1709��Windows10�������Ӧ�ð�װ���򣨴�Ӧ����Windows�����ڰ�װMSstoreӦ�ú�UWPӦ�ã�
//�������ӣ�https://www.microsoft.com/store/productId/9NBLGGH4NNS1
//��ϵͳ�汾���ڵ���21h2��Windows11�������ֱ�����д˳���

int main()
{
	using namespace std;

	string userInput, temp0, temp1;
	while (true)
	{
		cout << R"(ѡ�
   ----�������� s  ���� ����
   ----��װ���� i  ���� ��װ
   ----ж������ u  ���� ж��
   ----�������� up ���� ����
   ----��ѯ���� sh ���� ��ѯ
   ----�鿴��װ�����г������� l ���� ����Ӧ��:
)";

		cin >> userInput;

		if (userInput == "s" || userInput == "S" || userInput == "����")
		{
			cout << "������Ҫ���ҵ������/ID:" << endl;
			cin >> userInput;
			temp0 = "winget search " + userInput;
			system(temp0.c_str());
			cout << "�Ƿ���ת����װ����[y/n]";
			cin >> userInput;
			if (userInput == "Y" || userInput == "y")
			{
				userInput = "i";
			}
			else
			{
				cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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


		if (userInput == "i" || userInput == "I" || userInput == "��װ")
		{
			cout << "������Ҫ��װ�������/ID:" << endl;
			cin >> userInput;
			cout << "���������İ�װ·����Ĭ������Default" << endl;
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
			cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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


		if (userInput == "u" || userInput == "U" || userInput == "ж��")
		{
			cout << "������Ҫж�ص������/ID:" << endl;
			cin >> userInput;
			temp0 = "winget uninstall " + userInput;
			system(temp0.c_str());
			cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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


		if (userInput == "up" || userInput == "Up" || userInput == "UP" || userInput == "����")
		{
			cout << "������Ҫ�����������/ID(����--allȫ������):" << endl;
			cin >> userInput;
			temp0 = "winget upgrade " + userInput;
			system(temp0.c_str());
			cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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

		
		if (userInput == "sh" || userInput == "Sh" || userInput == "SH" || userInput == "��ѯ")
		{
			cout << "������Ҫ�鿴���ݵ������/ID:" << endl;
			cin >> userInput;
			temp0 = "winget show " + userInput;
			system(temp0.c_str());
			cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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


		if (userInput == "l" || userInput == "L" || userInput == "����Ӧ��")
		{
			cout << "��ʾ������ʱ�䳤��������" << endl;
			system("winget list");
			cout << "�Ƿ����»ص�ѡ����������װ��ж�أ����г���[y/n]";
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
			cout << "�������,����������:";
			break;
		}
	}
		system("pause");
		return 0;
}