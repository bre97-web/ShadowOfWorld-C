#include <stdio.h>
#include <string.h>
#include <windows.h>

#include "statement.h"

//  Use GBK coding.

void pulseOn(void) {
  char call[64] = "This software is CIOLENT/SEX/GAY";
  char centerOne[64] =
      "\n\n\n\n\n\n\n\n\n\n\n"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20";

  _Repeatedly_puts_(100, 3, "", "",
                    "                                                 ");
  _Repeatedly_puts_(100, 1,
                    "                                ******       *******      "
                    "  ********       ",
                    "                                **   ***     **     **    "
                    "  **             ",
                    "                                **    **     **     **    "
                    "  **             ");
  _Repeatedly_puts_(100, 1,
                    "                                **   **      **     **    "
                    "  **             ",
                    "                                ******       **    **     "
                    "  *****          ",
                    "                                **   ***     ******       "
                    "  **             ");
  _Repeatedly_puts_(100, 1,
                    "                                **    ***    **    **     "
                    "  **             ",
                    "                                **    ***    **     **    "
                    "  **             ",
                    "                                ********     **      **   "
                    "  **             ");
  _Repeatedly_puts_(100, 1,
                    "                                ******       **       **  "
                    "  **********     ",
                    "                          ",
                    "                         -------------------NINE - "
                    "SEVEN-------------------");

  system("cls");
  _Cut_puts_(call, 50, 50, 1, centerOne);
}

void gameCenterGra(void) {
  char strGamePuts1[] = "-gamePassage\n";
  char strGamePuts2[] = "-gameStart\n";
  char strGamePuts3[] = "-gameHelp\n";
  char strGamePuts4[] = "-gameWriter\n";
  char strGamePuts5[] = "-gameSetting\n";
  char strGamePutsAddUserDataIf[] = "-gameProceed\n";

  system("cls");

  if (gameProceedIf() == 1) {
    _Cut_puts_(strGamePutsAddUserDataIf, 25, 25, 0, "");
  }
  _Cut_puts_(strGamePuts1, 25, 25, 0, "");
  _Cut_puts_(strGamePuts2, 25, 25, 0, "");
  _Cut_puts_(strGamePuts3, 25, 25, 0, "");
  _Cut_puts_(strGamePuts4, 25, 25, 0, "");
  _Cut_puts_(strGamePuts5, 25, 25, 0, "");
}

void getHelp(void) {
  char strGameHelpPuts[] =
      "操作:\n\x20\x20\x20\x20输入 1 或者 2 进行选择,输入其他字符无效\n"
      "简介:\n\x20\x20\x20\x20用户扮演一名名叫-山葵山野-,"
      "引导主角做出一系列行为,某些抉择影响后续内容\n"
      "\x20\x20\x20\x20出现'||'时,代表用户需选择两项中的一项,输入1或者2后,"
      "按下回车即表示用户确定了答案\n"
      "关于:\n\x20\x20\x20\x20作者:Bre 97\n\x20\x20\x20\x20名称:Black of Road "
      "will Leave\n"
      "控制台内某些英文意味着什么?"
      "\n\x20\x20\x20\x20这些英文是作者补充的仪式感产物\n"
      "关于存档问题:\n\x20\x20\x20\x20每一章对应一个存档点,注意 "
      "低存档点会覆盖高存档点\n";
  char strValue[32];

  system("cls");
  _Cut_puts_(strGameHelpPuts, 25, 25, 0, "");
  system("pause");

  gets_s(strValue, 32);
}

void getCharacter(void) {
  char characterInf[] =
      "1. 角色信息\n"
      "2. 时间表\n"
      "3. 世界设定\n"
      "4. 五次大战\n"
      "5. 角色属性对比\n"
      "0. 返回主界面\n";
  char strValue[32];
  int userPut = 0;
  int type = 0;

  s:;

  system("cls");
  _Cut_puts_(characterInf, 50, 0, 0, "");
  scanf_s("%d", &userPut);

  switch (userPut) {
    case 0:type++;break;
    case 1:roleInf();break;
    case 2:worldTimeList(); break;
    case 3:worldInf();break;
    case 4:worldWar();break;
    case 5:roleInfBattle();break;
    default:goto s;break;
  }

  system("pause");

  if (type == 0) {
    goto s;
  } else {
    gets_s(strValue, 32);
  }
}
void roleInf(void) {
  char role1[] =
      "山野(山葵山野)\n"
      "年龄:14\n"
      "身高:174cm\n"
      "体重:47kg\n"
      "战力:50|80\n"
      "体力:40\n"
      "特性:暗杀|敏捷|斗志|策划\n"
      "特殊设定:狼人\n"
      "Information:\n"
      "出生在隐居家庭,曾居住在Abyss内部第五层,那儿危机四伏."
      "父母在第四次新奈大战中战死,后被陌生人领养.在3岁时,"
      "领养山野的陌生人被暗杀,随后没有消息..."
      "直到第五次治烟大战,山野出现在战场."
      "那年他16岁提名全国军事领衔\n山野是一个冷淡且神秘的孩子,在他诞生到现在,"
      "没有多少信息,"
      "更多的是他和忠胜的故事,以及他在战场上的故事,他大概于12岁首次参与战争,"
      "前后死去了很多同伴,悲伤的时候会和忠胜去河边谈心.和忠胜相识的位置,"
      "有一条激流河,"
      "这条河承载了他俩感情的见证,被他俩取名为盼望湖畔."
      "\n由于忠胜的父母在暗影军团工作,没有时间在家,所以山野常常在忠胜家里休息."
      "\n";
  char role2[] =
      "阳炎(平山阳炎)\n年龄:17\n身高:170cm\n体重:70kg\n战力:70|70\n体力:"
      "70\n特性:平均\n缺点:平均\nInformation:\n平均\n";
  char role3[] =
      "Name:忠胜(消久忠胜)\n"
      "年龄:14\n"
      "身高:171cm\n"
      "体重:54kg\n"
      "战力:70|100\n"
      "体力:80\n"
      "特性:感情|和平|输出|固执|爆发|希望\n"
      "特殊设定:二重身\n"
      "Information:\n"
      "富裕的家里,存在着温暖的爱,忠胜诞生在这里.\n生下来的样子很可爱,白白胖胖,"
      "体型较大,爱吃肉,年幼的时候爱与同学一起玩耍,几年过去后,"
      "伴随着战争带来的伤亡,"
      "无辜的孩子被残忍杀害,忠胜身边的伙伴越来越少,这样的变化迫使忠胜变得内向."
      "直到遇到了山野这样的朋友,陪伴了山野4年的忠胜再次开朗起来.\n"
      "忠胜没有参与过大战,但他参与过众多危险的微型任务,"
      "所以各方面要比其他普通士兵强大,"
      "强大的忠胜分享了很多自己的见解给周围的伙伴,但伙伴们最终都死去."
      "能够分享的对象,就只剩山野了.\n";
  char role4[] =
      "带土(宇智波带土)\n"
      "年龄:14\n"
      "身高:169cm\n"
      "体重:50kg\n"
      "战力:20|100\n体力:30\n"
      "特性:正面|辅助|潜伏|集成\n"
      "特殊设定:无\n"
      "information:\n"
      "孤儿,诞生在Abyss,效劳于暗影军团.\n";
  char characterInf[] =
      "1. 山野(主角)\n"
      "2. 阳炎(废弃)\n"
      "3. 忠胜\n"
      "4. 带土(主角)\n"
      ". 巫师团(组织)\n"
      ". 暗影军团(组织)\n"
      ". 元素之力兽人"
      ". 腐朽之力兽人";
  int userPut = 0;

  system("cls");
  _Cut_puts_(characterInf, 50, 0, 0, "");
  
  scanf_s("%d", &userPut);
  system("cls");

  switch (userPut) {
    case 1:puts(role1);break;
    case 2:puts(role2);break;
    case 3:puts(role3);break;
    case 4:puts(role4);break;
  }
}
void worldTimeList(void) {
  char timeList[] = 
    "|\n"
    "|忍界大战\n"
    "|\n"
    "|斑鸠大战\n"
    "|50年后\n"
    "|家族大战\n"
    "|\n"
    "|山野诞生\n"
    "|忠胜诞生 & 带土诞生\n"
    "|\n"
    "|暗影军团成立 & 山野+带土被领养\n"
    "|新奈大战 & 山野+带土父母战死\n"
    "|\n"
    "|8年后\n"
    "|当前时间段\n"
    "|2年后\n"
    "|治烟大战\n";

  system("cls");
  puts(timeList);
}
void worldInf(void) {
  char world1[] =
      "Abyss:\n"
      "这里生机勃勃,绿色充满着这里,是一个自然的培养基.从顶层到底层,除了大自然的绿色,还散布着各种元素,同时居住着众多魔兽,元素与魔兽来自底部世界-破碎领域-.\n"
      "在破碎领域的兽人受到外域侵袭,元素之力兽人的领袖萨尔带着他们的同胞被迫避难到这里,他们没有对外引战,而是在Abyss定居下来.随着时间流逝,元素之力覆盖了个Abyss,Abyss变得不再完全是绿色,而是多彩.面对外域的威胁,萨尔需要更强大的力量去对抗,他们吸收着漩涡的精华,计划着某一天重返破碎领域.\n"
      "Abyss的入口在星球-漩涡-的地表中洛丹伦森林的边缘,入口巨大,像给漩涡开了一个洞.Abyss正如黑洞一样侵蚀着这个星球.随着Abyss不断汲取能量,漩涡终会散去所有力量.\n";
  char world2[] =
      "外域:\n"
      "外域.即不在星球漩涡存在,";

  char characterInf[] =
      "1. Abyss(地区)\n"
      "2. 外域(世界)\n"
      "3. 破碎领域(世界)\n"
      "4. 漩涡(世界)\n"
      "5. 重影(通道)\n";

  int userPut = 0;

  system("cls");
  _Cut_puts_(characterInf, 50, 0, 0, "");

  scanf_s("%d", &userPut);
  system("cls");

  switch (userPut) {
    case 1:puts(world1);break;
    case 2:puts(world2); break;
  }
}
void worldWar(void) {
  char world1[] =
      "忍界大战:\n"
      "领地纠纷是世界分裂的导火索,双方政府加速进入对立状态,由于'艾露'的加入,"
      "忍界大战开始.\n"
      "忍界大战的结束,是世界分裂为两国的历史转折点."
      "它引导了两国和平条约的签订,结束了单一国家内部秩序混乱的局面,"
      "将内部仇恨转向利益对立面.为了减少了子民间的矛盾,建立法制社会,"
      "并将发泄目标转移向敌国.\n"
      "这一次大战,伤亡数达10000余人,经济损失达40000x\n";
  char world2[] =
      "斑鸠大战:\n"
      "以'艾露'为首的巫师团引发斑鸠大战,为了阻止巫师团占领星球的欲望,"
      "原本敌对的两国首次携手对抗巫师团."
      "巫师团的进攻是惊动外域的罪魁祸首.\n胜利最终属于原住民,失败的'艾露'"
      "惨死在逃跑的道路上.\n"
      "伤亡数略高,两国综合30000伤亡数,经济损失120000x."
      "这次斑鸠大战的胜利结束让处于高度紧张的两个国家进入和平阶段.\n";
  char world3[] =
      "家族大战:\n"
      "吸血鬼,巫师,二重身的加入,使得大战复杂起来,涉及的利益链较多.历史没有记载."
      "\n"
      "最终以原住民和吸血鬼的胜利宣告结束,由胜利者共同建立家园,建立秩序,"
      "首部法律文献就在此大战后诞生.\n";
  char world4[] =
      "新奈大战:\n"
      "在此战争开始前的50年里,没有一次大战.\n"
      "第四次新奈大战,是影响最大,唯一一个使全球统一的战争,分为'军阀战役''"
      "中畔战役''新奈战役'\n"
      "以新奈命名,是因为战争开始于他,结束于他.他即是一名罪犯,也是一名英雄."
      "新奈放出了Abyss的无穷巨兽,杀死了雪国的三位"
      "长老,摧毁了两国的核心城市.杀死无数无辜难民,燃烧曾是自己的生活的家园,"
      "将自己的梦想夷为平地.引领自己的狼人大军杀入火国.\n"
      "同时,新奈终结了两国腐败政府的统治,打断了与黑山的邪恶交易.\n"
      "这次大战,使这个星球的生物数量降到了历史最低,仅死亡数高达29000,"
      "伤亡数13500,经济倒退10年."
      "但大战后的第五年的经济水平就赶超了大战前.\n";
  char world5[] =
      "治烟大战:\n"
      "经过12年的沉淀,星球面临了史上最大的问题,外域.\n"
      "在面对巫师与巫师团的重回,只有放手一搏才有可能再次胜利"
      "在此期间死去了无数原住民,吸血鬼,和从未露面的狼人,"
      "狼人原本是从Abyss释放出来的.\n"
      "有幸狼人的加入,才能使局面推向优势,若没有狼人的加入,这次战争极有可能失败,"
      "并且拥有灭族的可能性.\n"
      "面对巫师与巫师团的记载,只有用魔幻来表示.他们拥有强大的法术能力,"
      "从很早的第三次家族大战就有他们的身影,"
      "接连失败的巫师团最终被狼人统统消灭.\n"
      "说来也巧,第五次治烟大战那天,正好是月圆之夜,狼人的全部实力发挥了出来,"
      "杀死了对巫师团来说至关重要的人物,"
      "'二重身'.在对巫师团与外域的研究中,指出巫师团依靠的是'二重身',而且杀死'"
      "二重身'后,外域与巫师团建立的联系将会中断"
      "只有杀死'二重身',才能将巫师团推向绝望的境地.\n在原住民与同盟的合作中,"
      "诞生出了许多英雄,在战争胜利后的时期被无数人歌谣.\n";
  int userPut = 0;
  char characterInf[] =
      "1. 忍界大战\n"
      "2. 斑鸠大战\n"
      "3. 家族大战\n"
      "4. 新奈大战\n"
      "5. 治烟大战\n";

  system("cls");
  _Cut_puts_(characterInf, 50, 0, 0, "");

  scanf_s("%d", &userPut);
  system("cls");

  switch (userPut) {
    case 1:
      puts(world1);
      break;
    case 2:
      puts(world2);
      break;
    case 3:
      puts(world3);
      break;
    case 4:
      puts(world4);
      break;
    case 5:
      puts(world5);
      break;
  }
}
void roleInfBattle(void) {
  char pk[] =
      "|Name| 山野| 忠胜| 带土| 阳炎| -优势-\n"
      "|战力|   ==| ====|  ===|  ===| -忠胜-\n"
      "|体力|   ==| ====|    =|  ===| -忠胜-\n"
      "|特性| ====|   ==|  ===|    =| -山野-\n"
      "|能力|  ===|   ==|=====|  ===| -带土-\n"
      "|平均|   ==|  ===| ====|  ===| -带土-\n"
      "|相对|   ==|  ===|   ==|  ===| -忠胜-\n"
      "|绝对|   ==|  ===| ====|  ===| -带土-\n"
      "|空间| 2-6 | 4-8 | 1-9 | 5-5 |\n";

  system("cls");
  puts(pk);
}

void getOver(void) {
  char gameOver[32] = "Game Over.";
  char centerOne[64] =
      "\n\n\n\n\n\n\n\n\n\n\n"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20";

  system("cls");

  _Cut_puts_(gameOver, 50, 50, 1, centerOne);
  Sleep(200);

  getWriter();
}

void writer(void) {
  char by[20] = {84, 104, 101, 32, 119, 114, 105, 116, 101, 114,
                 32, 105, 115, 32, 66,  114, 101, 57,  55,  0};

  system("cls");

  _Cut_puts_(by, 50, 50, 0, "                                        ");
}

void getWriter(void) {
  char drama[32] = "Drama : Bre 97";
  char author[32] = "Author : Bre 97";
  char compose[32] = "Compose : Bre 97";
  char by[32] = "Code : Bre 97";
  char thanks[64] = "Thank you to play this game with enjoing";
  char centerOne[64] =
      "\n\n\n\n\n\n\n\n\n\n\n"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
      "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20";

  system("cls");

  _Cut_puts_(drama, 50, 50, 1, centerOne);
  system("cls");
  _Cut_puts_(author, 50, 50, 1, centerOne);
  system("cls");
  _Cut_puts_(compose, 50, 50, 1, centerOne);
  system("cls");
  _Cut_puts_(by, 50, 200, 1, centerOne);
  system("cls");
  _Cut_puts_ASCII_(thanks, 100, 100, centerOne);
  system("cls");
}
