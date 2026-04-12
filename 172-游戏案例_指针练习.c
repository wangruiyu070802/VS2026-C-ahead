//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//#define EXP_PER_LEVEL 100
//#define MAX_LEVEL 10
//#define HINTS_COUNT 10
//
//void increase_exp(int32_t* exp, int32_t amount);
//bool check_level_up(int32_t* exp, int32_t* level);
//const char* get_treasure_hint(int32_t level);
//
//int main() {
//	/*
//		游戏概念
//
//		玩家属性： exp, level.
//
//		解谜：
//
//		等级提升：
//
//		游戏的目标
//	*/
//	//玩家的经验
//	int32_t player_exp = 0;
//	//玩家的等级
//	int32_t player_level = 1;
//
//	//模拟玩家解谜获得经验值
//	increase_exp(&player_exp, 50);
//
//	increase_exp(&player_exp, 75);
//
//	if (check_level_up(&player_exp, &player_level)) {
//		printf("%s\n", get_treasure_hint(player_level));
//	}
//	else {
//		printf("还需要更多的经验才能升级！\n");
//	}
//
//	return 0;
//}
////————————————————————————————————————————————————————————————————————————————
////增加经验值
//void increase_exp(int32_t* exp, int32_t amount) {
//	*exp += amount;
//}
//
////检查等级是否提升
//bool check_level_up(int32_t* exp, int32_t* level) {
//	while (*exp >= EXP_PER_LEVEL && *level < MAX_LEVEL) {
//		*exp -= EXP_PER_LEVEL;
//		(*level)++;
//		printf("恭喜你升级到了%" PRId32 "级！\n", *level);
//		return true;
//	}
//	return false;
//}
//
////检查等级是否足够触发提示
//const char* get_treasure_hint(int32_t level) {
//	static const char* hints[HINTS_COUNT] = {
//		"提示 1：宝箱隐藏在古老的瀑布后面，请返回基地！",
//		"提示 2：寻找被遗忘的失落之剑..."
//	};
//	if (level > 0 && (size_t)level <= HINTS_COUNT) {
//		return hints[(size_t)level - 1];
//	}
//	return "未知提示：请确保你在等级的有效范围内才能解锁宝箱提示！";
//}