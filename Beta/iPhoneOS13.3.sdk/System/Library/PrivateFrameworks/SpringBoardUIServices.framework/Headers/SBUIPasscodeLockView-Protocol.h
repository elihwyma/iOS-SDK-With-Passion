/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@class NSString, UIColor;

@protocol SBFLegibilitySettingsProvider, SBUIPasscodeLockViewDelegate;

@protocol SBUIPasscodeLockView <Swift>

@property (weak, nonatomic) id <SBUIPasscodeLockViewDelegate> delegate;
@property (nonatomic, readonly) int style;
@property (nonatomic, readonly) NSString *passcode;
@property (nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed;
@property (nonatomic) _Bool playsKeypadSounds;
@property (nonatomic) _Bool showsStatusField;
@property (nonatomic) _Bool showsEmergencyCallButton;
@property (nonatomic) _Bool showsCancelButton;
@property (nonatomic) _Bool usesBiometricPresentation;
@property (nonatomic) _Bool allowsAutomaticBiometricPresentationTransition;
@property (nonatomic) _Bool biometricPresentationAncillaryButtonsVisible;
@property (nonatomic) _Bool showsProudLock;
@property (nonatomic) long long passcodeLockViewState;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;
@property (nonatomic, getter=isScreenOn) _Bool screenOn;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) double backgroundAlpha;

- (unsigned short)reset;
- (unsigned short)setPasscodeLockViewState:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)resetForScreenOff;
- (unsigned short)updateStatusText:subtitle:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllowsStatusTextUpdatingOnResignFirstResponder: /* Error: Ran out of types for this method. */;
- (unsigned short)resetForFailedPasscode;
- (unsigned short)resetForSuccessViaPasscode: /* Error: Ran out of types for this method. */;
- (unsigned short)setKeypadVisible:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)resetForFailedMesaAttemptWithStatusText:andSubtitle: /* Error: Ran out of types for this method. */;
- (unsigned short)autofillForSuccessfulMesaAttemptWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)becomeActiveWithAnimationSettings: /* Error: Ran out of types for this method. */;

@end
