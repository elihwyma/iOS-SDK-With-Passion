/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverBackgroundView.h>

__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)cornerRadius;
+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;

- (struct CGSize)_shadowOffset;
- (void)layoutSubviews;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (unsigned long long)arrowDirection;
- (struct UIEdgeInsets)_contentViewInsets;
- (double)arrowOffset;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (struct UIEdgeInsets)_shadowInsets;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;

@end
