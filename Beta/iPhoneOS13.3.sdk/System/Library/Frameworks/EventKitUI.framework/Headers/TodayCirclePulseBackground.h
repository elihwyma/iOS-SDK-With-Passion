/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@interface TodayCirclePulseBackground : UIView

{
    _Bool _usesRoundedRectInsteadOfCircle;
    double _roundedRectCornerRadius;
}

@property (nonatomic) _Bool usesRoundedRectInsteadOfCircle;
@property (nonatomic) double roundedRectCornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
