/*끝 */
/*test commit asung*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void howto(void)
{		

	/*최아성이 커밋합니다*/
	/*백성진이 커밋합니다 190717*/
	int bullet;
	char enter = 'q';


	printf("************************************************************\n");
	printf("<><>튜토리얼<><>\n");
	printf("<><> 저주받은 닭 / 1~3 / 10보 / 10hp <><>\n이것은 종류는 닭이고, 10보거리만큼 떨어져 있음을 의미합니다.\n");
	printf("사내는 1~3 사이의 숫자, 즉 2를 입력해야 총을 발사시킬수 있습니다. 또, 맨 우측 10은 닭의hp를 의미합니다.사내의 총의 파괴력은 10입니다.\n");
	printf("사내와 동물 사이의 거리가 1보 미만이 된다면 사내는 죽게됩니다. 또, 사내가 총을 빗맞힐경우 동물과 사내의 거리는 좁아지게 됩니다.\n");
	printf("단번에 '유효숫자범위'의 정 가운데를 맞출경우, '일격필살' 효과가 적용됩니다. 어떤 동물은 '일격필살'이 아니면 사냥하지 못 할수도 있습니다.\n");
	printf("사내: \"자, 저 닭을 쏘아볼까.\"\n(1~3 사이의 숫자를 입력하세요.)\n");
	scanf_s("%d", &bullet); printf(".....탕!\n");
	if (bullet != 2)
	{
		while (bullet != 2)
		{
			printf("1~3 사이의 수를 맞추세요.(팁 : 1 2 3 중 1과 3을 제외한 것)\n");
			scanf_s("%d", &bullet); printf(".....탕!\n");
		}
	}
	printf("\a<><>'저주받은 닭'의 사냥에 성공하였다!<><>\n");
	printf("<><>'저주받은 닭'의 사체는 사라지고, 그자리에 '결정' 이 남았다!<><>\n");
	printf("************************************************************\n");
}

void intro(void)
{
	char enter = 'q';      //이 게임은 숫자로 진행되므로 잘못입력을 방지하기위해 qw로 함.
	printf("계속 : 'q' \n");

	// 아래 있는 대사가 너무 길면 적절히 수정하기**
	printf("************************************************************\n");
	printf("\a\a\a\a\a\a\a조총이 보급 된 왜란 후 나라가 채 진정이 되기\a도 전에, 나라\a의 가장 큰 xx도에서 기묘한 일이 벌어진다..\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("간밤에 사람이 없어지고 고양이가 점점 커지고, 평소엔 얌전하던 개가 아이를 물어뜯어 죽이게 되는일이 그것이다. 심지어는 밝은 대낮에도 이런일이 일어나기도 했다\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("조정에서는 xx도와 피해를 입은 전국 각지에서 빗발치는 상소들에 골머리를 썩히고 있었다. 전후 복구도 되지 않은 나라의 민심을 진정시키기 위해 조정은 특단의 조치를 취해야만 했다.\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("이에 왕은 신임하던 왕자에게 이러한 동물들의 기현상에 대해 상세히 조사하라는 임무를 내리기에 이른다.\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("몇달 후...\n왕자: \"아뢰옵기 황송하오나 동물들의 특이행동과 생김새의 변화는 귀신의 소행이라고 밖엔 생각되질 않습니다. \"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕: \"….너의 말이 사실이라면, 귀신의 한을 풀어주어야 하겠구나. 아직 전쟁의 여파가 채 가시지도 않았는데 전국에서 굿을 할수도, 또 궁에서 큰 규모의 제사를 지낼수도 없다. 어떻게하면 좋겠느냐?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"........그렇다면 차라리 없애버리는것은 어떻겠습니까.\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕: \"뭐라?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"왕명을 받들고 조사 중 어느 마을에 들렀더니, 조총의 명수라고 불린 한 사내가 있습니다. 전쟁 중 그는 혁혁한 공을 세웠으나 전쟁 후 귀신이 보인다는, 미쳐버렸다는 이유로 치하를 받지 못했다고 합니다.” “전쟁중 제가 각지를 돌며 전투를 준비할때 그와 같이하던 적이 있습니다.그는 자존심이 매우 강했습니다.” “몇 달 전 그를 다시 만나보니 그가 전쟁 중 사용했던 총을 잡으면 이상한것들이 보인다고 했습니다.  그의 자존심을 이용하여 귀신을 소탕함이 어떠신지요.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕: \"아들아,나는 너를 이 나라에서 가장 믿는다. 그렇게 하여라. 하지만 백성들의 귀엔 들어가면 안될것이야....\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf(".. dd마을 사내의 집 앞 \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"………..이렇게 되었으니 자네가 도와주어야겠네. 대왕께서도 이 일이 끝나면 자네의 원하는것은 무엇이든 들어주기로 하셨네. 자네가 필요한 것은 내가 힘써 보겠네. \"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"사람들은 저더러 미쳤다고 하지요. 하지만 왕자님, 왕자님이 수도로 올라가실때 귀신을 싹 잡아야겠다라는 농을 들은 후 혹시나 하는 마음에 이 탄환으로 보이는 귀신을 쏘아보았습니다.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"아니 ‘이 탄환’ 이라니?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"전쟁중, 동료의 응급처치 도중 빼낸 탄환입니다. 즉, '사람의 피를 머금은 탄환' 입니다.\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"그래, 쏘아보았다고 하였나? 어떻게 되었나?\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"귀신은 사라졌습니다. 그리고 그 자리에 이것이 남아있었습니다.\" (..뒤적뒤적)\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"…!\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"왕자님도 아시겠지요. 이것은 혼의 결정입니다. 무수히 많은 화살과 날아드는 유탄속의 전장에서 사람이 사망할 때 찰나에 반짝거리는 그것입니다. 그것이 조약돌만한 이 크기의 결정으로 남아있었습니다. \" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("왕자: \"그럴리가..\"\n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"저기, 저 눈이 빨갛고 불길한 기운이 드는 닭을 보십시오.\" \n");
	howto();       //튜토리얼
	printf("왕자: \"이럴수가... ...! 저 '결정'을 모아 성불시키면 되겠군!. 저것들을 모아주게. 사람들에겐 비밀로. rr평야로 가게. 피를 머금은 탄환은 내 힘써 구해보겠네. 나머지는 자네에게 맡기겠네.\" \n");
	scanf_s("%c", &enter); if (enter == 'w') { howto(); }
	printf("사내: \"rr평야를 확실하게 정리하면 앞으로는 이런일이 발생되지 않겠지...\" \n"); printf("\n");
	printf("\n");
	printf("************************************************************\n");
}
typedef struct monster
{
	int hp;                       //체력
	int range;                    //총 범위
	int head;                     //헤드샷
	int effective_range_a;          //유효 타격 범위 a
	int effective_range_b;          //유효 타격 범위 b
	int distance;                 //보폭수
	int distance_rate;            //보폭을 얼마나 줄이는지.
	char name[30];                  //이름

}Monster;


void game_over(void)      //전투에서 패배시 여기로 보냄.  강제종료.시키기....? 멀라
{
	printf("\n\n\n\n\n\n");
	exit(0);
}

void battle(Monster object, int pot)         //pot은 main 함수에서 설정하기.
{
	int bullet;
	int cnt_g = 0;
	int cnt_b = 0;


	printf("************************************************************\n");
	if (pot == 0) { printf("<><>TIP : 예를들어 1~25, 즉 25의 숫자범위를 가진 적이 있을 때, 매 공격 회마다 '유효숫자범위(=유효공격으로 판정되는 범위)'는 4~10일수도, 16~22일수도 있습니다.<><>\n"); }
	printf("지금까지 처치한 적의 수 : (%d/7) \n", pot);         //수정필요
	printf("<><>사냥을 시작합니다...!<><>\n");
	printf("<><> %s / 1~%d / %d보 / %dhp <><>\n", object.name, object.range, object.distance, object.hp);
	printf("사내: \"자,시작해볼까...!\"\n");
	printf("<><>1 ~ %d 안의 숫자를 눌러 '%s'을(를) 처치하세요.<><>\n", object.range, object.name);
	printf("\n");
	while (object.hp > 0)
	{
		printf("\n숫자입력: ");
		scanf_s("%d", &bullet); printf(".....탕!\n");   //소리내는 코드
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
				printf("\a\a☆☆☆'%s'을(를) '일격필살'로 처치했습니다...!☆☆☆\n", object.name);
				if (cnt_g == 1) { printf("사내: \"좋았어...!\"\n"); }
				else if (cnt_g == 2) { printf("사내: \"네 머리 크기를 탓해라...!\"\n"); }
				else if (cnt_g == 3) { printf("사내: \"네놈, 가까이보니 머리가 매우 크구나...!\"\n"); }
				else if (cnt_g == 4) { printf("사내: \"네번만에 머리를 쏘다니.. 나도 많이 죽었군. 하하...!\"\n"); }
				else if (cnt_g == object.distance - object.distance_rate) { printf("사내: \"흐흐...네놈, 왜 내앞에 누워있느냐? 좀전처럼 가까이 와보거라 하하하하!...\"\n"); }
				break;
			}
			object.hp -= 10;       //10의 피해. 

			if (object.hp <= 0) { printf("\a☆☆☆'%s'의 사냥에 성공하였습니다.☆☆☆\n", object.name); break; }
			printf("'%s'에게 10의 피해를 입혔습니다...! 적의 남은 hp: %d\n", object.name, object.hp);
			printf("앞으로 적으로부터 %d보 전...!\n", object.distance);       //n보에서 rate만큼의 수를 뺌.
			if (object.distance <= 0) { printf("'%s'이(가) 사내에게 근접하여 죽음에 이르는 상처를 내고 질병을 옮겼습니다...사내는 사망하였습니다.\n☆☆☆GAME OVER☆☆☆\n", object.name); game_over(); }      //게임 오버.
			if (cnt_g == object.distance - object.distance_rate) { printf("\a☆☆☆'%s'을(를) 처치할 수 있는 마지막 기회입니다.☆☆☆\n", object.name); }
			if (cnt_g == 1) { printf("사내: \"집중하자...!\"\n"); }
			else if (cnt_g == 2) { printf("사내: \"할수있다...!\"\n"); }
			else if (cnt_g == 3) { printf("사내: \"살짝 긴장이 되긴하네...!\"\n"); }
			else if (cnt_g == 4) { printf("사내: \"거의 다 왔다...!\"\n"); }
			else if (cnt_g >= 5) { printf("사내: \"좀 죽어라...!\"\n"); }
			else if (cnt_g == object.distance - object.distance_rate) { printf("사내: \"이번이 마지막 기회다.. 단 한발로 끝낸다...! 집중하자...!\"\n"); }

		}

		else if (bullet < object.effective_range_a || bullet > object.effective_range_b)        //다시 검토하기.
		{
			cnt_b++;
			object.distance = object.distance - object.distance_rate;

			printf("총알이 빗나갔습니다...!\n");
			printf("앞으로 적으로부터 %d보 전...!\n", object.distance);       //n보에서 rate만큼의 수를 뺌.
			if (object.distance <= 0) { printf("'%s'이(가) 사내에게 근접하여 죽음에 이르는 상처를 내고 질병을 옮겼습니다...사내는 사망하였습니다.\n☆☆☆GAME OVER☆☆☆\n", object.name); game_over(); }
			if (cnt_b == object.distance - object.distance_rate) { printf("\a☆☆☆'%s'을(를) 처치할 수 있는 마지막 기회입니다.☆☆☆\n", object.name); }
			if (cnt_b == 1) { printf("사내: \"집중하자...!\"\n"); }
			else if (cnt_b == 2) { printf("사내: \"젠장...!\"\n"); }
			else if (cnt_b == 3) { printf("사내: \"손이 떨리는군...!\"\n"); }
			else if (cnt_b == 4) { printf("사내: \"이대로는 안돼...!\"\n"); }
			else if (cnt_b >= 5) { printf("사내: \"이제 곧 죽겠구나...!\"\n"); }
			else if (cnt_b == object.distance - object.distance_rate) { printf("사내: \"이번이 마지막 기회다.. 단 한발로 끝낸다...! 이런곳에서 죽을수는 없어..!\"\n"); }

		}

	}      //while의 끝

	printf("<><\a>'%s'의 사냥에 성공하였다!<><>\n", object.name);
	printf("<><>'%s'의 사체는 사라지고, 그자리에 '결정' 이 남았다!<><>\n", object.name);
	if (cnt_g == 1) { printf("사내: \"음하하! 손쉬운 사냥이었다...!\"\n"); }
	else if (cnt_g == 2) { printf("사내: \"크하하하하하핫...!\"\n"); }
	else if (cnt_g == 3) { printf("사내: \"하하하하하하...!\"\n"); }
	else if (cnt_g == 4) { printf("사내: \"흐하하하하...!\"\n"); }
	else if (cnt_g == 5) { printf("사내: \"후하하하...!\"\n"); }
	else if (cnt_g >= 6) { printf("사내: \"하하하...!\"\n"); }
	else if (cnt_g == object.distance - object.distance_rate) { printf("사내: \"크하하하..! 그럼그렇지, 이런곳에서 죽을리 없지...!\"\n"); }
	printf("************************************************************\n");
}




int main(void)
{

	int pot = 0;               //보따리
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
	strcpy_s(stock1.name, "피를뿜는 닭");
	strcpy_s(stock2.name, "썩은눈 고양이");
	strcpy_s(stock3.name, "간교한 여우");
	strcpy_s(stock4.name, "눈세개 늑대");
	strcpy_s(stock5.name, "귀신에홀린 호랑이");
	strcpy_s(alien.name, "혐오스러운 파충류괴물");
	strcpy_s(army.name, "홀린 왕실 근위병들");



	printf("┌──────────귀사냥──────────┐\n");
	printf("│저장기능:없음, 제작:ADNYSSTUDIO, BY C-LANGUAGE│\n");
	printf("└───────────────────────┘\n");
	printf("\n");
	intro();// 인트로 자리.
	printf("사내: \"여기가 rr평야.. 으스스한 느낌이 드는군...\"\n");
	printf("아이들: \"으아악!!!!!!!...\"\n");
	printf("사내: \"무슨일이지?...\"\n");
	printf("아이1: \"아저씨! 아저씨도 얼른 도망쳐요! 미친닭이 저기 있어요!...\"\n");
	printf("사내: \"첫 본격적인 사냥이군...!\"\n");
	printf("\n☆☆☆'q'를 누르시면 전투가 시작됩니다.☆☆☆\n\n");                   // 이렇게 하자. 수정필요
	scanf_s("%c", &go);

	battle(stock1, pot); pot++;  //전투

	printf("사내: \"후..오늘은 밤이 늦었으니 쉬러가자..\"\n");
	printf("어느 주막 앞...\n");
	printf("???:\"끼에에에!!!!\"\n");
	printf("사내: \"뭐지...!?\"\n");

	battle(stock2, pot); pot++;  //전투

	printf("사내: \"이렇게 들끓는 곳에 사람이 산다니..어이가 없군..\"\n");
	printf("다음날..\n");

	printf("사내: \"?!...뭐야 이 시체는?...\"\n");
	printf("사내: \"어제 있었던 습격으로 사람들이 다 죽었나보군..!\"\n");
	printf("소녀: \"아저씨..우리엄마 찾아줘요... 어떤 나쁜 아저씨가 끌고갔어요...\"\n");
	printf("사내: \"...너.....\"\n");
	printf("탕....!\"\n");
	printf("소녀: \"끼꼐꼐께꼐!!!! 들킨건가...! \"\n");

	battle(stock3, pot); pot++;  //전투

	printf("사내: \"소름끼치는군..시체로 변장을 하다니....!\"\n");
	printf("사내: \"저 산으로 가서 나머지를 소탕해야겠어..\"\n");


	printf("gg산..\n");
	printf("사내: \"크억...!\"\n");

	battle(stock4, pot); pot++;  //전투

	printf("사내: \"급습이라니... 너무한것 아닌가.. 그래도 저 봉우리만 넘으면 이 산은 소탕 완료군..\"\n");
	printf("???:\"어흐응!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\"\n");
	printf("사내: \"!!!!!\"\n");

	battle(stock5, pot); pot++;  //전투


	printf("사내: \"소탕 완료...! 위험하니 내가 직접 왕자에게 가서 이 '결정'을 전달해야겠어. 수도로 가자...\"\n");
	printf("...수도의 xx강..\n");
	printf("웅..우웅...웅웅...우우우웅우웅우\a웅..!\n");
	printf("사내: \"왜이렇게 결정보따리가 웅웅대지..? 앗 저게 뭐야!!\"\n");
	printf("??!?: \"꾸에에에에에에엑......!!!!\"\n");

	battle(alien, pot); pot++;  //전투

	printf("사내: \"후우..전국의 결정이란 결정은 다 모은것 같군..\"\n");
	printf("궁궐 안..");
	printf("왕자: \"어서오게..! 자네가 해낼 줄 믿고있었네...! 어서 이리로 와, 보따리를 보여주게..!\"\n");
	printf("신하: \"크흑...크흑......!\"\n");
	printf("부욱.....  쨍그랑...!\n");
	printf("결정이 깨졌다...! 원혼들이 왕자의 몸에 스며들었다...!\n");

	printf("귀신에 씌인 왕자: \"허억.. 저자를 어서 죽여라!! 죽여!!죽여!!!!!!!\"\n");
	printf("귀신에 씌인 근위병: \"옛!\"\n");
	printf("사내: \"젠장..! 일단 다 죽여야겠군...!\"\n");
	printf("\n☆☆☆'q'를 누르시면 전투가 시작됩니다.☆☆☆\n\n");                   // 이렇게 하자. 수정필요
	scanf_s("%c", &go);
	battle(army, pot); pot++;  //전투

	printf("☆☆☆모든 적을 처치하셨습니다!☆☆☆\n");


	printf("왕자: \"으윽.. 무슨일이지..? 왜..근위병들이....? \"\n");
	printf("사내: \"왕자께서 귀신에 들리셨었습니다...\"\n");

	printf("왕자: \"당장 저 결정들을 모아서 제단으로 가게!.. 제사장에겐 미리 일러 두었네.. 미안하네..\"\n");
	printf("제단 앞..\n");
	printf("제사장: \"자 그럼.. 지금 의식을 시작하겠습니다..' 알라리오 니나노니나노...!!' \"\n");
	printf("\n☆☆☆'q'를 누르시면 정화가 시작됩니다.☆☆☆\n\n");                   // 이렇게 하자. 수정필요
	scanf_s("%c", &go);

	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a펑~~ 펑펑~ 펑~~~ 펑~~~~~~~~~~~~~~..\n");
	printf("\n\n\n\n\n");

	printf("사내: \"후.. 역시 왜놈들이 문제로군..!\"\n");
	printf("\aGAME CLEAR~!.... MADE BY 'ADNYSSTUDIO'.. \n");




	return 0;
}





