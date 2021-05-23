/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsCore/FCOperation.h>

@class NFLFeedSettings, NFLRankedLayoutSource, NFLSubBatchLayout, NSArray;

@interface NFLSubBatchLayoutTilingOperation : FCOperation

{
    _Bool _showingAccessoryText;
    CDUnknownBlockType _tilingCompletionBlock;
    NFLFeedSettings *_feedSettings;
    NSArray *_tileInfos;
    NFLRankedLayoutSource *_rankedLayoutSource;
    double _tileProminenceScoreBalanceValue;
    NFLSubBatchLayout *_result;
    CDStruct_bfc4548b _layoutSeed;
}

@property (copy) NFLFeedSettings *feedSettings;
@property (copy) NSArray *tileInfos;
@property (retain) NFLRankedLayoutSource *rankedLayoutSource;
@property double tileProminenceScoreBalanceValue;
@property (copy, nonatomic) NFLSubBatchLayout *result;
@property (nonatomic) CDStruct_bfc4548b layoutSeed;
@property (nonatomic, getter=isShowingAccessoryText) _Bool showingAccessoryText;
@property (copy) CDUnknownBlockType tilingCompletionBlock;

+ (_Bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
+ (unsigned long long)tileInfosUsedCount;
+ (_Bool)validTileInfoType:(id)arg1;
+ (_Bool)tileInfosHaveValidType:(id)arg1;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (_Bool)isReliable;
- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id)initWithTileInfos:(id)arg1 feedSettings:(id)arg2 rankedLayoutSource:(id)arg3 tileProminenceScoreBalanceValue:(double)arg4 layoutSeed:(CDStruct_bfc4548b)arg5 showingAccessoryText:(_Bool)arg6;

@end
