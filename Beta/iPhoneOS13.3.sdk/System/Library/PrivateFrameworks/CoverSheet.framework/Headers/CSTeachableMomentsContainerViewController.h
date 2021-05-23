/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSHomeAffordanceViewController, CSTeachableMomentsContainerView, NSMutableDictionary, NSString, NSTimer;

@protocol SBDashBoardHomeAffordanceAnimationViewProviding, SBUIBiometricResource;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase

{
    _Bool _authenticated;
    _Bool _updateTextLabelOnNextAnimation;
    _Bool _controlCenterCoachingIsHidden;
    CSHomeAffordanceViewController *_homeAffordanceViewController;
    unsigned long long _animationState;
    id <SBDashBoardHomeAffordanceAnimationViewProviding> _viewProvider;
    id <SBUIBiometricResource> _biometricResource;
    NSTimer *_fireOffAnimationTimer;
    NSMutableDictionary *_cachedLegibilityLabels;
}

@property (retain, nonatomic) NSTimer *fireOffAnimationTimer;
@property (nonatomic) _Bool authenticated;
@property (nonatomic) _Bool updateTextLabelOnNextAnimation;
@property (retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels;
@property (nonatomic) _Bool controlCenterCoachingIsHidden;
@property (nonatomic, readonly) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (nonatomic, readonly) CSHomeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id <SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider;
@property (retain, nonatomic) id <SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(_Bool)arg3;
+ (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 toLayer:(id)arg2;

- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)handleEvent:(id)arg1;
- (void)_contentSizeCategoryChanged;
- (void)_updateText:(id)arg1;
- (void)_setupTimer;
- (void)_updateTextLabel;
- (void)_updateLegibilitySettings;
- (void)_setControlCenterTutorsHidden:(_Bool)arg1;
- (void)_moveUpTimerForFiringAfterDelay:(double)arg1;
- (void)_cancelTimerAndResetAnimation;
- (void)_setupTimerWithDelay:(double)arg1;
- (void)_updateTextLabelIfNeeded;
- (void)_addHomeAffordanceAnimation;
- (void)_addTextAnimation;
- (_Bool)_shouldTeachAboutControlCenter;
- (void)_addControlCenterGrabberAnimation;
- (void)_addControlCenterGlyphAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (void)_addTextResetAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (void)_addControlCenterGlyphResetAnimation;
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;

@end
