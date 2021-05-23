/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class CALayer, HKUITodayCirclePulseBackground;

@interface HKUITodayCirclePulseView : UIView

{
    UIView *_backgroundContainer;
    HKUITodayCirclePulseBackground *_background;
    CALayer *_dayLabel;
    double _circleDiameter;
}

@property (nonatomic) double circleDiameter;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutSubviews;
- (void)pulse:(CDUnknownBlockType)arg1;
- (void)setDayLabelContent:(id)arg1;

@end
