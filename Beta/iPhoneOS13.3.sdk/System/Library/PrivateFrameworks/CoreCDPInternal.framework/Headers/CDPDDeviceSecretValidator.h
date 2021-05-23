/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPDevice, NSMutableDictionary, NSMutableSet;

@protocol CDPDDeviceSecretValidatorDelegate;

@interface CDPDDeviceSecretValidator : NSObject

{
    _Bool _isAttemptingRecovery;
    unsigned long long _failedAttempts;
    NSMutableDictionary *_failedSecrets;
    NSMutableSet *_failedRecoveryKeys;
    NSMutableSet *_failedSingleICSCs;
    NSMutableDictionary *_recoveryErrors;
    _Bool _depletedRemainingAttempts;
    CDPContext *_context;
    CDPDevice *_currentDevice;
    _Bool _isUsingMultipleICSC;
    unsigned long long supportedEscapeOfferMask;
    CDUnknownBlockType _validSecretHandler;
    id <CDPDDeviceSecretValidatorDelegate> _delegate;
}

@property (nonatomic) _Bool isUsingMultipleICSC;
@property (copy, nonatomic) CDUnknownBlockType validSecretHandler;
@property (weak, nonatomic) id <CDPDDeviceSecretValidatorDelegate> delegate;
@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (id)init;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)failedAttempts;
- (_Bool)isAttemptingRecovery;
- (_Bool)_isFailedSecret:(id)arg1 forDevice:(id)arg2;
- (void)_handleMultiCSCRecoveryResults:(id)arg1 clique:(id)arg2 type:(unsigned long long)arg3 secret:(id)arg4 device:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_attemptToRecoverWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3;
- (void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleDelegateValidationError:(id)arg1;
- (_Bool)_isInvalidICSCError:(id)arg1;
- (id)_failedSecretsForDevice:(id)arg1;
- (id)_failedSingleICSCs;

@end
