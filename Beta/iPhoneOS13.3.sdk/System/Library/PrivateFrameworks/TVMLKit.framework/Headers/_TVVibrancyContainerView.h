/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVVisualEffectView.h>

@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView

{
    UIView *_containedView;
}

@property (weak, nonatomic, readonly) UIView *containedView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithEffect:(id)arg1 containingView:(id)arg2;

@end
