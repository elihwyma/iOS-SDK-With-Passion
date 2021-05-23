/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountFeatureDescriptor.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <Swift>

{
    NSDecimalNumber *_feePercentage;
    NSDecimalNumber *_minimumFee;
    NSDecimalNumber *_maximumFee;
}

@property (copy, nonatomic) NSDecimalNumber *feePercentage;
@property (copy, nonatomic) NSDecimalNumber *minimumFee;
@property (copy, nonatomic) NSDecimalNumber *maximumFee;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1;

@end
