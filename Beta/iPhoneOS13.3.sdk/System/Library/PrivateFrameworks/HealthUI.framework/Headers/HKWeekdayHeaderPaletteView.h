/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView

{
    NSMutableArray *_weekdayLabels;
}

+ (double)preferredHeight;
+ (id)weekdayFont;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1 shouldSupportRTL:(_Bool)arg2;
- (double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3;

@end
