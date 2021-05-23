/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBFluidDismissalState, SBPresentationObservationToken, SBTransientOverlayBackgroundWindow, SBTransientOverlayViewController, SBTransientOverlayWindow, UIView;

@protocol BSInvalidatable;

@interface _SBTransientOverlayPresentedEntity : NSObject

{
    _Bool _rotating;
    _Bool _dismissing;
    _Bool _hasFinishedWindowInitialization;
    _Bool _hasPreservedInputViews;
    double _baseWindowLevel;
    SBTransientOverlayViewController *_viewController;
    SBTransientOverlayBackgroundWindow *_backgroundWindow;
    SBTransientOverlayWindow *_window;
    id <BSInvalidatable> _disableAutoUnlockAssertion;
    id <BSInvalidatable> _proximityEnabledAssertion;
    id <BSInvalidatable> _wallpaperAnimationSuspensionAssertion;
    SBFluidDismissalState *_fluidDismissalState;
    UIView *_fluidDismissalDimmingView;
    SBPresentationObservationToken *_bannerLongLookPresentationObservationToken;
    id <BSInvalidatable> _bannerLongLookWindowLevelAssertion;
    SBPresentationObservationToken *_controlCenterPresentationObservationToken;
    id <BSInvalidatable> _controlCenterWindowLevelAssertion;
    SBPresentationObservationToken *_siriPresentationObservationToken;
    id <BSInvalidatable> _siriWindowLevelAssertion;
}

@property (nonatomic, readonly) double baseWindowLevel;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;
@property (retain, nonatomic) SBTransientOverlayBackgroundWindow *backgroundWindow;
@property (nonatomic, getter=isRotating) _Bool rotating;
@property (nonatomic, readonly) SBTransientOverlayWindow *window;
@property (nonatomic, getter=isDismissing) _Bool dismissing;
@property (nonatomic) _Bool hasFinishedWindowInitialization;
@property (nonatomic) _Bool hasPreservedInputViews;
@property (retain, nonatomic) id <BSInvalidatable> disableAutoUnlockAssertion;
@property (retain, nonatomic) id <BSInvalidatable> proximityEnabledAssertion;
@property (retain, nonatomic) id <BSInvalidatable> wallpaperAnimationSuspensionAssertion;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (retain, nonatomic) UIView *fluidDismissalDimmingView;
@property (retain, nonatomic) SBPresentationObservationToken *bannerLongLookPresentationObservationToken;
@property (retain, nonatomic) id <BSInvalidatable> bannerLongLookWindowLevelAssertion;
@property (retain, nonatomic) SBPresentationObservationToken *controlCenterPresentationObservationToken;
@property (retain, nonatomic) id <BSInvalidatable> controlCenterWindowLevelAssertion;
@property (retain, nonatomic) SBPresentationObservationToken *siriPresentationObservationToken;
@property (retain, nonatomic) id <BSInvalidatable> siriWindowLevelAssertion;

- (id)initWithViewController:(id)arg1 window:(id)arg2 baseWindowLevel:(double)arg3;

@end
