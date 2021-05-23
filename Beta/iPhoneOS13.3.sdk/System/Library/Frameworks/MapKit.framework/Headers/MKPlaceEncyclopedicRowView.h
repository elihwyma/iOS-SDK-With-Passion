/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView

{
    NSMutableArray *_factoidViews;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
    _Bool _isStandAlone;
    NSArray *_items;
    NSMutableArray *_labelConstraints;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableArray *labelConstraints;
@property (nonatomic) _Bool isStandAlone;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_contentSizeDidChange;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)refreshContent:(_Bool)arg1;
- (void)refreshColumnCount;
- (void)addWidthAndSideSpacingConstraintsForLabels;

@end
