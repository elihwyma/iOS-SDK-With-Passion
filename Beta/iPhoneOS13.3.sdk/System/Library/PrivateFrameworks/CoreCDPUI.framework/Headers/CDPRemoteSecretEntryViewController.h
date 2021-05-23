/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>

@class CDPDevice, CDPRemoteDeviceSecretValidator, CDPRemoteValidationEscapeOffer, NSNumber, NSString;

@protocol CDPRemoteSecretEntryDelegate;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController

{
    _Bool _hasNumericSecret;
    NSNumber *_numericSecretLength;
    CDPDevice *_remoteRecoveryDevice;
    long long _remainingAttempts;
    CDPRemoteDeviceSecretValidator *_validator;
    id <CDPRemoteSecretEntryDelegate> _delegate;
    unsigned long long _validationState;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
}

@property (nonatomic, readonly) CDPRemoteDeviceSecretValidator *validator;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithValidator:(id)arg1;
- (void)setPane:(id)arg1;
- (_Bool)useProgressiveDelays;
- (_Bool)validatePIN:(id)arg1;
- (_Bool)simplePIN;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)pinInstructionsPrompt;
- (id)initWithIsNumeric:(_Bool)arg1 numericLength:(id)arg2 validator:(id)arg3 delegate:(id)arg4;
- (id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)showIncorrectRemoteSecretAlertForPasscode:(id)arg1 withRecoveryError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didEnterValidRemoteSecret:(id)arg1;

@end
