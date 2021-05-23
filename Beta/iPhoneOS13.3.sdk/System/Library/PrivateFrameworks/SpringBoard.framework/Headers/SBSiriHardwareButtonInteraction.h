/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

@class NSString, SiriLongPressButtonSource;

@protocol SiriAssertion;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase

{
    double _initialPressDownTime;
    long long _siriButtonIdentifier;
    SiriLongPressButtonSource *_siriActivationSource;
    double _activationInterval;
    id <SiriAssertion> _siriPreheatAssertion;
    id <SiriAssertion> _siriButtonDownAssertion;
}

@property (nonatomic) long long siriButtonIdentifier;
@property (retain, nonatomic) SiriLongPressButtonSource *siriActivationSource;
@property (nonatomic) double activationInterval;
@property (retain, nonatomic) id <SiriAssertion> siriPreheatAssertion;
@property (retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion;
@property (nonatomic) double initialPressDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;
+ (_Bool)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1;

- (id)hardwareButtonGestureParameters;
- (void)observeFinalPressUp;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeLongPress;
- (_Bool)consumeSinglePressUp;
- (void)observeLongPressCanceled;
- (id)initWithSiriButton:(long long)arg1;
- (void)_cancelPreheating;
- (void)_cancelAllSiriActions;
- (void)_preheatSiriForPresentationAfterInterval:(double)arg1;
- (void)_siriHomeButtonPrefsDidChange:(id)arg1;

@end
