/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UIVisualEffectView;

@interface CAMSnapshotView : UIView

{
    _Bool _blurred;
    _Bool _dimmed;
    _Bool __supportsBlur;
    UIView *_snapshotView;
    long long _desiredAspectRatio;
    UIView *__lowQualityBlurView;
    UIView *__dimmingView;
    UIVisualEffectView *__blurView;
    long long __blurStyleForEffectAnimationFactory;
}

@property (nonatomic, readonly) _Bool _supportsBlur;
@property (nonatomic, readonly) UIView *_lowQualityBlurView;
@property (nonatomic, readonly) UIView *_dimmingView;
@property (retain, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView;
@property (nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) long long _blurStyleForEffectAnimationFactory;
@property (nonatomic, readonly) UIView *snapshotView;
@property (nonatomic, readonly) long long desiredAspectRatio;
@property (nonatomic) _Bool blurred;
@property (nonatomic) _Bool dimmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)removeInflightBlurAnimations;
- (void)prepareForResumingUsingCrossfade;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2 style:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applySnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_removeSnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (double)_resumeFadeInDuration;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(_Bool)arg2 inputRadiusAmount:(double *)arg3 inputRadiusDuration:(double *)arg4 inputRadiusDelay:(double *)arg5 inputRadiusTimingFunction:(id *)arg6 opacityAmount:(double *)arg7 opacityDuration:(double *)arg8 opacityDelay:(double *)arg9 opacityTimingFunction:(id *)arg10;
- (void)_setupLowQualityBlurOnSnapshot;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(_Bool)arg2 opacityAmount:(double *)arg3 opacityDuration:(double *)arg4 opacityDelay:(double *)arg5 opacityTimingFunction:(id *)arg6 targetView:(id *)arg7;
- (void)_setupDimOnSnapshot;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;

@end
