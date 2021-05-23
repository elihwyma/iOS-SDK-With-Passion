/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRequestUpdate.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <Swift>

{
    NSArray *_shippingMethods;
    NSArray *_errors;
}

@property (copy, nonatomic) NSArray *shippingMethods;
@property (copy, nonatomic) NSArray *errors;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4;

@end
