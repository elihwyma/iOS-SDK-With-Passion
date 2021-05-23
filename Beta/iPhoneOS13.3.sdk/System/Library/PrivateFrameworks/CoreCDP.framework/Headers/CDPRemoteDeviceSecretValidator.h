/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject

{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

- (void)cancelValidationWithError:(id)arg1;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;

@end
