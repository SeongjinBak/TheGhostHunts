/*�� */
/*test commit asung*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void howto(void)
{		

	/*�־Ƽ��� Ŀ���մϴ�*/
	/*�鼺���� Ŀ���մϴ� 190717*/
	int bullet;
	char enter = 'q';


	printf("************************************************************\n");
	printf("<><>Ʃ�丮��<><>\n");
	printf("<><> ���ֹ��� �� / 1~3 / 10�� / 10hp <><>\n�̰��� ������ ���̰�, 10���Ÿ���ŭ ������ ������ �ǹ��մϴ�.\n");
	printf("�系�� 1~3 ������ ����, �� 2�� �Է��ؾ� ���� �߻��ų�� �ֽ��ϴ�. ��, �� ���� 10�� ����hp�� �ǹ��մϴ�.�系�� ���� �ı����� 10�Դϴ�.\n");
	printf("�系�� ���� ������ �Ÿ��� 1�� �̸��� �ȴٸ� �系�� �װԵ˴ϴ�. ��, �系�� ���� ��������� ������ �系�� �Ÿ��� �������� �˴ϴ�.\n");
	printf("�ܹ��� '��ȿ���ڹ���'�� �� ����� ������, '�ϰ��ʻ�' ȿ���� ����˴ϴ�. � ������ '�ϰ��ʻ�'�� �ƴϸ� ������� �� �Ҽ��� �ֽ��ϴ�.\n");
	printf("�系: \"��, �� ���� ��ƺ���.\"\n(1~3 ������ ���ڸ� �Է��ϼ���.)\n");
	scanf_s("%d", &bullet); printf(".....��!\n");
	if (bullet != 2)
	{
		while (bullet != 2)
		{
			printf("1~3 ������ ���� ���߼���.(�� : 1 2 3 �� 1�� 3�� ������ ��)\n");
			scanf_s("%d", &bullet); printf(".....��!\n");
		}
	}
	printf("\a<><>'���ֹ��� ��'�� ��ɿ� �����Ͽ���!<><>\n");
	printf("<><>'���ֹ��� ��'�� ��ü�� �������, ���ڸ��� '����' �� ���Ҵ�!<><>\n");
	printf("************************************************************\n");
}

void intro(void)
{
	char enter = 'q';      //�� ������ ���ڷ� ����ǹǷ� �߸��Է��� �����ϱ����� qw�� ��.
	printf("��� : 'q' \n");

	// �Ʒ� �ִ� ��簡 �ʹ� ��� ������ �����ϱ�**
	printf("************************************************************\n");
	printf("\a\a\a\a\a\a\a������ ���� �� �ֶ� �� ���� ä ������ �Ǳ�\a�� ����, ����\a�� ���� ū xx������ �⹦�� ���� ��������..\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("���㿡 ����� �������� ����̰� ���� Ŀ����, ��ҿ� �����ϴ� ���� ���̸� ������ ���̰� �Ǵ����� �װ��̴�. ������� ���� �볷���� �̷����� �Ͼ�⵵ �ߴ�\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("���������� xx���� ���ظ� ���� ���� �������� ����ġ�� ��ҵ鿡 ��Ӹ��� ������ �־���. ���� ������ ���� ���� ������ �ν��� ������Ű�� ���� ������ Ư���� ��ġ�� ���ؾ߸� �ߴ�.\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�̿� ���� �����ϴ� ���ڿ��� �̷��� �������� ������ ���� ���� �����϶�� �ӹ��� �����⿡ �̸���.\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("��� ��...\n����: \"�Ʒڿɱ� Ȳ���Ͽ��� �������� Ư���ൿ�� ������� ��ȭ�� �ͽ��� �����̶�� �ۿ� �������� �ʽ��ϴ�. \"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("��: \"��.���� ���� ����̶��, �ͽ��� ���� Ǯ���־�� �ϰڱ���. ���� ������ ���İ� ä �������� �ʾҴµ� �������� ���� �Ҽ���, �� �ÿ��� ū �Ը��� ���縦 �������� ����. ����ϸ� ���ڴ���?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"........�׷��ٸ� ���� ���ֹ����°��� ��ڽ��ϱ�.\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("��: \"����?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"�ո��� �޵�� ���� �� ��� ������ �鷶����, ������ ������ �Ҹ� �� �系�� �ֽ��ϴ�. ���� �� �״� ������ ���� �������� ���� �� �ͽ��� ���δٴ�, ���Ĺ��ȴٴ� ������ ġ�ϸ� ���� ���ߴٰ� �մϴ�.�� �������� ���� ������ ���� ������ �غ��Ҷ� �׿� �����ϴ� ���� �ֽ��ϴ�.�״� �������� �ſ� ���߽��ϴ�.�� ���� �� �� �׸� �ٽ� �������� �װ� ���� �� ����ߴ� ���� ������ �̻��Ѱ͵��� ���δٰ� �߽��ϴ�.  ���� �������� �̿��Ͽ� �ͽ��� �������� �������.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("��: \"�Ƶ��,���� �ʸ� �� ���󿡼� ���� �ϴ´�. �׷��� �Ͽ���. ������ �鼺���� �Ϳ� ���� �ȵɰ��̾�....\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf(".. dd���� �系�� �� �� \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"������..�̷��� �Ǿ����� �ڳװ� �����־�߰ڳ�. ��ղ����� �� ���� ������ �ڳ��� ���ϴ°��� �����̵� ����ֱ�� �ϼ̳�. �ڳװ� �ʿ��� ���� ���� ���� ���ڳ�. \"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"������� ������ ���ƴٰ� ������. ������ ���ڴ�, ���ڴ��� ������ �ö󰡽Ƕ� �ͽ��� �� ��ƾ߰ڴٶ�� ���� ���� �� Ȥ�ó� �ϴ� ������ �� źȯ���� ���̴� �ͽ��� ��ƺ��ҽ��ϴ�.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"�ƴ� ���� źȯ�� �̶��?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"������, ������ ����óġ ���� ���� źȯ�Դϴ�. ��, '����� �Ǹ� �ӱ��� źȯ' �Դϴ�.\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"�׷�, ��ƺ��Ҵٰ� �Ͽ���? ��� �Ǿ���?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"�ͽ��� ��������ϴ�. �׸��� �� �ڸ��� �̰��� �����־����ϴ�.\" (..��������)\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"��!\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"���ڴԵ� �ƽð�����. �̰��� ȥ�� �����Դϴ�. ������ ���� ȭ��� ���Ƶ�� ��ź���� ���忡�� ����� ����� �� ������ ��¦�Ÿ��� �װ��Դϴ�. �װ��� ���൹���� �� ũ���� �������� �����־����ϴ�. \" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("����: \"�׷�����..\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"����, �� ���� ������ �ұ��� ����� ��� ���� ���ʽÿ�.\" \n");
	howto();       //Ʃ�丮��
	printf("����: \"�̷�����... ...! �� '����'�� ��� ���ҽ�Ű�� �ǰڱ�!. ���͵��� ����ְ�. ����鿡�� ��з�. rr��߷� ����. �Ǹ� �ӱ��� źȯ�� �� ���� ���غ��ڳ�. �������� �ڳ׿��� �ñ�ڳ�.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("�系: \"rr��߸� Ȯ���ϰ� �����ϸ� �����δ� �̷����� �߻����� �ʰ���...\" \n"); printf("\n");
	printf("\n");
	printf("************************************************************\n");
}
typedef struct monster
{
	int hp;                       //ü��
	int range;                    //�� ����
	int head;                     //��弦
	int effective_range_a;          //��ȿ Ÿ�� ���� a
	int effective_range_b;          //��ȿ Ÿ�� ���� b
	int distance;                 //������
	int distance_rate;            //������ �󸶳� ���̴���.
	char name[30];                  //�̸�

}Monster;


void game_over(void)      //�������� �й�� ����� ����.  ��������.��Ű��....? �ֶ�
{
	printf("\n\n\n\n\n\n");
	exit(0);
}

void battle(Monster object, int pot)         //pot�� main �Լ����� �����ϱ�.
{
	int bullet;
	int cnt_g = 0;
	int cnt_b = 0;


	printf("************************************************************\n");
	if (pot == 0) { printf("<><>TIP : ������� 1~25, �� 25�� ���ڹ����� ���� ���� ���� ��, �� ���� ȸ���� '��ȿ���ڹ���(=��ȿ�������� �����Ǵ� ����)'�� 4~10�ϼ���, 16~22�ϼ��� �ֽ��ϴ�.<><>\n"); }
	printf("���ݱ��� óġ�� ���� �� : (%d/7) \n", pot);         //�����ʿ�
	printf("<><>����� �����մϴ�...!<><>\n");
	printf("<><> %s / 1~%d / %d�� / %dhp <><>\n", object.name, object.range, object.distance, object.hp);
	printf("�系: \"��,�����غ���...!\"\n");
	printf("<><>1 ~ %d ���� ���ڸ� ���� '%s'��(��) óġ�ϼ���.<><>\n", object.range, object.name);
	printf("\n");
	while (object.hp > 0)
	{
		printf("\n�����Է�: ");
		scanf_s("%d", &bullet); printf(".....��!\n");   //�Ҹ����� �ڵ�
		if (pot == 0) { object.distance_rate = 1; object.effective_range_a = rand() % 5 + 1; object.effective_range_b = object.effective_range_a + 5; object.head = object.effective_range_a + 3; }
		else if (pot == 1) { object.distance_rate = 2; object.effective_range_a = rand() % 7 + 1; object.effective_range_b = object.effective_range_a + 7; object.head = object.effective_range_a + 4; }
		else if (pot == 2) { object.distance_rate = 3;  object.effective_range_a = rand() % 7 + 1; object.effective_range_b = object.effective_range_a + 7; object.head = object.effective_range_a + 4; }
		else if (pot == 3) { object.distance_rate = 3; object.effective_range_a = rand() % 10 + 1; object.effective_range_b = object.effective_range_a + 7; object.head = object.effective_range_a + 4; }
		else if (pot == 4) { object.distance_rate = 4; object.effective_range_a = rand() % 15 + 1; object.effective_range_b = object.effective_range_a + 5; object.head = object.effective_range_a + 3; }
		else if (pot == 5) { object.distance_rate = 10; object.effective_range_a = rand() % 25 + 1; object.effective_range_b = object.effective_range_a + 5; object.head = object.effective_range_a + 3; }
		else if (pot == 6) { object.distance_rate = 10; object.effective_range_a = rand() % 40 + 1; object.effective_range_b = object.effective_range_a + 10; object.head = object.effective_range_a + 5; }
		if (bullet >= object.effective_range_a && bullet <= object.effective_range_b)
		{
			cnt_g++;
			object.distance = object.distance - object.distance_rate;
			if (bullet == object.head)
			{
				printf("\a\a�١١�'%s'��(��) '�ϰ��ʻ�'�� óġ�߽��ϴ�...!�١١�\n", object.name);
				if (cnt_g == 1) { printf("�系: \"���Ҿ�...!\"\n"); }
				else if (cnt_g == 2) { printf("�系: \"�� �Ӹ� ũ�⸦ ſ�ض�...!\"\n"); }
				else if (cnt_g == 3) { printf("�系: \"�׳�, �����̺��� �Ӹ��� �ſ� ũ����...!\"\n"); }
				else if (cnt_g == 4) { printf("�系: \"�׹����� �Ӹ��� ��ٴ�.. ���� ���� �׾���. ����...!\"\n"); }
				else if (cnt_g == object.distance - object.distance_rate) { printf("�系: \"����...�׳�, �� ���տ� �����ִ���? ����ó�� ������ �ͺ��Ŷ� ��������!...\"\n"); }
				break;
			}
			object.hp -= 10;       //10�� ����. 

			if (object.hp <= 0) { printf("\a�١١�'%s'�� ��ɿ� �����Ͽ����ϴ�.�١١�\n", object.name); break; }
			printf("'%s'���� 10�� ���ظ� �������ϴ�...! ���� ���� hp: %d\n", object.name, object.hp);
			printf("������ �����κ��� %d�� ��...!\n", object.distance);       //n������ rate��ŭ�� ���� ��.
			if (object.distance <= 0) { printf("'%s'��(��) �系���� �����Ͽ� ������ �̸��� ��ó�� ���� ������ �Ű���ϴ�...�系�� ����Ͽ����ϴ�.\n�١١�GAME OVER�١١�\n", object.name); game_over(); }      //���� ����.
			if (cnt_g == object.distance - object.distance_rate) { printf("\a�١١�'%s'��(��) óġ�� �� �ִ� ������ ��ȸ�Դϴ�.�١١�\n", object.name); }
			if (cnt_g == 1) { printf("�系: \"��������...!\"\n"); }
			else if (cnt_g == 2) { printf("�系: \"�Ҽ��ִ�...!\"\n"); }
			else if (cnt_g == 3) { printf("�系: \"��¦ ������ �Ǳ��ϳ�...!\"\n"); }
			else if (cnt_g == 4) { printf("�系: \"���� �� �Դ�...!\"\n"); }
			else if (cnt_g >= 5) { printf("�系: \"�� �׾��...!\"\n"); }
			else if (cnt_g == object.distance - object.distance_rate) { printf("�系: \"�̹��� ������ ��ȸ��.. �� �ѹ߷� ������...! ��������...!\"\n"); }

		}

		else if (bullet < object.effective_range_a || bullet > object.effective_range_b)        //�ٽ� �����ϱ�.
		{
			cnt_b++;
			object.distance = object.distance - object.distance_rate;

			printf("�Ѿ��� ���������ϴ�...!\n");
			printf("������ �����κ��� %d�� ��...!\n", object.distance);       //n������ rate��ŭ�� ���� ��.
			if (object.distance <= 0) { printf("'%s'��(��) �系���� �����Ͽ� ������ �̸��� ��ó�� ���� ������ �Ű���ϴ�...�系�� ����Ͽ����ϴ�.\n�١١�GAME OVER�١١�\n", object.name); game_over(); }
			if (cnt_b == object.distance - object.distance_rate) { printf("\a�١١�'%s'��(��) óġ�� �� �ִ� ������ ��ȸ�Դϴ�.�١١�\n", object.name); }
			if (cnt_b == 1) { printf("�系: \"��������...!\"\n"); }
			else if (cnt_b == 2) { printf("�系: \"����...!\"\n"); }
			else if (cnt_b == 3) { printf("�系: \"���� �����±�...!\"\n"); }
			else if (cnt_b == 4) { printf("�系: \"�̴�δ� �ȵ�...!\"\n"); }
			else if (cnt_b >= 5) { printf("�系: \"���� �� �װڱ���...!\"\n"); }
			else if (cnt_b == object.distance - object.distance_rate) { printf("�系: \"�̹��� ������ ��ȸ��.. �� �ѹ߷� ������...! �̷������� �������� ����..!\"\n"); }

		}

	}      //while�� ��

	printf("<><\a>'%s'�� ��ɿ� �����Ͽ���!<><>\n", object.name);
	printf("<><>'%s'�� ��ü�� �������, ���ڸ��� '����' �� ���Ҵ�!<><>\n", object.name);
	if (cnt_g == 1) { printf("�系: \"������! �ս��� ����̾���...!\"\n"); }
	else if (cnt_g == 2) { printf("�系: \"ũ������������...!\"\n"); }
	else if (cnt_g == 3) { printf("�系: \"������������...!\"\n"); }
	else if (cnt_g == 4) { printf("�系: \"����������...!\"\n"); }
	else if (cnt_g == 5) { printf("�系: \"��������...!\"\n"); }
	else if (cnt_g >= 6) { printf("�系: \"������...!\"\n"); }
	else if (cnt_g == object.distance - object.distance_rate) { printf("�系: \"ũ������..! �׷��׷���, �̷������� ������ ����...!\"\n"); }
	printf("************************************************************\n");
}




int main(void)
{

	int pot = 0;               //������
	char go;
	Monster stock1, stock2, stock3, stock4, stock5;
	Monster alien;
	Monster army;


	srand((unsigned int)time(NULL));
	stock1.distance = 10; stock1.distance_rate = 1; stock1.effective_range_a = rand() % 5 + 1; stock1.effective_range_b = stock1.effective_range_a + 5; stock1.head = stock1.effective_range_a + 3; stock1.hp = 30;  stock1.range = 10;
	stock2.distance = 15; stock2.distance_rate = 2; stock2.effective_range_a = rand() % 7 + 1; stock2.effective_range_b = stock2.effective_range_a + 7; stock2.head = stock2.effective_range_a + 4; stock2.hp = 40; stock2.range = 15;
	stock3.distance = 15; stock3.distance_rate = 3; stock3.effective_range_a = rand() % 7 + 1; stock3.effective_range_b = stock3.effective_range_a + 7; stock3.head = stock3.effective_range_a + 4; stock3.hp = 40; stock3.range = 15;
	stock4.distance = 20; stock4.distance_rate = 3; stock4.effective_range_a = rand() % 10 + 1; stock4.effective_range_b = stock4.effective_range_a + 7; stock4.head = stock4.effective_range_a + 4; stock4.hp = 50; stock4.range = 20;
	stock5.distance = 20; stock5.distance_rate = 4; stock5.effective_range_a = rand() % 15 + 1; stock5.effective_range_b = stock5.effective_range_a + 5; stock5.head = stock5.effective_range_a + 3; stock5.hp = 50; stock5.range = 20;
	alien.distance = 30; alien.distance_rate = 10; alien.effective_range_a = rand() % 25 + 1; alien.effective_range_b = alien.effective_range_a + 5; alien.head = alien.effective_range_a + 3; alien.hp = 70; alien.range = 30;
	army.distance = 50; army.distance_rate = 10; army.effective_range_a = rand() % 40 + 1; army.effective_range_b = army.effective_range_a + 10; army.head = army.effective_range_a + 5; army.hp = 100; army.range = 50;
	strcpy_s(stock1.name, "�Ǹ��մ� ��");
	strcpy_s(stock2.name, "������ �����");
	strcpy_s(stock3.name, "������ ����");
	strcpy_s(stock4.name, "������ ����");
	strcpy_s(stock5.name, "�ͽſ�Ȧ�� ȣ����");
	strcpy_s(alien.name, "���������� ���������");
	strcpy_s(army.name, "Ȧ�� �ս� ��������");



	printf("�����������������������ͻ�ɦ���������������������\n");
	printf("��������:����, ����:ADNYSSTUDIO, BY C-LANGUAGE��\n");
	printf("��������������������������������������������������\n");
	printf("\n");
	intro();// ��Ʈ�� �ڸ�.
	printf("�系: \"���Ⱑ rr���.. �������� ������ ��±�...\"\n");
	printf("���̵�: \"���ƾ�!!!!!!!...\"\n");
	printf("�系: \"����������?...\"\n");
	printf("����1: \"������! �������� �� �����Ŀ�! ��ģ���� ���� �־��!...\"\n");
	printf("�系: \"ù �������� ����̱�...!\"\n");
	printf("\n�١١�'q'�� �����ø� ������ ���۵˴ϴ�.�١١�\n\n");                   // �̷��� ����. �����ʿ�
	scanf_s("%c", &go);

	battle(stock1, pot); pot++;  //����

	printf("�系: \"��..������ ���� �ʾ����� ��������..\"\n");
	printf("��� �ָ� ��...\n");
	printf("???:\"��������!!!!\"\n");
	printf("�系: \"����...!?\"\n");

	battle(stock2, pot); pot++;  //����

	printf("�系: \"�̷��� ����� ���� ����� ��ٴ�..���̰� ����..\"\n");
	printf("������..\n");

	printf("�系: \"?!...���� �� ��ü��?...\"\n");
	printf("�系: \"���� �־��� �������� ������� �� �׾�������..!\"\n");
	printf("�ҳ�: \"������..�츮���� ã�����... � ���� �������� �������...\"\n");
	printf("�系: \"...��.....\"\n");
	printf("��....!\"\n");
	printf("�ҳ�: \"����������!!!! ��Ų�ǰ�...! \"\n");

	battle(stock3, pot); pot++;  //����

	printf("�系: \"�Ҹ���ġ�±�..��ü�� ������ �ϴٴ�....!\"\n");
	printf("�系: \"�� ������ ���� �������� �����ؾ߰ھ�..\"\n");


	printf("gg��..\n");
	printf("�系: \"ũ��...!\"\n");

	battle(stock4, pot); pot++;  //����

	printf("�系: \"�޽��̶��... �ʹ��Ѱ� �ƴѰ�.. �׷��� �� ���츮�� ������ �� ���� ���� �Ϸᱺ..\"\n");
	printf("???:\"������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\"\n");
	printf("�系: \"!!!!!\"\n");

	battle(stock5, pot); pot++;  //����


	printf("�系: \"���� �Ϸ�...! �����ϴ� ���� ���� ���ڿ��� ���� �� '����'�� �����ؾ߰ھ�. ������ ����...\"\n");
	printf("...������ xx��..\n");
	printf("��..���...����...����������\a��..!\n");
	printf("�系: \"���̷��� ������������ ��������..? �� ���� ����!!\"\n");
	printf("??!?: \"�ٿ�������������......!!!!\"\n");

	battle(alien, pot); pot++;  //����

	printf("�系: \"�Ŀ�..������ �����̶� ������ �� ������ ����..\"\n");
	printf("�ñ� ��..");
	printf("����: \"�����..! �ڳװ� �س� �� �ϰ��־���...! � �̸��� ��, �������� �����ְ�..!\"\n");
	printf("����: \"ũ��...ũ��......!\"\n");
	printf("�ο�.....  ¸�׶�...!\n");
	printf("������ ������...! ��ȥ���� ������ ���� ��������...!\n");

	printf("�ͽſ� ���� ����: \"���.. ���ڸ� � �׿���!! �׿�!!�׿�!!!!!!!\"\n");
	printf("�ͽſ� ���� ������: \"��!\"\n");
	printf("�系: \"����..! �ϴ� �� �׿��߰ڱ�...!\"\n");
	printf("\n�١١�'q'�� �����ø� ������ ���۵˴ϴ�.�١١�\n\n");                   // �̷��� ����. �����ʿ�
	scanf_s("%c", &go);
	battle(army, pot); pot++;  //����

	printf("�١١ٸ�� ���� óġ�ϼ̽��ϴ�!�١١�\n");


	printf("����: \"����.. ����������..? ��..����������....? \"\n");
	printf("�系: \"���ڲ��� �ͽſ� �鸮�̾����ϴ�...\"\n");

	printf("����: \"���� �� �������� ��Ƽ� �������� ����!.. �����忡�� �̸� �Ϸ� �ξ���.. �̾��ϳ�..\"\n");
	printf("���� ��..\n");
	printf("������: \"�� �׷�.. ���� �ǽ��� �����ϰڽ��ϴ�..' �˶󸮿� �ϳ���ϳ���...!!' \"\n");
	printf("\n�١١�'q'�� �����ø� ��ȭ�� ���۵˴ϴ�.�١١�\n\n");                   // �̷��� ����. �����ʿ�
	scanf_s("%c", &go);

	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a��~~ ����~ ��~~~ ��~~~~~~~~~~~~~~..\n");
	printf("\n\n\n\n\n");

	printf("�系: \"��.. ���� �ֳ���� �����α�..!\"\n");
	printf("\aGAME CLEAR~!.... MADE BY 'ADNYSSTUDIO'.. \n");




	return 0;
}





