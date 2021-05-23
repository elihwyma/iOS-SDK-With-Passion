/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView

{
    UIView *_innerContentView;
}

@property (retain, nonatomic) UIView *innerContentView;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithInnerContentView:(id)arg1;

@end
