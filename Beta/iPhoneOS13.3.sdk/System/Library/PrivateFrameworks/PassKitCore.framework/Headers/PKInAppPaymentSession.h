/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession

- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (id)_appletForPaymentApplication:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4;

@end
