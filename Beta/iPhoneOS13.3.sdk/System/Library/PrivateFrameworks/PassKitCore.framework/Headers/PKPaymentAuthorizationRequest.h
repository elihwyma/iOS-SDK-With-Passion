/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject

{
    NSData *_credential;
    NSData *_nonceData;
    PKPaymentRequest *_paymentRequest;
}

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) NSData *nonceData;
@property (nonatomic, readonly) PKPaymentRequest *paymentRequest;

- (id)initWithPaymentRequest:(id)arg1;

@end
