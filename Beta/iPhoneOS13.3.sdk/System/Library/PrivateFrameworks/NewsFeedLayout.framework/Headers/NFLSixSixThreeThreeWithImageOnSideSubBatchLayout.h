/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout

{
    NFLSingleComponentLayout *_leftSixImageOnTopComponent;
    NFLSingleComponentLayout *_rightSixImageOnTopComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLSingleComponentLayout *_bottomImageOnSideComponent;
}

@property (retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *topPairComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent;

- (_Bool)isValid;
- (double)rank;
- (unsigned long long)columnSpan;
- (unsigned long long)rowSpan;
- (id)tileInfosUsed;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;

@end
