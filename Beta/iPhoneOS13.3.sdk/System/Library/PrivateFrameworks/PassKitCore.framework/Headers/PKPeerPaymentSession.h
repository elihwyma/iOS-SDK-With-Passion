/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSession.h>

@interface PKPeerPaymentSession : PKPaymentSession

- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 shouldReregister:(_Bool *)arg4;
- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3;
- (_Bool)deleteApplet;

@end
