/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView

{
    double _date;
    _Bool _indentsForDots;
    _Bool _showWeekNumber;
}

@property (nonatomic) _Bool showWeekNumber;
@property (nonatomic) double date;
@property (nonatomic) _Bool indentsForDots;

- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_rectForOffetTextShadow:(struct CGRect)arg1;
- (id)_normalTextColor;
- (id)_normalTextShadowColor;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect)arg4;
- (id)_weekNumberFont;

@end
