/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLSingleCardSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (_Bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
+ (unsigned long long)tileInfosUsedCount;
+ (_Bool)validTileInfoType:(id)arg1;

- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end
