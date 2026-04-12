//#include <stdio.h>
//#include <inttypes.h>
//
//void updateScore(int32_t* score1, int32_t points);
//
//int32_t* campareScore(int32_t* score1, int32_t* score2);
//
//void doubleScore(int32_t* score);
//
//int main() {
//	int32_t* highest_player = NULL;
//
//	int32_t player1_score = 100;
//
//	int32_t player2_score = 150;
//
//
//	//输出更新：
//	printf("球员得分情况：\nplayer1_score:%" PRId32 "  player2_score:%" PRId32 "\n\n", player1_score, player2_score);
//
//	updateScore(&player1_score, 70);
//
//	//输出更新：
//	printf("两名球员得分情况：\nplayer1_score:%" PRId32 "  player2_score:%" PRId32 "\n\n", player1_score, player2_score);
//
//	highest_player = campareScore(&player1_score, &player2_score);
//	doubleScore(highest_player);
//
//	//输出更新：
//	printf("两名球员得分情况：\nplayer1_score:%" PRId32 "  player2_score:%" PRId32 "\n\n", player1_score, player2_score);
//
//	return 0;
//}
////更新队员的得分情况
//void updateScore(int32_t* score1, int32_t points) {
//	*score1 += points;
//}
////找出得分最高的球员
//int32_t* campareScore(int32_t* score1, int32_t* score2) {
//	return (*score1 > *score2) ? score1 : score2;
//}
////将得分最高的球员 --→ 分数*2
//void doubleScore(int32_t* score) {
//	*score *= 2;
//}
