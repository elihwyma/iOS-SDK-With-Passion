/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLAbstractRanker.h>

@interface NFLWhiteSpaceRanker : NFLAbstractRanker

- (double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(_Bool *)arg3;
- (id)rankerName;
- (long long)rankerWeight;

@end
