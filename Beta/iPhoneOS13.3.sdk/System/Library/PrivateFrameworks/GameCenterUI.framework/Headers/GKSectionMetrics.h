/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKGridLayoutMetrics.h>

@class NSDictionary;

@interface GKSectionMetrics : GKGridLayoutMetrics

{
    _Bool _useViewSizeForFlowMaxColumnCount;
    _Bool _incrementalRevealConsumesPadding;
    _Bool _shouldAlwaysIncludeShowMore;
    _Bool _shouldShowSectionHeadersWhenNoItems;
    unsigned long long _alignment;
    double _lineSpacing;
    double _interitemSpacing;
    double _marginBetweenItems;
    double _desiredItemWidth;
    double _flowColumnWidth;
    unsigned long long _flowMaxColumnCount;
    double _desiredItemHeight;
    NSDictionary *_itemHeightList;
    unsigned long long _lastLineItemAlignment;
    unsigned long long _maximumVisibleItemCount;
    unsigned long long _incrementalRevealItemCount;
    double _calculatedItemHeightCache;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) double calculatedItemHeightCache;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double marginBetweenItems;
@property (nonatomic) double desiredItemWidth;
@property (nonatomic) double flowColumnWidth;
@property (nonatomic) _Bool useViewSizeForFlowMaxColumnCount;
@property (nonatomic) unsigned long long flowMaxColumnCount;
@property (nonatomic) double desiredItemHeight;
@property (nonatomic, readonly) double calculatedItemHeight;
@property (retain, nonatomic) NSDictionary *itemHeightList;
@property (nonatomic) unsigned long long lastLineItemAlignment;
@property (nonatomic) unsigned long long maximumVisibleItemCount;
@property (nonatomic) unsigned long long incrementalRevealItemCount;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double showMoreHeight;
@property (nonatomic) _Bool sectionHeadersShouldPin;
@property (nonatomic) _Bool incrementalRevealConsumesPadding;
@property (nonatomic) _Bool shouldAlwaysIncludeShowMore;
@property (nonatomic) _Bool shouldShowSectionHeadersWhenNoItems;

+ (id)metricsForIdiom:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdiom:(long long)arg1;
- (id)localDescription;
- (unsigned long long)flowMaxColumnCountForViewWidth:(double)arg1;
- (struct CGSize)itemSizeForCollectionView:(id)arg1;

@end
