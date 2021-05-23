/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@interface HUCircleView : UIView

{
    _Bool _backgroundColorFollowsTintColor;
    _Bool _borderColorFollowsTintColor;
}

@property (nonatomic) _Bool backgroundColorFollowsTintColor;
@property (nonatomic) _Bool borderColorFollowsTintColor;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
