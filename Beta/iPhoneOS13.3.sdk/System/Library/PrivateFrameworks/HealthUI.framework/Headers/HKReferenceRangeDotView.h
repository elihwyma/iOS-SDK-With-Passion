/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIColor, _HKReferenceRangeDotViewDot;

@interface HKReferenceRangeDotView : UIView

{
    _HKReferenceRangeDotViewDot *_dotView;
}

@property (retain, nonatomic) UIColor *dotColor;
@property (weak, nonatomic) _HKReferenceRangeDotViewDot *dotView;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)desiredDotViewFrame;

@end
