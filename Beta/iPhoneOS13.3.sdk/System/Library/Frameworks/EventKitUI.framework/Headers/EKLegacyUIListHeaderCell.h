/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView

{
    EKLegacyUIListHeaderCellContentView *_contentView;
    _Bool _showWeekNumber;
}

@property (nonatomic) double date;
@property (nonatomic) _Bool indentsForDots;
@property (nonatomic, readonly) _Bool reusable;
@property (nonatomic) _Bool showWeekNumber;

+ (id)_noonLocalizedString;
+ (id)_allDayLocalizedString;
+ (void)_invalidateWidths;
+ (void)_calculateWidths;
+ (double)xMidpointForCalendarDot;
+ (double)timeWidthIncludingDots:(_Bool)arg1;

- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect)arg1 date:(double)arg2;

@end
