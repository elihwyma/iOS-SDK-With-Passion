/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (GKCachingAdditions)

+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)_gkUUIDString;
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;

- (_Bool)_gkIsNaturallyRTL;
- (_Bool)_gkSearchMatchesItem:(id)arg1 withSearchTerms:(id)arg2;
- (id)_gkLocaleSensitiveUppercaseString;
- (id)cacheKeyRepresentation;
- (id)_gkStringByUnescapingFromURLQuery;
- (id)_gkSHA1HashString;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkMD5HashData;
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;
- (_Bool)_gkIsMixedDirection;
- (id)_gkTruncationSymbolWithFormat:(id)arg1;
- (id)_gkArrayByTokenizingString;
- (id)_gkSHA256Hash;

@end
