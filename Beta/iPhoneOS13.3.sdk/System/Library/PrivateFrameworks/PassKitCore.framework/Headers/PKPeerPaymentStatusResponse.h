/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse

{
    long long _status;
    NSString *_paymentIdentifier;
    NSString *_transactionIdentifier;
    NSArray *_actions;
    NSData *_amountHash;
}

@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) NSString *paymentIdentifier;
@property (copy, nonatomic, readonly) NSString *transactionIdentifier;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic, readonly) NSData *amountHash;

- (id)initWithData:(id)arg1;
- (_Bool)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2;

@end
