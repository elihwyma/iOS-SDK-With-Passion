/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIVisualEffectView.h>

@class UIView;

@interface SiriUIVisualEffectView : UIVisualEffectView

{
    UIView *_customView;
}

@property (retain, nonatomic) UIView *customView;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end
