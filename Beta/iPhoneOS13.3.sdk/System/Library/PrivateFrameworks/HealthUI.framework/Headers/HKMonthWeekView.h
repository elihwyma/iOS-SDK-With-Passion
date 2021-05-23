/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKCalendarWeekView.h>

@class CALayer, NSArray;

@interface HKMonthWeekView : HKCalendarWeekView

{
    _Bool _displaysMonthTitle;
    _Bool _displaysTopBorderLine;
    _Bool _isRTL;
    CALayer *_topBorderLine;
    _Bool _accessoryContentsFetched;
    NSArray *_accessoryViews;
}

@property (nonatomic, readonly) NSArray *accessoryViews;
@property (nonatomic) _Bool accessoryContentsFetched;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (Class)cellClass;
- (_Bool)supportsRTL;
- (_Bool)containsMonthTitle;
- (void)setMonthWeekStart:(id)arg1;
- (void)clearAccessoryViews;
- (struct CGRect)_frameForTopBorderLine;
- (id)initWithDateCache:(id)arg1 displaysMonthTitle:(_Bool)arg2 displaysTopBorderLine:(_Bool)arg3;
- (Class)monthTitleClass;
- (void)selectedCalendarDay:(id)arg1;
- (id)cellMatchingDate:(id)arg1;
- (void)setTitleHighlighted:(_Bool)arg1;

@end
