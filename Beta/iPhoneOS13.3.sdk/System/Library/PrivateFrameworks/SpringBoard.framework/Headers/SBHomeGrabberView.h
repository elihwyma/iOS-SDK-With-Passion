/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class MTLumaDodgePillSettings, MTLumaDodgePillView, NSMutableSet, NSString, SBAttentionAwarenessClient, SBFHomeGrabberSettings;

@protocol SBHomeGrabberDelegate;

@interface SBHomeGrabberView : UIView

{
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    _Bool _autoHides;
    _Bool _edgeProtectEnabled;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    _Bool _suppressesBounce;
    id <SBHomeGrabberDelegate> _delegate;
    long long _colorBias;
}

@property (weak, nonatomic) id <SBHomeGrabberDelegate> delegate;
@property (nonatomic) _Bool autoHides;
@property (nonatomic, getter=isEdgeProtectEnabled) _Bool edgeProtectEnabled;
@property (nonatomic) long long colorBias;
@property (nonatomic) _Bool suppressesBounce;
@property (nonatomic, readonly) double suggestedEdgeSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_bounce;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)updateStyle;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
- (void)setHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationSettings:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 shouldEnableGestures:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2 shouldEnableGestures:(_Bool)arg3;
- (id)_newPillView;
- (void)_updateIdleTouchAwarenessClient;
- (_Bool)_autohideEffectivelyEnabled;
- (void)resetAutoHideWithInitialDelay:(double)arg1;
- (void)resetAutoHide;
- (long long)_calculateStyle;
- (long long)_calculatePresence;
- (id)_animationSettingsForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 fromPresence:(long long)arg3 toPresence:(long long)arg4;
- (void)_updatePresence:(long long)arg1 style:(long long)arg2 withAnimationSettings:(id)arg3;
- (void)updateStyleWithAnimationSettings:(id)arg1;
- (_Bool)_edgeProtectEffectivelyEnabled;
- (long long)_calculateLumaStyle;
- (void)_animateToStyle:(long long)arg1 disallowAdditive:(_Bool)arg2 withAnimationSettings:(id)arg3;
- (struct CGRect)grabberFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_calculatePillFrame;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)turnOnAutoHideWithInitialDelay:(double)arg1;
- (void)turnOffAutoHideWithDelay:(double)arg1;
- (void)forgetBackgroundLuminance;
- (_Bool)_bounceHitTest:(struct CGPoint)arg1;
- (void)_invalidateInitialAutoHideTime;
- (void)_noteActiveForTouchThatShouldUnhideImmediately:(_Bool)arg1;

@end
