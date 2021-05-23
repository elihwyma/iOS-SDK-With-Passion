/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase

{
    PKPaymentMerchantSession *_merchantSession;
}

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

- (id)bodyDictionary;
- (id)endpointName;

@end
