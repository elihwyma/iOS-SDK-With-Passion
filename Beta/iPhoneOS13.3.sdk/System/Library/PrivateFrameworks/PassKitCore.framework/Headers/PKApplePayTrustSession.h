/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession

- (id)keyWithIdentifier:(id)arg1;
- (_Bool)deleteKeyWithIdentifier:(id)arg1;
- (id)createKeyWithRequest:(id)arg1 error:(id *)arg2;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2;

@end
