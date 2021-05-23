/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGAnimationDataStore, PXGAnimatorLayout, PXGIndexSetArray, PXGSpriteDataStore;

@interface PXGAnimator : NSObject

{
    PXGAnimationDataStore *_animationDataStore;
    PXGAnimatorLayout *_animatorLayout;
    double _lastUpdateTime;
    unsigned int _numberOfProlongatedSprites;
    PXGIndexSetArray *_spriteIndexesByGroupIndex;
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;
    _Bool _isSkippingAnimations;
    _Bool _animating;
    double _speed;
    long long _computeCount;
}

@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic) double speed;
@property (nonatomic, readonly) long long computeCount;

- (id)init;
- (void)dealloc;
- (void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(struct CGPoint)arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id *)arg8 animationLayout:(out id *)arg9;
- (void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2;
- (void)_stopAllAnimations;

@end
