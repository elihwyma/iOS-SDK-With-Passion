/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UISelectionFeedbackGenerator, UIViewPropertyAnimator;

@protocol CFXFaceTrackingRendererHapticsDelegate;

@interface CFXFaceReticleView : UIView

{
    _Bool _isShowingFaceIndicator;
    _Bool _canPerformFadeInAnimations;
    _Bool _canPerformFadeOutAnimations;
    id <CFXFaceTrackingRendererHapticsDelegate> _hapticsDelegate;
    UIImageView *_reticleImageView;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    UIViewPropertyAnimator *_bounceAnimator;
    UIViewPropertyAnimator *_fadeOutAnimator;
    UIViewPropertyAnimator *_animojiBounceAnimator;
    UIViewPropertyAnimator *_animojiFadeOutAnimator;
    NSMutableArray *_reticleLayersToAnimate;
}

@property (nonatomic) _Bool isShowingFaceIndicator;
@property (retain, nonatomic) UIImageView *reticleImageView;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) _Bool canPerformFadeInAnimations;
@property (nonatomic) _Bool canPerformFadeOutAnimations;
@property (retain, nonatomic) UIViewPropertyAnimator *bounceAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *animojiBounceAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *animojiFadeOutAnimator;
@property (retain, nonatomic) NSMutableArray *reticleLayersToAnimate;
@property (weak, nonatomic) id <CFXFaceTrackingRendererHapticsDelegate> hapticsDelegate;

- (void)userFeedbackForTrackingType:(int)arg1 needsHaptics:(_Bool)arg2;
- (void)fadeOutAndEndHapticWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 reticleType:(long long)arg2;
- (void)updateFrameForDisplayRelativeToBounds:(struct CGRect)arg1;
- (void)showAndAnimateAnimojiFaceReticle;
- (void)hideAnimojiFaceReticleAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupAnimojiReticleLayers;
- (void)fadeInAnimation;
- (void)fadeOutAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldUseHapticFeedback:(_Bool)arg1;
- (void)animojiFadeInAnimation;
- (void)animojiCloseAnimationWithCompletion:(CDUnknownBlockType)arg1;

@end
