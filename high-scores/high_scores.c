#include "high_scores.h"

#define TOP_SCORES (3)

int32_t latest(const int32_t *scores, size_t scores_len)
{
	return (scores[scores_len - 1]);
}

int32_t personal_best(const int32_t *scores, size_t scores_len)
{
	int32_t	best_score = scores[0];

	for (size_t i = 1; i < scores_len; i++)
	{
		if (scores[i] > best_score)
			best_score = scores[i];
	}
	return (best_score);
}

static int32_t	next_best_score(const int32_t *scores, size_t scores_len,
			int idx, size_t *prev_best_scores)
{
	int32_t best_score = -1;

	for (size_t i = 0; i < scores_len; i++)
	{
		int is_found = 0;
		for (int j = 0; j < idx; j++)
		{
			if (i == prev_best_scores[j])
				is_found = 1;
		}
		if (is_found == 0 && scores[i] > best_score)
		{
			prev_best_scores[idx] = i;
			best_score = scores[i];
		}
	}
	return (best_score);
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
			int32_t *output)
{
	size_t output_len = TOP_SCORES;
	size_t prev_best_scores[TOP_SCORES];

	if (scores_len < TOP_SCORES)
		output_len = scores_len;
	for (size_t i = 0; i < output_len; i++)
		output[i] = next_best_score(scores, scores_len, i, prev_best_scores);
	return (output_len);
}
