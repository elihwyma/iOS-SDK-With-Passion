/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

{
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    PKPaymentPass *_paymentPass;
}

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic, readonly) PKPaymentPass *paymentPass;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPaymentPass:(id)arg1;
- (_Bool)_isEqualToCredential:(id)arg1;

@end
