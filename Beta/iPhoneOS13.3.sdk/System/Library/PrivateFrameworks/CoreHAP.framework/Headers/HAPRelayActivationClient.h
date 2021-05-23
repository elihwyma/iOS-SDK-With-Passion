/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject

{
    id <HAPRelayActivationClientDelegate> _delegate;
}

@property (weak) id <HAPRelayActivationClientDelegate> delegate;

- (void)open;
- (void)close;
- (void)requestChallenge;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;

@end
