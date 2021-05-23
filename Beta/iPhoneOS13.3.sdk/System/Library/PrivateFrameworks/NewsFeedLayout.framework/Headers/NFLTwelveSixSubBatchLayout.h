/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLTwelveSixSubBatchLayout : NFLSubBatchLayout

{
    NFLSingleComponentLayout *_largeComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLPairSubBatchLayout *_middlePairComponent;
    NFLPairSubBatchLayout *_bottomPairComponent;
}

@property (retain, nonatomic) NFLSingleComponentLayout *largeComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *topPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *middlePairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *bottomPairComponent;

- (_Bool)isValid;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)tileInfosUsed;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;

@end
