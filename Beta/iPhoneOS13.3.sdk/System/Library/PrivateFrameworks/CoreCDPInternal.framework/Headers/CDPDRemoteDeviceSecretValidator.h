/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator

{
    CDUnknownBlockType _requestToJoinCompletion;
    _Bool _isWaitingForRemoteApproval;
}

- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (void)setValidSecretHandler:(CDUnknownBlockType)arg1;
- (id)_decoratedDelegate;

@end
