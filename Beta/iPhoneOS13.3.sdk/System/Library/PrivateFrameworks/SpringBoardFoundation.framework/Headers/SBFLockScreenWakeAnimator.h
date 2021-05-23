/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFLockScreenDateView, UIView, UIVisualEffectView;

@interface SBFLockScreenWakeAnimator : NSObject

{
    long long _wakeState;
    UIVisualEffectView *_wakeEffectView;
    UIView *_superviewForDateViewAnimation;
    SBFLockScreenDateView *_dateView;
}

@property (nonatomic) long long wakeState;
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView;
@property (retain, nonatomic) UIView *superviewForDateViewAnimation;
@property (retain, nonatomic) SBFLockScreenDateView *dateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateWakeEffectsForWake:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_targetWakeStateForFadeIn:(_Bool)arg1;
- (id)_wakeEffectsForAnimatingWakeState:(long long)arg1;
- (id)_wakeEffectsForPersistentWakeState:(long long)arg1;
- (void)updateWakeEffectsForWake:(_Bool)arg1;

@end
