/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLCollapsedArticlesSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (unsigned long long)tileInfosUsedCount;
+ (_Bool)validTileInfoType:(id)arg1;

- (_Bool)isReliable;
- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end
