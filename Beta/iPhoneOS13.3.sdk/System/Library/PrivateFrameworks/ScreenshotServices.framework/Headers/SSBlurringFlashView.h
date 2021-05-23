/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <ScreenshotServices/SSFlashView.h>

@class SSBlurView, UIViewPropertyAnimator, _SSSFlashSuperColorView;

@interface SSBlurringFlashView : SSFlashView

{
    CDUnknownBlockType _completionBlock;
    SSBlurView *_blurView;
    _SSSFlashSuperColorView *_superColorView;
    UIViewPropertyAnimator *_superColorViewOpacityAnimator;
    UIViewPropertyAnimator *_blurViewRadiusAnimator;
    _Bool _isCompletingFlashWithNewTimingParameters;
    _Bool _superColorViewBackgroundColorAnimatorCompleted;
    _Bool _blurViewRadiusAnimatorCompleted;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)flashWithCompletion:(CDUnknownBlockType)arg1;
- (void)_blurViewRadiusAnimatorCompleted;
- (void)_superColorViewBackgroundColorAnimatorCompleted;
- (void)_runCompletionBlockIfAppropriate;

@end
