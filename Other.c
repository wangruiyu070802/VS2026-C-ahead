//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <float.h>
//int32_t main() {
//
//	/*require:
//	roomA: 玩家需要有VIP身份；
//	roomB: 玩家需要至少有10个金币，或者是有一个特殊道具；
//	roomC: 玩家需要有VIP身份，并且金币数量不少于20；
//	roomD: 玩家需要有VIP身份或特殊道具，并且金币数量不少于5；
//	*/
//
//	//Pyler install:
//	bool is_vip = true;
//	bool has_speacil_item = false;
//	uint32_t coins = 15;
//
//	//roomA:
//	if (is_vip) {
//		puts("Enter roomA!");
//	}
//	else {
//		puts("Can't enter roomA!");
//	}
//
//	if ((coins >= 10) || (has_speacil_item)) {
//		puts("Enter roomB!");
//	}
//	else {
//		puts("Can't enter roomB!");
//	}
//
//	if ((is_vip) && (coins >= 20)) {
//		puts("Enter roomC!");
//	}
//	else {
//		puts("Can't enter roomC!");
//	}
//
//	if ((is_vip || has_speacil_item) && (coins >= 5)) {
//		puts("Enter roomD!");
//	}
//	else {
//		puts("Can't enter roomD!");
//	}
//
//	return 0;
//}