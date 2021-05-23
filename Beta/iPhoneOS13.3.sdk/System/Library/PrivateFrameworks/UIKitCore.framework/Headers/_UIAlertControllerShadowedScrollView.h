/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class _UIAlertControllerGradientView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShadowedScrollView : UIScrollView

{
    _UIAlertControllerGradientView *_shadowView;
    _Bool _shouldPinToBottomOnResize;
}

@property (nonatomic) _Bool shouldPinToBottomOnResize;

- (void)setBounds:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGRect)_boundsForPinningToBottomWithNewBounds:(struct CGRect)arg1;
- (void)_updateScrollabilityAndShadow;

@end
