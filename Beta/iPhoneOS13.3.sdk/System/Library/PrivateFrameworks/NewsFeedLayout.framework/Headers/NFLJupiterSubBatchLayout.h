/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLJupiterSubBatchLayout : NFLSubBatchLayout

{
    int _layoutType;
    NFLSingleComponentLayout *_largeSixComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_topSixComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
}

@property (nonatomic) int layoutType;
@property (retain, nonatomic) NFLSingleComponentLayout *largeSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *topSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent;

- (_Bool)isValid;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)tileInfosUsed;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2;

@end
