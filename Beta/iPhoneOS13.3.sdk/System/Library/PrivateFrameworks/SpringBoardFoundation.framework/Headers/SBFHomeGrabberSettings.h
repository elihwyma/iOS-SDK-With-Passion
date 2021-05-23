/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings, SBFFluidBehaviorSettings;

@interface SBFHomeGrabberSettings : PTSettings

{
    _Bool _enabled;
    _Bool _removeViewOnHide;
    _Bool _resetAutoHideTimeOnRotation;
    long long _initializationStyle;
    long long _edgeProtectOverride;
    long long _autoHideOverride;
    double _autoHideTime;
    double _autoHideTimeOnAppRequest;
    double _delayForUnhideOnTouch;
    double _delayForUnhideOnAppRequest;
    double _bounceHitTestOutsetTop;
    double _bounceHitTestOutsetSides;
    SBFAnimationSettings *_hideAnimationSettings;
    SBFAnimationSettings *_unhideAnimationSettings;
    SBFAnimationSettings *_hideForHomeGestureOwnershipAnimationSettings;
    SBFAnimationSettings *_unhideForHomeGestureOwnershipAnimationSettings;
    SBFAnimationSettings *_thinToProminentAnimationSettings;
    SBFAnimationSettings *_prominentToThinAnimationSettings;
    SBFAnimationSettings *_forcedProminentToThinAnimationSettings;
    SBFAnimationSettings *_lumaResponseAnimationSettings;
    SBFAnimationSettings *_initialLumaResponseAnimationSettings;
    SBFAnimationSettings *_rotationFadeOutAnimationSettings;
    SBFAnimationSettings *_rotationFadeInAnimationSettings;
    SBFFluidBehaviorSettings *_edgeProtectAnimationSettings;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long initializationStyle;
@property (nonatomic) _Bool removeViewOnHide;
@property (nonatomic) long long edgeProtectOverride;
@property (nonatomic) long long autoHideOverride;
@property (nonatomic) double autoHideTime;
@property (nonatomic) double autoHideTimeOnAppRequest;
@property (nonatomic) _Bool resetAutoHideTimeOnRotation;
@property (nonatomic) double delayForUnhideOnTouch;
@property (nonatomic) double delayForUnhideOnAppRequest;
@property (nonatomic) double bounceHitTestOutsetTop;
@property (nonatomic) double bounceHitTestOutsetSides;
@property (retain, nonatomic) SBFAnimationSettings *hideAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *unhideAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *thinToProminentAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *prominentToThinAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *forcedProminentToThinAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *lumaResponseAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *initialLumaResponseAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeOutAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeInAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *edgeProtectAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
