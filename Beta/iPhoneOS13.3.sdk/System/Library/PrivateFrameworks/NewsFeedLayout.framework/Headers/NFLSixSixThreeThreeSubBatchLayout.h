/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout

{
    _Bool _wideCellsOnLeft;
    NFLSingleComponentLayout *_topSixComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
}

@property (nonatomic) _Bool wideCellsOnLeft;
@property (retain, nonatomic) NFLSingleComponentLayout *topSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent;

- (_Bool)isValid;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)tileInfosUsed;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;

@end
